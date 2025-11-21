#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n1, n2;
    cin >> n1 >> n2;
    long long a = min(n1, n2), b = max(n1, n2);

    if(a == b){
        cout << 0 << '\n';
        return 0;
    }
    
    cout << b - a - 1 << '\n';
    
    for(int i=0; i<b-a-1; i++){
        cout << a+i+1 << ' ';
    }
    return 0;
}