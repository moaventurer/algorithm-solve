#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    char* arr1 = new char[N+1];
    char* arr2 = new char[N+1];
    for(int i=0; i<N; i++){
        arr1[i] = '*';
        arr2[i] = ' ';
    }
    for(int i=N; i>0; i--){
        cout.write(arr1, i);
        cout << '\n';
    }
    delete[] arr1;
    delete[] arr2;
    return 0;
}