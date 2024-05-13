#include <stdio.h>

enum State {working = 0, failed, freezed};
enum State currState = 2;

enum State findState(){
    return currState;
}
int main(){
    (findState() == working)? printf("Working. . ."): printf("Not working!");
    return 0;
}
