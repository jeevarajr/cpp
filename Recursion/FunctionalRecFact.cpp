//Functional Recursion program for factorial
#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*f(n-1); //returning the answer
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}

OUTPUT for input 5
  120
