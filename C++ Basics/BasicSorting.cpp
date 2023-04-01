#include <iostream>

using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<=n;j++)
        {
            if(arr[j]<arr[min]){
                int temp=arr[j];
                arr[j]=arr[min];
                arr[min]=temp;
            }
        }
    }
}

void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
        }
    }
}
void insertion_sort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
      int j=i;
      while(j>0 and arr[j-1]>arr[j])
      {
          int temp =arr[j-1];
          arr[j-1]=arr[j];
          arr[j]=temp;
          j++;
      }
  }
}
int main() {
    cout<<"Enter size of array";
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter Array element no"<<i<<" ";
        cin>>arr[i];
    }
   
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
