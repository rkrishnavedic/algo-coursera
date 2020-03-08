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
    ll arr[n],ln[n];
    fori(n){
        cin>>arr[i];
    }
    
    fori(n){
        ln[i]=1;
        forj(i){
            if(arr[j]<arr[i]){
                ln[i]=max(ln[j]+1,ln[i]);
            }
        }
    }
    auto it=max_element(ln, ln+n);
    cout<<*it;
    
    return 0;
}

