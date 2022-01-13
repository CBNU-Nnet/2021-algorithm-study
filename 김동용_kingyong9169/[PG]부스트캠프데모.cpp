#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    int pos,x,y;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i!=j&&v[i][0]==v[j][0]){
                y=v[i][1];
                pos=j;
                for(int k=0;k<v.size();k++){
                    if(pos!=k&&v[pos][1]==v[k][1]){
                        x=v[k][0];
                        goto stop;
                    }
                }
            }
            else if(i!=j&&v[i][1]==v[j][1]){
                x=v[i][0];
                pos=j;
                for(int k=0;k<v.size();k++){
                    if(pos!=k&&v[pos][0]==v[k][0]){
                        y=v[k][1];
                        goto stop;
                    }
                }
            }
        }
    }
    stop:
    ans.push_back(x);
    ans.push_back(y);
    return ans;
}