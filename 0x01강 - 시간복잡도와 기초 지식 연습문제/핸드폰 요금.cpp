#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int* arr = new int[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int a_cost = 0;
    int b_cost = 0;

    for(int i=0; i<N; i++){
        a_cost += (arr[i]/30 + 1)*10;
        b_cost += (arr[i]/60 + 1)*15;
    }
    if(a_cost == b_cost){
        cout << "Y M " << a_cost;
    } else if(a_cost < b_cost){
        cout << "Y " << a_cost;
    } else{
        cout << "M " << b_cost;
    }
    return 0;
}