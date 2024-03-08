#include <bits/stdc++.h>
using namespace std;

void explainExtra(){

    sort(a,a+n);                            // direct function for sorting in ascending order
    sort(v.begin(),v.end());

    sort(a+2,a+4);
    sort(a,a+n,greater<int>);             // for descending order

    pair<int,int>a[]={{1,2},{2,1},{4,1}};    

    // sort acc. to second element
    // if equal descending of first element

    sort(a,a+n,comp);
    //we can write our own comp function acc. to problem

    //-------------------------------------------------------------------------------//

    int num = 7;                            // binary of 7 is 111 
    int ct = __builtin_popcount();          // it returns number of 1 in binary ... 

    long long num = 8765434567890987;                            // binary of 7 is 111 
    int ct = __builtin_popcountll();


    //------------------------------------------------------------------------------//

    string s;
    s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end())); // returns al permutations of the string

    int maxi = *max_element(a,a+n);

}