//printing soemthing like  Jeeva n times
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n) //function for recursion
{
    if(i>n)  // base condition for recursion 
    {
        return; //will  return back to the previous call
    }
    
     cout<<"Jeeva";
     cout<<" "; // spacing for each name  // lastly one space will be there. //think before sleep.
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
Jeeva Jeeva Jeeva Jeeva Jeeva 
