//For accessing anything from heap, pointer is required

//void main()
//{
    // --> int A[5];
   //  --> int* p; // goes inside stack only
    // --> p=new int[5]; //memory for 5 integers will be created inside heap 
    //pointer p will point to that address
    //use the keyword NEW to get memory from heap
   // --> cout<<*p;    //if unused memory not deleted, creates memory leak problem
   // -->  delete[]p; //using [] because p is used for an array
    
    //pointer acts a name of array
    // --> array can be resized only in heap. 
    // --> that too same array cant be resized  
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5] ={2,4,6,8,10};
    int i;
    int* p;
    p= new int[5];
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;
    for(i=0;i<5;i++)
    {
        cout<<A[i]<<" "; //priting static array
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        cout<<p[i]<<" "; //printing dynamic array
    }
    return 0;
}

OUTPUT:
2 4 6 8 10 
3 5 7 9 11 
