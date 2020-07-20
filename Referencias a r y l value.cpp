#include<iostream>
using namespace std;
string getName ()
{
    return "Alex";
}
void  printReference(const string& str)
{
    cout << str;
}
 
void printReference (string&& str)
{
    cout << str;
}
int main(){
    string me( "alex" );
    printReference(  me ); // calls the first printReference function, taking an lvalue reference
    printReference( getName() ); // calls the 
    return 0;
}