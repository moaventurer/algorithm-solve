#include <iostream>

using namespace std;

int main(){
    int* arr = new int[20];
    int* tmp = new int[20];
    for(int i=0; i<20; i++){
        arr[i] = i+1;        
    }
    for(int i=0; i<10; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;

        for(int j=a; j<b+1; j++) tmp[j] = arr[j];
        for(int j=0; j<b-a+1; j++) arr[a+j] = tmp[b-j];
    }

    for(int i=0; i<20; i++){
        cout << arr[i] << " ";
    }
    return 0;
}