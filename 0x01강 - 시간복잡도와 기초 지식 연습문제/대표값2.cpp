#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int sum = 0;
    int* arr = new int[5];
    for(int i=0; i<5; i++){
        int n;
        cin >> n;
        sum += n;
        arr[i] = n;
    }

    sort(arr, arr+5, greater<int>());
    cout << sum/5 << '\n' << arr[2];
    return 0;
}