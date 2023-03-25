//Set - Sorted and Unique
//insert functionality of vector used
//size,swap,rend,rbegin,empty
//other functionalities available
//sets log n
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    set<int> st;
    st.insert(11); // {11}
    st.emplace(22); //{11,22}
    st.insert(11); //wont take 11 as 11 is already there
    st.insert(16);//{11,16,22}
    st.insert(18);//{11,16,18,22}
    auto it=st.find(16); //if element not present returns st.end
    cout<<*it<<endl;
    int count = st.count(18);//returns 0 if not present 1 if present
    cout<<count<<endl;
    for(auto it=st.begin();it!=st.end();it++) //use auto , begin, end 
    {
        cout<<*it<<" ";
    }
    auto it1=st.find(11); //finds 11 and  stores in it1
    st.erase(it1); //erases 11
    cout<<endl;
       for(auto it=st.begin();it!=st.end();it++) //use auto , begin, end 
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //to erase between certain numbers [ )

    set <int> st1;
    st1.insert(1);
    st1.insert(2);
    st1.insert(12);
    st1.insert(24);
    st1.insert(36);
    st1.insert(48);
    st1.insert(60); //{ 1,2,12,24,36,48,60}
    auto it2=st1.find(12);
    auto it3=st1.find(48); 
    //from 12 to element before 48
    st1.erase(it2,it3);//{12,24,36} deleted
    for(auto it=st1.begin();it!=st1.end();it++)
    {
        cout<<*it<<" ";
    }
//sorted and unique
    return 0;
}

OUTPUT
16
1
11 16 18 22 
16 18 22 
1 2 48 60 
