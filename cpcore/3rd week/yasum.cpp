#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)
#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if(a<0){return gcd(-a, b);}
    if(b<0){return gcd(a,-b);}
    
    if(b==0){if(a!=0){return a;}
    else{return 1;}
    }
    if(a>b || a==0){return gcd(b,a);}
    return gcd(b%a,a);
}

double dsum(ll s[],int n){
    double v=0.0;
    
    fori(n){v+=(double)(1.0)/(s[i]);}
    return v;
}
ll llsum(ll s[],int n){
    ll v=0;
    fori(n){v+=s[i];}
    return v;
}


int main(){
    //cout<<"Om\n";
    int n;
    cin>>n;
    ll arr[n];
    fori(n){cin>>arr[i];}
    cout<<setprecision(11)<<llsum(arr, n)+dsum(arr, n);
    
    return 0;
}
