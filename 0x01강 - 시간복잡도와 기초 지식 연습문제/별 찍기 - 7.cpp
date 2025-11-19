#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    char* arr1 = new char[2*N+1];
    char* arr2 = new char[2*N+1];
    for(int i=0; i<2*N; i++){
        arr1[i] = '*';
        arr2[i] = ' ';
    }
    for(int i=1; i<N; i++){
        cout.write(arr2, N-i);
        cout.write(arr1, 1 + (i-1)*2);
        cout << '\n';
    }
    for(int i=1; i<=N; i++){
        cout.write(arr2, i-1);
        cout.write(arr1, (N-i)*2 + 1);
        cout << '\n';
    }

    delete[] arr1;
    delete[] arr2;
    return 0;
}