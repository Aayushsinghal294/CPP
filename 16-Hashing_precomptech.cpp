#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];
int main()
{

    /*
         int n;
         cin >> n;
         int a[n];
         for ( int i=0 ; i<n ; i++){
             cin >> a[i];
         }
         int q;
         cin>> q;
         while(q--){
            int x;                             // constraints
            cin >> x;                          // N <= 10^5
            int ct = 0;                        // a[i] <= 10^7
            for(int i=0;i<n;++i){              // Q <= 10^5
                if(a[i] == x){
                    ct++;
                }
            }
            cout << ct << endl;      // Time complexity of this is around
      }                              // 0(N) + 0(Q*N) = 0(N^2) = 10^10
    */

    // we will make a hash array --> counter for each value will be precomputed

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << hsh[x] << endl; // By using hash array time complexity is reduced
                                // 0(N) + 0(Q) = 0(N) = 2*10^5
    }
}
