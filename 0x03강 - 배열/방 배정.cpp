#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    
    int N, K;
    cin >> N >> K;
    int students[2][7] = {{}};

    for(int i=0; i<N; i++){
        int s, g;
        cin >> s >> g;
        students[s][g]++;
    }

    int room = 0;
    for(int g=1; g<7; g++){
        for(int s=0; s<2; s++){
            room += students[s][g] / K;
            if(students[s][g] % K > 0) room++;
        }
    }
    cout << room;
    return 0;
}