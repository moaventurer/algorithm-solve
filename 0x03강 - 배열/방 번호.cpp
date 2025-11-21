#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int *arr = new int[10]{};
    while( N > 0){
        int n = N%10;
        N /= 10;
        arr[n]++;
    }

    // 6번, 9번을 골고루 배분
    int sum = arr[6] + arr[9];
    arr[6] = sum / 2;
    arr[9] = sum / 2;
    if(sum % 2 == 1){
        arr[9]++;
    }

    int max = -1;
    for(int i=0; i<10; i++){
        if(max < arr[i]) max = arr[i];
    }
    cout << max;
    return 0;
}