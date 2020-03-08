#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

ll senate(ll i, ll arr[], ll n){
    ll sum1=0,sum2=0,dummy=0;
    forj(i){
        dummy+=arr[i-j-1];
        sum1=max(dummy, sum1);
    }
    dummy=0;
    forj(n-1-i){
        dummy+=arr[i+j+1];
        sum2=max(dummy, sum2);
    }
    return sum1+sum2+arr[i];
}

int main(){
    //cout<<"Om\n";
    ll n;
    cin>>n;
    ll arr[n];
    fori(n){
        cin>>arr[i];
    }
    fori(n){
        cout<<senate(i,arr,n)<<" ";
    }
    
    
    return 0;
}
