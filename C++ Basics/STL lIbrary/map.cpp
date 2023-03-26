//Map container
//Unique keys in sorted order
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {  
map<int,int> mp;
mp.insert(pair<int,int>(1,100)); //creates key value pair
mp.insert(pair<int,int>(3,200));
mp.insert(pair<int,int>(2,150));//sorts automatically
//key value 2 sorts to 2ns position
for(auto it:mp) //iterating through map values
{
    cout<<it.first<<" : "<<it.second<<endl;
}
//string, integer pair program in map
map<string,int>odi;
odi.insert(pair<string,int>("Sachin",200));
odi.insert(pair<string,int>("Gill",208));
odi.insert(pair<string,int>("Rohit",264));
for (auto it:odi)
{
    cout<<it.first<<" : "<<it.second<<endl;
}

    return 0;
}

OUTPUT:
1 : 100
2 : 150
3 : 200
Gill : 208
Rohit : 264
Sachin : 200
