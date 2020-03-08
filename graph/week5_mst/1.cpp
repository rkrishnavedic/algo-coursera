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

void make_set(ll v, vector<ll> &parent, vector<ll> &krank) {
    parent[v] = v;
    krank[v] = 0;
}

ll find_set(ll v,vector<ll> &parent, vector<ll> &krank) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v], parent, krank);
}

void union_sets(ll a, ll b,vector<ll> &parent, vector<ll> &krank) {
    a = find_set(a,parent,krank);
    b = find_set(b,parent,krank);
    if (a != b) {
        if (krank[a] < krank[b])
            swap(a, b);
        parent[b] = a;
        if (krank[a] == krank[b])
            krank[a]++;
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
    
    ll n;cin>>n;
    ll x[n],y[n];
    vector<ll> pr(n,0), kr(n,0);
    fori(n){
        cin>>x[i]>>y[i];
    }
    vector<tuple<ll,ll,ll>> v;
    fori(n-1){
        for(ll j=i+1;j<n;j++){
            v.push_back(mkt(i,j,((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))));
        }
    }
    sort(v.begin(), v.end(), [](tuple<ll,ll,ll> a, tuple<ll,ll,ll> b){
        return get<2>(a) < get<2>(b);
    });
    //ll c=0;
    fori(n){
        make_set(i,pr,kr);
    }
    vector<ll> ans;
    ll ref=v.size();
    fori(ref){
        ll z1,z2,z3;
        z1=get<0>(v[i]);z2=get<1>(v[i]);z3=get<2>(v[i]);
        if(find_set(z1,pr,kr)!=find_set(z2,pr,kr)){
            ans.push_back(z3);
            union_sets(z1, z2,pr,kr);
        }
    }
    double tu=0;
    fori(ans.size()){
        tu+=sqrt((double)ans[i]);
    }
    cout<<sp(15)<<tu;
    
//code ends
    return 0;
}
