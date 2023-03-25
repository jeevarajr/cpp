#include<iostream>
using namespace std;
int main()
{
int *p; // creating a pointer to allocate memory dynamically
p = new int[5]; //dynamic array creation
p[0]=10;
p[1]=20;
p[2]=30;
cout<<p[1]<<endl;
delete [] p; //deleting dynamic memory
cout<<p[1]; //wil print some garbage value 
return 0;
}

Output:
20
32717
