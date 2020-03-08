#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;


int main(){
    //cout<<"Om\n";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll n,k,x,y;
    n=s.size();
    cin>>k;
    forj(k){
        cin>>x>>y;x--;
        char max=s.at(x);
        map<char,ll> a;
        fori(y-x){
             auto itr=a.find(s.at(i+x));
            if(itr==a.end()){
                a.insert({s.at(i+x),1});
            }
            else{
                itr->second++;
                if(a[max]<(itr->second)){
                    max=itr->first;
                }
            }
            
        }
        cout<<max<<"\n";
    }

    return 0;
}
