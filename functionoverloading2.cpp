#include<iostream>
using namespace std;
int min(int a, int b)
{
    return (a < b) ? a : b;
}
double min (double a,double b)
{
    return ( a < b ) ? a : b ;
}
  char min (char a,char b)
{
    return ( a < b ) ? a : b ; 
}
int main () {
    cout << "minimum of 10 and 20 :" <<  min ( 10 , 20)  << endl;
    cout << "minimum of 5.5 and 3.3 :" <<  min ( 5.5 , 3.3)  << endl;
    cout << "minimum of 'x' and 'a' :" <<  min ( 'x' , 'a' )  << endl;
    return 0;
}