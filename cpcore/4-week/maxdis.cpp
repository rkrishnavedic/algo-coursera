#include <bits/stdc++.h>
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

int main(){
    //cout<<"Om\n";
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    ll maxi=1,mini=1;
    ll max,min;
    ll x;
    fori(n){
        cin>>x;
        if(i==0){max=x;min=x;}
        if(x>max){
            maxi=i+1;
            max=x;
        }
        if(x<min){mini=i+1;min=x;}
        cout<<mini<<" "<<maxi<<endl;
    }

    return 0;
}
