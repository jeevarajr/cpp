#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//learning encapsulation
class Cricket
{
   private: //making it provate explicitly, eventhough same otherwise
   string Name; //all these properties are encapsulated 
   string Bat;
   int Age;
   
   public:  //creating getters and setters in public
   
   //encapsulated properties are accessed using getters and setters methods
   
   void setName(string name) //getting the string  and assigning to Name
   {
       Name= name;
   }
   string getName()
   {
       return Name;
   }
   
   void setBat(string bat) //getting the string  and assigning to Bat
   {
       Bat= bat;
   }
   string getBat()
   {
       return Bat;
   }
   
   void setAge(int age) //getting the string  and assigning to Name
   {
       Age= age;
   }
   int getAge()
   {
       return Age;
   }
};
int main()
{
    Cricket Player1;
    Player1.setName("Kohli");
    Player1.setBat("Right");
    Player1.setAge(31);
    cout<<Player1.getName()<<" "<<Player1.getBat()<<" "<<Player1.getAge()<<endl;
    Cricket Player2;
    Player2.setName("Shubman Gill");
    cout<<Player2.getName();
    return 0;
}

OUTPUT:
Kohli Right 31
Shubman Gill
