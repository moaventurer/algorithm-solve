#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int* arr = new int[9];
    int total_sum=0;
    for (int i=0; i<9; i++){
        cin >> arr[i];
        total_sum += arr[i];
    }
    sort(arr, arr+9, less<int>());

    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            int minus = arr[i] + arr[j];
            if((total_sum - minus) == 100){
                for(int t=0; t<9; t++){
                    if(t == i || t == j) continue;
                    cout << arr[t] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}