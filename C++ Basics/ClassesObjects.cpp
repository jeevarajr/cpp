//program to understand classess and objects - non parameterized constructors
#include <iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    public:
    int age;
    char level;
// non parametrizzed constructor
    Hero() //constructor called and executed first -> when object is created
    {
        cout<<"Hi buddy, I am the constructor"<<endl;
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
    Hero jeeva; //creation of object statically
    jeeva.setHealth(100);
    jeeva.level='A';
    //cout<<"Size is "<<sizeof(h1)<<endl;//since integer stored. o/p size of integer
    
    cout<<jeeva.level<<endl;

    cout<<jeeva.getHealth()<<endl;
    //to access private data members, get set are used


    //dynamic allocation
    Hero *Dhaaru = new Hero; // creating Dhaaru obj dynamically
    Dhaaru -> setHealth(99);
    Dhaaru -> setLevel('B');

    // using * operator
    cout<<(*Dhaaru).getHealth()<<endl; // two ways

    // using -> operator
    cout<<Dhaaru->getLevel()<<endl;
 


    cout<<"Size of object Jeeva is "<<sizeof(jeeva)<<endl;
    return 0;
}

//size output should be 5, but its 8. why?

//The size of the object jeeva in your output is 8 bytes, which is larger than the expected size of 5 bytes. This is due to the concept of data structure padding and alignment in C++.

//Data structure padding is used to ensure that the data members of a structure or class are properly aligned in memory, which can improve the efficiency of accessing them. In some cases, padding bytes may be added between data members to align them with a specific byte boundary, typically 4 or 8 bytes, depending on the architecture.

//In the case of the Hero class, the health data member is an int which typically requires 4 bytes on a 32-bit system. However, to ensure proper alignment, the compiler may add 3 bytes of padding after health so that the level data member is aligned on a 4-byte boundary. Similarly, the level data member takes up 1 byte, but the compiler may add an additional 3 bytes of padding at the end of the class to ensure that the size of the Hero object is a multiple of 4 bytes.

//Therefore, the size of the Hero object in your case is 4 bytes for health, 1 byte for level, and 3 bytes of padding,


//usi
