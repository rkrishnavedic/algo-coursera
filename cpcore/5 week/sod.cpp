#include <bits/stdc++.h>
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

using namespace std;

int main(){
    //cout<<"Om\n";
    //praise to lord
    //make cin/cout faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code now
    ll s,l;
    cin>>s>>l;
    
    if(s>9*l || l==1){
        if(l==1){if(s<=9){cout<<1;}else{cout<<0;}}
        else{
            cout<<0;
        }
    }
    else{
        if(s==0){
            if(l>1){cout<<0;}
            else{
                 cout<<1;
            }
        }
        else{
           //main code
            ll arr[s][l];
            fori(s){
                if(i>=9){
                    arr[i][0]=0;
                }
                else{
                    arr[i][0]=1;
                }
            }
            fori(l){
                arr[0][i]=1;
            }
            for(ll t=1;t<l;t++){
                for(ll k=1;k<s;k++){
                    arr[k][t]=0;
                    for(ll i=k;i>=k-9 && i>=0;i--){
                        arr[k][t]+=arr[i][t-1];
                    }
                }
            }
            cout<<arr[s-1][l-1];
            //above
        }
    }
    
    return 0;
}

