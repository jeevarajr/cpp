#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v; // declare an empty vector of integers
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //two ways of using auto it
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}

Output
10
20
30
10
20
30
