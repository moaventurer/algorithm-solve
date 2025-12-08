#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;

    struct TextNode{
        char word;
        TextNode* f = NULL;
        TextNode* b = NULL;
    };
    
    for(int n=0; n<N; n++){
        string cmd_list;
        cin >> cmd_list;
        
        // 커서 위치 : Node의 뒤라고 가정
        TextNode* root = new TextNode;
        TextNode* curNode = root;
        for(int i=0; i<cmd_list.length(); i++){
            char cmd = cmd_list[i];
            switch(cmd){
                case '<':{
                    if(curNode != root){
                        curNode = curNode->f;
                    }
                    break;
                }
                case '>':{
                    if(curNode->b != NULL){
                        curNode = curNode->b;
                    }
                    break;
                }
                case '-':{
                    if(curNode != root){
                        TextNode* prev = curNode->f;
                        TextNode* nxt = curNode->b;
                        prev->b = nxt;
                        if(nxt != NULL){
                            nxt->f = prev;
                        }
                        curNode = prev;
                    }
                    break;
                }
                default:{
                    TextNode* add = new TextNode;
                    add->word = cmd;
                    if(curNode->b == NULL){
                        curNode->b = add;
                        add->f = curNode;
                    } else{
                        TextNode* nxt = curNode->b;
                        add->b = nxt;
                        nxt->f = add;

                        curNode->b = add;
                        add->f = curNode;
                    }
                    curNode = add;
                }
            }
        }
        curNode = root->b;
        if(curNode == NULL){
            cout << '\n';
        }
        else{
            while(curNode != NULL){
                cout << curNode->word;
                curNode = curNode->b;
            }
            cout << '\n';
        }
    }    
    return 0;
}