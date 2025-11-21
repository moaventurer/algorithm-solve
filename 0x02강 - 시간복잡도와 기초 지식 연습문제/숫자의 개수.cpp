#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;

    int* arr = new int[10]{0,};
    while(mul > 0){
        int n = mul%10;
        mul = mul / 10;
        arr[n] ++;
    }
    for(int i=0; i<10; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}