#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    // p=make_pair(2,"abc");
    p = {2, "abcd"};
    // pair<int,string>p1=p;
    pair<int, string> &p1 = p;
    p1.first = 3;
    // if we print this value will not change to 3,but if use "&" then change value to 3.
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    // used in array to perform same function to more then one index
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
return 0;
}

// by striver


//pairs

void explainPair(){

pair<int,int>p={1,3};

cout<<p.first<<" "<<p.second;

pair<int,pair<int,int>>q={1,{3,4}};

cout<<q.first<<" "<<  q.second.second<<" "<<q.second.first;

//pair is used as datatype...for storing pairs in array..

pair<int,int>arr[]={{1,2},{2,5},{5,1}};

cout<< arr[1].second;
    
}