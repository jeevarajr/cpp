//List Container concepts
//all operations same as vector
// begin, end, rbegin, rend, clear, insert,size, swap--- same as vectors
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(10); //adds element
    ls.emplace_back(20); // push and emplace , anything can be used
    //emplace is little faster
    // {10.20}
    ls.push_front(77); //pushes element to the first position{77,10,20}
    ls.emplace_front(90); 

    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    
    return 0;
}

OUTPUT:
90 77 10 20 
