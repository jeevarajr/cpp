//printing soemthing like  Jeeva n times
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) //function for recursion
{
    if(i>n)  // base condition for recursion 
    {
        return; //will  return back to the previous call
    }
    
     cout<<i;
     cout<<" ";
     f(i+1,n);
}

int main()
{
    int n;
    cin>>n;
    f(1,n);
    return 0;
    
}

OUTPUT:
1 2 3 4 5 
