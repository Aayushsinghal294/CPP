#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;

    string str_rev;

    /* for ( int i = str.size()-1;i>=0;i--){

      str_rev.push_back(str[i]); 
      
    }
    
   if(str == str_rev){
    cout << "palindrome"; 
   }else{
    cout << "not a palindrome"; */

    // we have another option for palindrome

     for ( int i = (str.size()-1)/2;i>=0;i--){

    
   if(str[i] == str[str.size()-i-1])
    cout << "palindrome"; 
   else
    cout << "not a palindrome";
    break;
   }
}
