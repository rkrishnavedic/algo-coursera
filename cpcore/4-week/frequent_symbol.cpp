#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

struct chalint{
    char c;
    ll l;
};

ll gcd(ll a, ll b){
    if(a<0){return gcd(-a, b);}
    if(b<0){return gcd(a,-b);}
    
    if(b==0){if(a!=0){return a;}
    else{return 1;}
    }
    if(a>b || a==0){return gcd(b,a);}
    return gcd(b%a,a);
}

ll nahi(char t, vector<chalint> v){
    fori(v.size()){
        if(v[i].c==t){
            return i;
        }
    }
    return -1;
}

char maxs(vector<chalint> v){
    ll max=0;
    fori(v.size()){
        if(v[i].l>v[max].l){
            max=i;
        }
    }
    return v[max].c;
}

int main(){
    //cout<<"Om\n";
    string s;
    ll n,x=0,y,k;cin>>s>>n;
    
    fori(n){
        cin>>x>>y;x--;y--;
        vector<chalint> v;
        
        forj(y-x+1){
            k=nahi(s.at(x+j), v);
            if(k!=-1){
                v[k].l++;
            }else{chalint temp;
                temp.c=s.at(x+j);temp.l=1;
                    v.push_back(temp);
            }
                }
        //forj(v.size()){
            //cout<<v[j].c<<":"<<v[j].l<<" ";}
        cout<<maxs(v)<<endl;
    }
    
    return 0;
}
