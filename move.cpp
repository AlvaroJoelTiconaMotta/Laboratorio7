#include<iostream>
using namespace std;
int x;
int getInt ()
{
    return x;
}
int && getRvalueInt ()
{
    // notice that it's fine to move a primitive type--remember, std::move is just a cast
    return std::move( x );
}
void printAddress (const int& v) // const ref to allow binding to rvalues
{
    cout << reinterpret_cast<const void*>( & v ) << endl;
}

int main(){
    printAddress( getInt() ); 
    printAddress( x );
    printAddress( getRvalueInt() ); 
    printAddress( x );   
}