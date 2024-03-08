#include<bits/stdc++.h>
using namespace std;

int main(){

double a = 100000;
double b = 100000;

double c = a*b;

// cout << c;  // output = 1e+010

// cout << fixed << c; // using fixed removes scientific notation.

cout << fixed << setprecision(0) << c; // setting precision to 0 removes decimal

}
