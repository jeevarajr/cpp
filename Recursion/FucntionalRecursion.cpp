//functional recursion
#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n==0)  //since f(0)=0 
    {
        return 0;
    }
    return n+f(n-1); //  returns sum of 1+2+3 by addingvalues in backtracking
    
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n); //tested for condition 3
    return 0;
}
OUTPUT:
6
