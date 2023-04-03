//print from N to 1
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) //function for recursion
{
    if(i<=0)  // base condition for recursion 
             //to  print N to 0 use i<0
    {
        return; //will  return back to the previous call
    }
    
     cout<<i;
     cout<<" ";
     f(i-1,n);
}

int main()
{
    int n;
    cin>>n;
    f(n,n);
    return 0;
    
}

OUTPUT: 
5 4 3 2 1 
