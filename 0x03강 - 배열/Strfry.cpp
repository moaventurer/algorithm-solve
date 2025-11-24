#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;

    char arr1[1001] = "";
    char arr2[1001] = "";
    for(int i=0; i<N; i++){
        cin >> arr1 >> arr2;
        int cnt['z'-'a'+1] = {};
        for(int i=0; i<strlen(arr1); i++){
            cnt[arr1[i]-'a']++;
            cnt[arr2[i]-'a']--;
        }

        bool is_pos = true;
        for(int i=0; i<'z'-'a'+1; i++){            
            if(cnt[i] != 0){
                is_pos = false;
                break;
            } 
        }

        if(is_pos){
            cout << "Possible" << '\n';
        } else{
            cout << "Impossible" << '\n';
        }
    }
    return 0;
}