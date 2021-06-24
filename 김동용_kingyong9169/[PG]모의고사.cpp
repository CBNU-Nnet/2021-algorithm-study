#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> first={1,2,3,4,5}; //1번
    vector<int> second={2,1,2,3,2,4,2,5}; //2번
    vector<int> third={3,3,1,1,2,2,4,4,5,5}; //3번
    vector<int> score(3,0); //수포자들의 점수를 저장할 변수
    
    for(int i=0;i<answers.size();i++){ //정답의 개수만큼 반복
        if(answers[i]==first[i%5]) score[0]+=1; //1번과 일치하면 1번의 점수 증가
        if(answers[i]==second[i%8]) score[1]+=1; //2번과 일치하면 2번의 점수 증가
        if(answers[i]==third[i%10]) score[2]+=1; //3번과 일치하면 3번의 점수 증가
    }
    int max_score=max(max(score[0],score[1]),score[2]);
    for(int i=0;i<3;i++){
        if(score[i]==max_score){
            answer.push_back(i+1);
        }
    }
    
    return answer;
