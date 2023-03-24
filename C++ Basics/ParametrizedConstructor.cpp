#include <iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    int age;
    char level;
// parametrizzed constructor
    Hero(int age) //constructor called and executed first -> when object is created
    {
        cout<<"Value stored in this "<<this<<endl;
        this -> age = age;
    }

   int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(char h)
    {
        health=h;
    }
    void setLevel(int l)
    {
        level=l;
    }
};
int main() {
    Hero jeeva(10); //creation of object statically 
    cout<<&jeeva<<endl;
    //sending value to constructor
    //coz constructor gets called
    jeeva.setHealth(100);
    jeeva.level='A';
    //cout<<"Size is "<<sizeof(h1)<<endl;//since integer stored. o/p size of integer
    
    cout<<jeeva.level<<endl;

    cout<<jeeva.getHealth()<<endl;
    //to access private data members, get set are used

    return 0;
}


output:

Value stored in this 0x7ffc756f2e0c
0x7ffc756f2e0c
A
100
