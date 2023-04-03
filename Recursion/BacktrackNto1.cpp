//print from N to 1 using backtracking
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) //function for recursion
{
    if(i>n)  // base condition for recursion  // backtrack base condition
            
    {
        return; //will  return back to the previous call
    }
         
     f(i+1,n);
     cout<<i<<" "; // backtracking 
}

int main()
{
    int n;
    cin>>n;
    f(1,n);
    return 0;
    
}

OUTPUT:
5 4 3 2 1 
