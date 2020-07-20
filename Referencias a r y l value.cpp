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

    string   s1     = "Hello ";
    string   s2     = "world";
    //const string &s_rref = s1 +s2(1);
    //string& s_rref = s1 + s2(2);
    string&& s_rref = s1 + s2;
    s_rref += ", my friend";
    cout << s_rref << '\n';  
    return 0;
}