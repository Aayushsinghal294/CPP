#include <bits/stdc++.h>
using namespace std;

void explainSets(){

    //sorted
    //Unique

    set<int>st;
    st.insert(1);  //{1}
    st.emplace(2);  //{1,2}
    st.insert(2);   //{1,2}
    st.insert(4);    //{1,2,4}
    st.insert(3);    //{1,2,3,4}

    //-----------------------------------------------------------//

    // {1,2,3,4,5}
    auto it = st.find(3);  // returns the position of 3

    // {1,2,3,4,5}
    auto it = st.find(6);  // returns the position of st.end()

    //{1,4,5}
    st.erase(5); // erases 5  // takes logarithmic time

//--------------------------------------------//

    int ct = st.count(1);  // either returns 0 or 1 as set has unique elements

  auto it = st.find(3);
  st.erase(it);   // takes constant time

  //{1,2,3,4,5}

  auto it1 = st.find(2);
  auto it2 = st.find(4);

  st.erase(it1,it2);  // after erase {1,4,5} {first,last}

    // lower_bound() and upper_bound() functions works in same way


// syntax

auto it = st .lower_bound(2);
auto it = st .upper_bound(3);


// lower_bound() function

// a[]={1,4,5,6,9,9}        // returns the first occurence of the element

// int ind = lower_bound(a,a+n,4)-a;  // 1
// int ind = lower_bound(a,a+n,7)-a;  // 4
// int ind = lower_bound(a,a+n,10)-a;  // 6


// upper_bound() function

// a[]={1,4,5,6,9,9}        // iterator points to the next element of the asked element

// int ind = upper_bound(a,a+n,4)-a;  // 2
// int ind = upper_bound(a,a+n,7)-a;  // 4
// int ind = upper_bound(a,a+n,10)-a;  // 6

}