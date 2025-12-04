#include <iostream>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    bool *arr = new bool[N+1]{0,};

    int visit_cnt = 0; // 총 방문 횟수
    cout << '<';

    int cur_pos = 0;
    while(visit_cnt < N){
        int move=0; // 이동 횟수
        while(move < K){
            cur_pos = cur_pos%N + 1; // circular list 이동
            if(arr[cur_pos]) continue;  // 이미 방문한 경우, 패스
            else move++; // 방문하지 않은 경우, 이동 횟수 증가
        }
        arr[cur_pos] = 1;
        visit_cnt++;

        if(visit_cnt == N) 
            cout << cur_pos << ">";
        else
            cout << cur_pos << ", ";
    }

    return 0;
}