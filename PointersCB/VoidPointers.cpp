#include<iostream>
using namespace std;
//creating a void pointer 
void print(void* ptr, char type)
{
    switch(type)
    {
        case 'i': cout<<*((int*)ptr)<<" ";//dereferencing and typecasting the data type
        break;
        case 'l': cout<<*((char*)ptr)<<" "; //typecasting to char & dereferencing
        break;
        case 'f': cout<<*((float*)ptr);
        break;
    }
}
int main()
{
    int number = 7;
    char letter = 'J';
    float num = 7.0;
    print(&number,'i'); // sending address of variable and type to be chosen by switch statement in the method above
    print(&letter,'l');
    print(&num,'f');
    return 0;
}

OUTPUT:
7 J 7
