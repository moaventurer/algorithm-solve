#include <iostream>
#include <vector>

using namespace std;

int main(){
    char *result = new char[3];
    for(int i=0; i<3; i++){
        int a = 0;
        for(int j=0; j<4; j++){
            int tt;
            cin >> tt;
            if(tt == 0) a++;
        }
        if(a==0) cout << 'E';
        else if(a==1) cout << 'A';
        else if(a==2) cout << 'B';
        else if(a==3) cout << 'C';
        else cout << 'D';
        cout << '\n';
    }

    return 0;
}