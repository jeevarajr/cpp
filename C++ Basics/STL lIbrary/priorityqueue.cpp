//Priority Queue Container concepts 
//largest value will stay at top
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

    cout<<endl;
    //to store minimum element in the top, min heap used
    priority_queue<int,vector<int>,greater<int>>pqh; //pq heap 
    //default format for storing minimum element at top
    pqh.push(3); //{3}
    pqh.emplace(6); //{3,6}
    pqh.push(2);//{2,3,6} //stores minimum element 2 at top
    pqh.emplace(4); //{2,3,4,6}
    while(!pqh.empty())
    {
        cout<<pqh.top()<<" ";
        pqh.pop();
    }
    return 0;
}

OUTPUT:
18 9 7 
2 3 4 6 
