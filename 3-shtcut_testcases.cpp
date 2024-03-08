#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){  // it is preferred to use while instead of for to save the variable for giving test cases...
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

}
