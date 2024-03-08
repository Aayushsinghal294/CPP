# include <bits/stdc++.h>
using namespace std;

int main(){

    int a=1;
    int b=2;
    string str = "abc";
    string str_rev;


    setprecision(0);                // setting precision to 0 removes decimal
    cout<< fixed;                   // using fixed removes scientific notation.
    str.size();                     // we can use string.size() function for printing whole set of array
    cin.ignore();                   // we use it bcoz to make curso ignore \n after entering the testcases no.
    getline(cin,str);               // This helps to read whole line with spaces too and not ignore the spaces between strings
    str_rev.push_back(str[2]);      // this function basically adds a new character at the end of the string...
    swap(a,b);                      
    max(a,b);                       // Inbuilt Functions in C++
    min(a,b);
}