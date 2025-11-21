#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sum=0;
    int min_n=1000;
    for(int i=0; i<7; i++){
        int n;
        cin >> n;

        if(n%2==1){
            sum += n;
            min_n = min(min_n, n);
        }
    }
    if(sum == 0){
        cout << -1;
    }
    else{
        cout << sum << '\n' << min_n;
    }
    return 0;
}