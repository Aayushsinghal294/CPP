#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    vector <int> v;    // creates an empty vector
    v.push_back(1);    // pushes the value 1 in the vector
    v.emplace_back(2);   // emplace is very similar to pushback but it is a bit faster...

vector<pair<int,int>>vec;

vec.push_back({1,2});
vec.emplace_back(1,2);    //puchback needs {} but no {} in emplace...

vector<int> v(5);        //  {0,0,0,0,0}

vector<int>v1(5,20);     //  {20,20,20,20,20}
vector<int>v2(v1);       // same but a COPY of v1...

vector<int> v(5,100);    //  {100,100,100,100,100}

//----------------------------------------------------------------------------------------//

 // vector<int,int>::iterator it = v.begin();        // point at first position of the vector
 // it++;
 // cout<<*(it)<<" ";

 // it = it + 2;
 // cout<<*(it)<<" ";

 // for(int value : v){
 // cout<<value<<" ";
 // }
 // cout<<endl;


 
 // vector<int,int>::iterator it = v.end();         //  does not point at last point but 1 position after that
 // vector<int,int>::iterator it = v.rend();         // same but after reversing it sees the position
 // vector<int,int>::iterator it = v.rbegin();

 // cout<<v[0]<<" "<<v.at[0];
 // cout<<v.back()<<" ";                         // v.back() is the last element



//--------------------------------------------------------------------------------------------//


for(vector<int>::iterator it = v.begin(); it!= v.end(); it++){
    cout<<*(it)<<" ";                       // by this we print entire vector
}

for(auto it = v.begin(); it != v.end(); it++){
     cout<<*(it)<<" ";                     // auto is short cut for above syntax
}

for(auto it : v){                          // auto is short cut for above syntax
    cout<<it<<" ";
}

// {10,12,3,45}

v.erase(v.begin()+1);  // ans --> {10,3,45}

// {10,12,3,45,54,3}

v.erase(v.begin()+1,v.begin()+5); // ans --> {10,3}


//------------------------------------------------------------------------------------------//

//Inset Function

vector<int>v{2,100}; //{100,100}
v.insert(v.begin(),300); //{300,100,100}
v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

vector<int>copy(2,50); //{50,50}
v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

//{10,20}
v.size(); // gives size 2

//{10,20}
// v.pop_back(); // {10}     // removes last element of the array

// v1 --> {10,20}
// V2 --> {30,40}

// v1.swap(v2);  // V1 --> {30,40} , V2 --> {10,20}
// v.clear();    // erases the entire vector

// cout<<v.empty();

}
