#include <bits/stdc++.h>
using namespace std;

void explainMultiset(){

    //same as sets
    // but stores duplicate elements also

    multiset<int>ms;

    ms.insert(1);  // {1}
    ms.insert(1);  // {1,1}
    ms.insert(1);  // {1,1,1}

    ms.erase(1);   // all 1 erased

    int ct = ms.count(1);

    // only a single 1 erased
    ms.erase(ms.find(1));

   // ms.erase(ms.find(1),ms.find(1) + 2);

   //  rest all functions same as set
   
}