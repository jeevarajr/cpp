// In c++ by default , class is private
//whenever an object is created for class, constructor is invoked
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Cricket
{
    public: //access specifier
    string Name;
    string Batting;
    int age;
    
    void Display()
    {
        cout<<Name<<" "<<Batting<<" "<<age<<endl;
    }
    
    Cricket()  //Constructor Creation without parameters // if this constructor class isnt there. has one constructor by default. 
    //so to send values, send from main during object creation. // then receive using constructor with parameter
    {
        cout<<"Superb man, Keep practising"<<endl;
    }
    
    Cricket(string name,string bat,int age)
    {
        Name=name;
        Batting=bat;
        age=age;
        cout<<"Constructor with parameter"<<" "<<Name<<" "<<Batting<<" "<<age<<endl;
    }

    
};
int main()
{
    Cricket Player1; //Player 1 object created for for class Cricket
    Player1.Name="Kohli";
    Player1.Batting="Right";
    Player1.age=31;
    Player1.Display();
    Cricket Player2=Cricket("Sachin","Right",43); //constructor  to send parameters 
}


OUTPUT:
Superb man, Keep practising
Kohli Right 31
Constructor with parameter Sachin Right 43
