//Stack Container concepts 
// LIFO 
//push,pop,top - O(1) 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    stack <int> st;
    st.push(6);//adds element to stack
    st.emplace(12);//emplace ~ push
    st.push(18);
    st.emplace(24);
    cout<<st.top()<<endl; // displays last added element ~ top of stack 24
    //st[1] wrong - cant perform index operations on stack
    //size of stack
    cout<<st.size()<<endl; //display 4 stack size
    //check if stack is empty
    cout<<st.empty(); //returns false if stack has atleast item  prints 0
                //returns true if stack has no item prints 1
    return 0;
}


OUTPUT:
24
4
0
