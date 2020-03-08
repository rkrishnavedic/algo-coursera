#include <bits/stdc++.h>
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

int main(){
    //cout<<"Om\n";
    //praise to lord
    //make cin/cout faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code now
    ll n;
    cin>>n;
    ll arr[n],sum[n],maxsum[n];
    fori(n){
        cin>>arr[i];
    }
    sum[0]=arr[0];
    fori(n-1){
        sum[i+1]=sum[i]+arr[i+1];
    }
    ll m[n],g[n];
    ll m1=0;
    fori(n){
        m1=min(sum[i],m1);
        m[i]=m1;
    }
    m1=sum[n-1];
    for(ll t=n-1;t>=0;t--){
        m1=max(m1, sum[t]);
        g[t]=m1;
    }
    forj(n){
        if(j!=0){
            maxsum[j]=g[j]-m[j-1];}
        else{
            maxsum[j]=g[j];
        }
    }
    forj(n){
        cout<<maxsum[j]<<" ";
    }
    
    return 0;
}
