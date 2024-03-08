#include <bits/stdc++.h>
using namespace std;

// to find a given no. in an array

int main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int to_find;
cin>>to_find;
int low=0,high=n-1,mid;
while(high-low>1){
    int mid = (high +low)/2;
    if(v[mid]<to_find){
        low = mid +1;
    }else{
        high = mid;
    }
}

// time complexity of binary search is log 2 (N)

if(v[low]==to_find){
  cout<<low<<endl;
}else if(v[high] == to_find){
    cout<<high<<endl;
}else{
    cout<<"NOT FOUND";
}
return 0;
}