/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        c+=1;
    }
    cout<<c;
    return 0;
}
