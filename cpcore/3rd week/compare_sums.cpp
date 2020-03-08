#include <bits/stdc++.h>
#include <vector>

#define fori(n) for(long long i=0;i<n;i++)
#define ll long long

using namespace std;

double dsum(double s[],int n){
    double v=0;
    fori(n){v+=s[i];}
    return v;
}

int main(){
    //cout<<"Om\n";
    int n;
    cin>>n;
    double a[n],b[n];
    fori(n) cin>>a[i];
    fori(n) cin>>b[i];
    double as=dsum(a,n),bs=dsum(b,n);
   double df=abs(as-bs);
    //cout<<as<<" "<<bs<<" ";
    if(df<0.0009){cout<<"SUM(A)=SUM(B)";}
    else{
        if((bs-as)>=0.0009){cout<<"SUM(A)<SUM(B)";}
        else{cout<<"SUM(A)>SUM(B)";}
    }
    return 0;
}
