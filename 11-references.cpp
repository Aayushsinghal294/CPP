#include<bits/stdc++.h>
using namespace std;

void increment(int a , int &b){           // we passed by reference in b by using & so that it changed the original value 
    a++;                                  // a didn't change bcoz we passed by value
    b++;
}

int main(){

    int x=3;
    int y= 3;

    cout << x << " " << y << endl;
    increment(x,y);
    cout << x << " " << y << endl;

   //          output:      3 3
   //                       3 4


   
    // Arrays are always passed by reference
}