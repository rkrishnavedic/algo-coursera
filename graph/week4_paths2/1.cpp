#include <bits/stdc++.h>

#define ll long long
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)

#define d7 1000000007
#define mkp make_pair

using namespace std;

//took help from cp-algorithms.com because I have not used proirityQueue before
void dijkstra(ll s, vector<ll> &dist, vector<ll> &parent, ll n, vector<pair<ll,ll>> adj[]){
    dist[s]=0;
    vector<bool> u(n,false);
    fori(n){
        ll v=-1;
        forj(n){
            if(!u[j] &&(v==-1||(dist[j]<dist[v]))) v=j;
        }
        if(dist[v]==d7) break;
        u[v]=true;
        for(auto j:adj[v]){
            ll a,b;
            a=j.first;
            b=j.second;
            if(dist[v]+b<dist[a]){
                dist[a]=dist[v]+b;
                parent[a]=v;
            }
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
    
    ll n,m,u,v;cin>>n>>m;
    vector<pair<ll, ll>> adj[n];
    ll x,y,w;
    fori(m){
        cin>>x>>y>>w;x--;y--;
        adj[x].push_back(mkp(y,w));
    }
    cin>>u>>v;u--;v--;
    vector<ll> dist(n,d7);
    vector<ll> pr(n,-1);
    dijkstra(u,dist,pr,n, adj);
    cout<<((dist[v]==d7)? -1:dist[v]);
    
//code ends
    return 0;
}
