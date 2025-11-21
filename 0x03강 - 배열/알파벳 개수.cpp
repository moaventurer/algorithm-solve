#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num = 'z'-'a'+1;
    int *arr = new int[num+1]{0};
    string word;
    cin >> word;
    
    for(int j=0; j<word.length(); j++){
        arr[word[j]-'a']++;
    }

    for(int i=0; i<num; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}