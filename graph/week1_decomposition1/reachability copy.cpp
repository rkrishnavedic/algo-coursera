#include <bits/stdc++.h>
//#include "Header.h"

#define pi 3.14159265358979323846264

#define ll long long
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)

#define sp(n) setprecision(n)
#define d7 1000000007
#define mkp make_pair
#define mkt make_tuple

using namespace std;

void dfsi(vector<bool> &vis, vector<ll> adj1[], ll n, ll start){
    vis[start]=true;
    for(ll i: adj1[start]){
        if(!vis[i]){
            vis[i]=true;
            dfsi(vis,adj1,n,i);
        }
    }
}


int main(int argc, const char * argv[]) {
 //cout<<"Om\n";
 //Praise to Lord
 //make cin/cout faster
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
// input/output via files
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// code now
    
     ll n,m;
       cin>>n>>m;
       vector<ll> adj[n];
       vector<bool> vis(n,false);
       fori(m){
           ll a,b;
           cin>>a>>b;
           a--;b--;
           adj[a].push_back(b);
           adj[b].push_back(a);
       }
       ll t=0;
       fori(n){
           if(vis[i]==false){
               dfsi(vis, adj, n, i);t++;
           }
       }
       cout<<t;
    
//code ends
    return 0;
}
