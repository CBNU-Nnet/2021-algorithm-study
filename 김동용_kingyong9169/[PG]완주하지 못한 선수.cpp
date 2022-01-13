#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> result;
    for(string name:participant)
        ++result[name];
    for(string name:completion)
        --result[name];
    for(auto pair:result)
        if(pair.second>0)
            return pair.first;
}