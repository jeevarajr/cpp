#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v{7,14,21,28,35}; 
    v.insert(v.begin(),0); //inserts 0 at beginning
    v.insert(v.begin()+5,42); //inserts at 0+ 5th element =6th element
    v.insert(v.begin()+1,3,100); // 3 times 100 will be printed
    //same like insert, erase can be used to remove the element from vector
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //to find size of vector
    cout<<v.size()<<endl;
   //swapping vectors
   vector<int> v1{8,16};
   vector <int> v2{24,32};
   v1.swap(v2);
   cout<<v1[0]<<" "<<v1[1]<<endl; //result after swap
   cout<<v2[0]<<" "<<v2[1]<<endl; //both are swapped
//pop_back removes the last element
    v1.pop_back(); //32 removed
    for(auto it:v1)
    {
    cout<<it<<endl; //prints only 24 because 32 is popped
    }
    v1.push_back(30);
    v1.push_back(40);
    for(auto it:v1)
    {
        cout<<it<<" "; // 24,30,40 
    }
    //clear the vector
    v1.clear(); //deletes entire vector v1.empyty() also can be used
    for(auto it:v1)
    {
        cout<<it<<endl; //prints nothing
    }
    return 0;
}


OUTPUT:
0 100 100 100 7 14 21 28 42 35 
10
24 32
8 16
24
24 30 40 
