#include <bits/stdc++.h>

#define pi 3.14159265358979323846264

#define ll long long
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)

#define sp(n) setprecision(n)
#define d7 1000000007
#define mkp make_pair
#define mkt make_tuple

using namespace std;

void bfsi(vector<ll> &dis, vector<ll> adj[], ll s){
    dis[s]=0;
    queue<ll> q;
    q.push(s);
    while(!q.empty()){
        ll z=q.front();
        q.pop();
        for(ll v:adj[z]){
            if(dis[v]==-1){
            q.push(v);
            dis[v]=dis[z]+1;}
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
    
    ll n,m,u,v;
    cin>>n>>m>>u>>v;
    vector<ll> dis(n,-1);
    vector<ll> adj[n];
    fori(m){
        ll a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    bfsi(dis, adj, u-1);
    cout<<dis[v-1];
    
//code ends
    return 0;
}
