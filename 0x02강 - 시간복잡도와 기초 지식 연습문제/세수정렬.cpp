#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a<b){
        if(b<c)
            cout << a << " " << b << " " << c;
        else{
            if(a<c)
                cout << a << " " << c << " " << b;
            else
                cout << c << " " << a << " " << b;
        }
    } else{ // b<a
        if(a<c)
            cout << b << " " << a << " " << c;
        else{ // c<a
            if(b<c)
                cout << b << " " << c << " " << a;
            else
                cout << c << " " << b << " " << a;
        }
    }
    return 0;
}