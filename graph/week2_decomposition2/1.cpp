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

bool isPrime(long long k){
    if(k<=1){return false;}
    if(k==2){return true;}
    if(k%2==0){return false;}
    long long i = 3;
   while (i*i <= k) {if (k % i == 0) {return false;}i += 2;}
return true;
}

ll binomialCoeff(ll n, ll k){
    ll C[n + 1][k + 1];ll i, j;
    for (i = 0; i <= n; i++){
        for (j = 0; j <= min(i, k); j++)
        {if (j == 0 || j == i) C[i][j] = 1;
            else C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]);}}
    return C[n][k];
 }

ll gcd(ll a, ll b){if (b == 0)
        return a;return gcd(b, a % b);}

ll srihrg(ll n,ll k,ll m){
    ll ans;
    ans=1;
    fori(k){
        ans=(ans*n)%m;
    }
    return ans;
}
ll kk=1;
bool gg=false;
void dfsi(vector<bool> &vis, vector<ll> adj1[], ll test, ll start, vector<ll> &pre, vector<ll> &pos){
    vis[start]=true;
    pre[start]=kk;kk++;
    for(ll i: adj1[start]){
        if(test==i){
            gg=true;
        }
        if(!vis[i]){
            vis[i]=true;
            dfsi(vis,adj1,test,i,pre,pos);
        }
    }
    pos[start]=kk;kk++;
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
    
    vector<ll> pre(n,0),pos(n,0);
    fori(m){
        ll a,b;
        cin>>a>>b;
        a--;b--;
        adj[a].push_back(b);
    }
    fori(n){
        vector<bool> vis(n,false);
        dfsi(vis, adj, i, i, pre, pos);
    }
    
    cout<<((gg==true)?1:0);
    
    
//code ends
    return 0;
}
