#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;

    string str_rev;

    for ( int i = str.size()-1;i>=0;i--){

      //  str_rev = str_rev + str[i];    // But this is not a good practice as we are adding character to this string and also due to time complexity

      // The better option is using pushback function 

      str_rev.push_back(str[i]); // this function basically adds a new character at the end of the string...
      
    }
      
    cout<< str_rev;
}