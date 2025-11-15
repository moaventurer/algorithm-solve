#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int* a, int* b){
    return a[0] < b[0];
}

int main(){
    int** num = new int*[9];
    for(int i=0; i<9; i++){
        num[i] = new int[2];
        cin >> num[i][0];
        num[i][1] = i;
    }

    sort(num, num+9, cmp);

    cout << num[8][0] << '\n' << num[8][1]+1;

    return 0;
}