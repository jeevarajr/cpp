//Queue Container concepts 
// FIFO
//push,pop,front,back,emplace 
//push,pop log n
//top O(1)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue <int> pq;
    //largest will stay at top
    pq.push(9); //{9}
    pq.emplace(18); //{18,9}
    pq.push(7); //{18,9,7}

    while(!pq.empty()) //as long as pq is not empty
    {
    cout<<pq.top()<<" "; // prints top most {18} then 9 then 7
    pq.pop();
    }
    //not available for priority queue as well
   // for(auto it:pq)
   // {
    //    cout<<it<<" ";
   // }


    //to store minimum element in the top, min heap used
    return 0;
}
OUTPUT:
18 9 7 
