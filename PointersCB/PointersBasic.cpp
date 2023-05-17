#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int* ptr = &n; //creating pointer variable and storing address of n
    cout<<n<<endl<<ptr<<endl;
    *ptr = 10; 
    //dereferencing the pointer to change value stored in that address
    //it will change the original value of n itself
    cout<<"Value of ptr: "<<*ptr<<endl<<"Value of n: "<<n<<endl;
    return 0;
}

OUTPUT:
5
0x7ffe76da168c
Value of ptr: 10
Value of n: 10
