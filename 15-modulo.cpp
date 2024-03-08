#include<bits/stdc++.h>
using namespace std;

int main(){

    // (a + b) % M = ((a % M) + (b % M)) % M
    // (a * b) % M = ((a % M) * (b % M)) % M
    // (a - b) % M = ((a % M) - (b % M) + M) % M
     // (a / b) % M = ((a % M) * (b^(-1) % M)) % M

     int n;
     cin >> n;
     int M = 47;
     long long fact = 1;
     for ( int i=2 ; i<=n ; i++){
            fact = (fact*i)%M;
     }
     cout << fact;


    // when value is so big that it exceeds the limit so we need to give answer by taking its modulo
}