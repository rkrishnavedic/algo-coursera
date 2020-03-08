#include <bits/stdc++.h>
#define ll long long
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)

#define d7 1000000007
#define mkt make_tuple

using namespace std;


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
    
    ll n,m;cin>>n>>m;
    vector<tuple<ll, ll, ll>> edj;
    ll x,y,w;
    fori(m){
        cin>>x>>y>>w;x--;y--;
        edj.push_back(mkt(x,y,w));
    }
    
    vector<ll> dist(n,d7);
    vector<ll> pr(n,-1);
    x=-1;
    fori(n){
        x=-1;
        //again I took help from cp-algoritms to bellman-ford implementation
        for(auto e:edj){
            ll a,b,ww;
            a=get<0>(e);
            b=get<1>(e);
            ww=get<2>(e);
            if(dist[a]+ww<dist[b]){
                dist[b]=dist[a]+ww;
                pr[b]=a;
                x=b;
            }
        }
        //if(x==-1){break;}
    }
    if(x==-1){
        cout<<0;
    }else{
        cout<<1;
    }
    
//code ends
    return 0;
}
