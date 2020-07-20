#include <iostream>
using namespace std;

int x;

int& getRef (){
    return x;
}

int getVal(){
    return x;
}

int main(){
    int a;
    a = 1;
    getRef()=4;
    a=getVal();
    return 0;
}