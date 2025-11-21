#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    char *arr = new char[N+1];
    for(int i=0; i<N; i++){
        arr[i] = '*';
    }

    for(int i=0; i<N; i++){
        cout.write(arr, i+1);
        cout << '\n';
    }
    delete[] arr;

    return 0;
}