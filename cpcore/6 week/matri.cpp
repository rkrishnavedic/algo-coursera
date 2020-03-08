
#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

ll Mux(ll i,ll j,ll m[],ll n){
    ll M[n+1][n+1];
    fori(n){
        M[i][i+1]=0;
    }
    for(ll s=2;s<=n;s++){
        fori(n-s+1){
            ll j=i+s;
            M[i][j]=(M[i][i+1]+M[i+1][j]+m[i]*m[i+1]*m[j]);
            for(ll k=i+1;k<j;k++){
                M[i][j]=min((M[i][k]+M[k][j]+m[i]*m[k]*m[j]),M[i][j]);
            }
        }
    }
    
    return M[0][n];
}

int main(){
    //cout<<"Om\n";
    //praise to lord
    //make cin/cout faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code now
    ll n;
    cin>>n;
    ll m[n+1];
    fori(n+1){
        cin>>m[i];
    }
    cout<<Mux(0,n-1,m,n);
    
    return 0;
}

