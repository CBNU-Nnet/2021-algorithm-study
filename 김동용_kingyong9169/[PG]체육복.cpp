#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int num, answer = 0, i=0, j=0;
    vector<int> result;
    vector<int>::iterator it;
    
    for(i=0;i<lost.size();i++){
        for(j=0;j<reserve.size();j++){
            if(reserve[j]==lost[i]){
                reserve.erase(reserve.begin() + j);
                result.push_back(lost[i]);
            }
        }
    }
    for(i=0;i<lost.size();i++){
        for(j=0;j<reserve.size();j++){
            if(reserve[j]==lost[i]+1||reserve[j]==lost[i]-1){
                num=lost[i];
                it=find(result.begin(),result.end(),num);
                if(it==result.end()){
                    reserve.erase(reserve.begin() + j);
                    result.push_back(lost[i]);
                }
            }
        }
    }
    
    for(i=0;i<reserve.size();i++){
        num=reserve[i];
        it=find(result.begin(),result.end(),num);
        if(it==reserve.end())
            result.push_back(reserve[i]);
    }
    
    for(i=1;i<=n;i++){
        num=i;
        it=find(result.begin(),result.end(),i);
        if(it==result.end()){
            it=find(lost.begin(),lost.end(),i);
            if(it==lost.end())
                result.push_back(i);
        }
    }
    
    answer = result.size();
    return answer;
}