#include <bits/stdc++.h>
using namespace std;


// striver 

void explainMaps(){
    

    // map consist of key and value 
    // roll no. is the key and names are the values
    //{key,value} // key is always unique
    // map stores unique keys in sorted order

    map<int,int>mpp;
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;

  //  mpp[1]=2;                 //{1,2}
  //  mpp.emplace({3,1});       //{3,1}
  //  mpp.insert({2,4});        //{2,4}
  //  mpp[{2,3}] = 10;

for(auto it: mpp){
    cout<<it.first << " "<<it.second <<endl;   // stores in the order of sorted KEY
}

cout<<mpp[1];
cout<<mpp[5];

// auto it = mpp.find(3);
// cout<<*(it).second;

auto it = mpp.find(5);

//SYNTAX
auto it = mpp.lower_bound(2);
auto it = mpp.upper_bound(3);

}

//----------------------------------------------------------------------------------------------------//

void explainMultimap(){
    //same as map but can store multiple keys
    //only mpp[key] cannot be used here
}

// in unordered map everything but not sorted

//--------------------------------------------------------------------------------------------------------//

// luv 

int main(){
    map<int,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";

    m.insert({4,"afg"});

  //  map<int,string> :: iterator it;
  //  for(it = m.begin(); it != m.end(); ++it){
  //      cout<<(*it).first<<" "<<(*it).second;
  //  }

  for(auto &pr : m){
    cout<<pr.first<<endl<<pr.second;    // short cut for above code
  }

}