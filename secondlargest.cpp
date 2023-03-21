#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size"<<" ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element 1 by 1  ";
        cin>>arr[i];
    }
    int largest=arr[0];
    int secondlargest=0;
    for(int i=1;i<n;i++)
    {
        if (largest<arr[i]) 
        {
            secondlargest=largest;
            largest=arr[i];
            
        }
    cout<<arr[i]<<" ";
    }
    cout<<"Second Largest "<<secondlargest;
    
    return 0;
}