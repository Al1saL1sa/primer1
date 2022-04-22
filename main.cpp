#include <iostream>
#include <cmath>
using namespace std;
 
double la(int a,int b,int c)
{
       return (sqrt(b*c*(a+b+c)*(b+c-a))/(b+c));
}
 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    cout  << "\n" << la(a,b,c);
    
    cin.get();
    cin.get();
}