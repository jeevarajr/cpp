//Abstraction
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//this is going to serve aas contract to other class. 
//only one rule - whiever class signs contract has to give implementation logic for method defined inside it (AbstractCricket)
class AbstractCricket
{
    virtual void AskForTestMatch()=0;  //to make this obligatory , virtual is used
};

class Cricket:AbstractCricket {
    public:
    string name;
    int match;
    Cricket(string n,int m)
    {
        name=n;
        match=m;
    }

    void AskForTestMatch() //method for which need to provide implementation logic 
   {
       if(match>100)
       {
           cout<<"Come on champ, list is meaningless without you"<<endl;
       }
       else
       {
           cout<<"Work on getting to play on International matches. Better luck soon"<<endl;
       }
   }
    
};
int main()
{
    Cricket Player1 = Cricket("Kohli",200);
    Cricket Player2 = Cricket("Sarfaraz",10);

    Player1.AskForTestMatch(); // calling the method for which this class has signed contract to provide implementation logic
    Player2.AskForTestMatch(); //called using object name and that method name
    return 0;
}

OUTPUT:
Come on champ, list is meaningless without you
Work on getting to play on International matches. Better luck soon
