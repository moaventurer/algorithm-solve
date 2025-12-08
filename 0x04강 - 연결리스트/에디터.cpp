#include <iostream>
#include <stack>

using namespace std;

int main(){
    string str;
    cin >> str;
    int T;
    cin >> T;

    // left cursor
    stack<char> left;
    for(int i=0; i<str.length(); i++){
        left.push(str[i]);
    }
    // right cursor
    stack<char> right;

    while(T-- > 0){
        char cmd;
        cin >> cmd;
        if(cmd == 'L'){
            if(left.empty()) continue;
            right.push(left.top());
            left.pop();

        } else if(cmd == 'D'){
            if(right.empty()) continue;
            left.push(right.top());
            right.pop();

        } else if(cmd == 'B'){
            if(left.empty()) continue;
            left.pop();
        } else{
            char chr;
            cin >> chr;
            left.push(chr);
        }
    }

    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }

    while(!right.empty()){
        cout << right.top();
        right.pop();
    }


    return 0;
}