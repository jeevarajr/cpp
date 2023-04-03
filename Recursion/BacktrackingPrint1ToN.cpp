//print from 1 to N
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) //function for recursion
{
    if(i<1)  // base condition for recursion  // backtrack base condition
            
    {
        return; //will  return back to the previous call
    }
    
     f(i-1,n);
     cout<<i<<" "; // backtracking 
}

int main()
{
    int n;
    cin>>n;
    f(n,n);
    return 0;
    
}

OUTPUT:
1 2 3 4 5 
