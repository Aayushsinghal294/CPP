#include <bits/stdc++.h>
using namespace std;



int main(){



// lambda function

cout<<[](int x){return x+2;}(2)<<endl; // lambda func syntax

auto sum = [](int x,int y){return x+y;};
cout<<sum(2,3);                              // calling a lambda func

// all of algorithm

vector<int>v= {2,3,5};
cout<<all_of(v.begin(),v.end(),[](int x){return x>0 ;}); // all_of function checks all elements

// any of algorithm
// checks condition if any one element satisfies or not


// none of algorithm
// checks condition if none of the element satisfies or not

}