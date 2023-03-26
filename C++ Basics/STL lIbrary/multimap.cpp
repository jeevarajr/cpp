//Multi Map container
//Can store duplicate keys -- in sorted order
//map[key] cant be used
//unordered_map unique keys ,not sorted
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {  
multimap<int,int> mp;
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
multimap<string,int>odi;
odi.insert(pair<string,int>("Sachin",200));
odi.insert(pair<string,int>("Gill",208));
odi.insert(pair<string,int>("Rohit",264));
odi.insert(pair<string,int>("Rohit",219));
odi.insert(pair<string,int>("Sachin",186)); // all sorted in alphabetical order


for (auto it:odi)
{
    cout<<it.first<<" : "<<it.second<<endl;
}

    return 0;
}


OUTPUT:
1 : 100
1 : 98
2 : 150
3 : 200
Gill : 208
Rohit : 264
Rohit : 219
Sachin : 200
Sachin : 186
