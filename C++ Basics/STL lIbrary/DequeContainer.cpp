//Deque Container concepts
//Most operations same as vector 
// begin, end, rbegin, rend, clear, insert,size, swap--- same as vectors
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    deque <int> dq;
    dq.push_back(5); //{5}
    dq.emplace_back(10); //{5,10}
    dq.push_front(2); //{2,5,10}
    dq.emplace_front(0); //{0,2,5,10}
    for (auto it:dq)
    {
        cout<<it<<" ";
    }
    // pop_back and pop_front are available
    dq.pop_back(); //will remove 10 {0,2,5}
    dq.pop_front(); //will remove 0 {2,5}
    cout<<endl;
    for(auto it:dq)
    {
        cout<<it<<" "; // {2,5}
    }
    cout<<endl;
    deque<int> dq1{10,20,30,40,50}; //{10,20,30,40,50}
    cout<<dq1.back()<<" "; //displays last element 50
    cout<<dq1.front(); //displays first element 10

    return 0;
}

OUTPUT:
0 2 5 10 
2 5 
50 10
