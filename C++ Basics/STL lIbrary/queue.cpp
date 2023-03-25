//Queue Container concepts 
// FIFO
//push,pop,front,back,emplace 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    queue <int> q;
    q.push(4); //{4}
    q.emplace(8); //{4,8}
    q.push(12); //{4,8,12}
    q.emplace(16); //{4,8,12,16}
    //q.back last element 16
    //q.front first element 4
    cout<<q.back()<<" "; //display 16
    cout<<q.front()<<endl; //displays 4
    //can perform operation  on front  and back
    q.front()+=13; //adds 13 to the last element 13 + 4 =17
    q.back()+=1; //adds 1 to 1st element 16+1 =17
    cout<<q.front()<<" "<<q.back()<<endl;
    //size of queue is 4 before popping
    cout<<endl<<"Queue Size is "<<q.size()<<endl;

    while(!q.empty()) //as long as the queue is not empty
    {
        cout<<q.front()<<" "; //displays top element { prints queue value one by one}
        q.pop();//pops the first element 
    }

//finding size of queue
cout<<endl<<"Queue Size is "<<q.size(); // coz we popped all elements
    //pop -- pops first element
    //q.pop(); //{8,12,17}
    //cant do for loop auto in queue .begin() not definedfor(auto it:q)
   // {
    //    cout<< it <<" ";
   // }
    return 0;
}


OUTPUT:
16 4
17 17

Queue Size is 4
17 8 12 17 
Queue Size is 0
