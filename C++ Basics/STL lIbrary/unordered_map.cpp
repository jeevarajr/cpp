//Unordered Map container
//unique keys -- not sorted
//unordered_map unique keys ,not sorted
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {  
unordered_map<int,int> mp;
mp.insert(pair<int,int>(1,100)); //creates key value pair
mp.insert(pair<int,int>(3,200));
mp.insert(pair<int,int>(2,150));//sorts automatically
mp.insert(pair<int,int>(1,98)); //can add duplicate
//all keys will be sorted
for(auto it:mp) //iterating through map values
{
    cout<<it.first<<" : "<<it.second<<endl;
}
//string, integer pair program in map
unordered_map<string,int>odi;
odi.insert(pair<string,int>("Sachin",200));
odi.insert(pair<string,int>("Gill",208));
odi.insert(pair<string,int>("Rohit",264));
odi.insert(pair<string,int>("Rohit",219));//only first value is taken - ignore duplicates
odi.insert(pair<string,int>("Sachin",186)); // all unsorted
for (auto it:odi)
{
    cout<<it.first<<" : "<<it.second<<endl;
}

    return 0;
}

OUTPUT:
2 : 150
1 : 100
3 : 200
Rohit : 264
Sachin : 200
Gill : 208
