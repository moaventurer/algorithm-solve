#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string result;
    result = to_string(a+b) + "\n"
            + to_string(a-b) + "\n"
            + to_string(a*b) + "\n"
            + to_string(a/b) + "\n"
            + to_string(a%b) + "\n";
    cout << result;
    return 0;
}