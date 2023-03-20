/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int k,n,w,m=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        m=m+(i*k);
        
    }
  
    if(n>=m)
      cout<<0;
    else
      cout<<(m-n);
    return 0;
}
