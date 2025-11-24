#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
    char arr1[1001] = "";
    char arr2[1001] = "";
    cin >> arr1 >> arr2;

    int cnt['z'-'a'+1] = {};
    for(int i=0; i<strlen(arr1); i++){
        cnt[arr1[i]-'a']++;
    }
    for(int i=0; i<strlen(arr2); i++){
        cnt[arr2[i]-'a']--;
    }

    int count=0;
    for(int i=0; i<'z'-'a'+1; i++){
        count += abs(cnt[i]);
    }
    cout << count;
    return 0;
}