
#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

void Mux(ll W,ll w[],ll v[],ll n){
    ll T[W+1][n+1];
    fori(W+1){T[i][0]=0;}
    for(ll i=1;i<=n;i++){
        forj(W+1){
            T[j][i]=T[j][i-1];
            if(j>=w[i-1]){
                T[j][i]=max(T[j-w[i-1]][i-1]+v[i-1], T[j][i]);
            }
        }
    }
    //cout<<T[W][n];
    //counting & indexing
    ll u=W,i=n;
    vector<ll> vec;
    while(u>=0 && i>=1){
        if(T[u][i]==T[u][i-1]){
            i=i-1;
        }
        else{
            vec.push_back(i-1);
            u=u-w[i-1];
            i=i-1;
        }
    }
    cout<<vec.size()<<endl;
    sort(vec.begin(), vec.end());
    fori(vec.size()){
        cout<<vec[i]+1<<" ";
    }
}

int main(){
    //cout<<"Om\n";
    //praise to lord
    //make cin/cout faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code now
    ll n,W;
    cin>>n>>W;
    ll w[n],v[n];
    fori(n){
        cin>>w[i]>>v[i];
    }
    Mux(W,w,v,n);
    
    return 0;
}
