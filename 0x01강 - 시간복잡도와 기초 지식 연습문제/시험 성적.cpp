#include <iostream>

using namespace std;

int main(){
    int score;
    char *rank = new char[2];
    rank[1] = '\0';
    cin >> score;

    if(score<60)               rank[0] = 'F';
    else if (score<70)         rank[0] = 'D';
    else if (score<80)         rank[0] = 'C';
    else if (score<90)         rank[0] = 'B';
    else                       rank[0] = 'A';
    cout << rank;
    return 0;
}