#include <bits/stdc++.h>
using namespace std;

void explainStacks(){    //  LIFO -- last in first out

    stack<int>st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

cout<<st.top(); // prints 5 "** st[2] is invalid **"   // gives 5 but still in the stack

st.pop(); // st looks like {3,3,2,1}      // removes 5

cout<<st.top(); //3
cout<<st.size(); //4
cout<<st.empty();  // false  //O(2)

stack<int>st1,st2;
st1.swap(st2);

}