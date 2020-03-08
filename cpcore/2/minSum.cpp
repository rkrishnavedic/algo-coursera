#include <bits/stdc++.h>

#define fori(n) for(long long i=0;i<n;i++)

using namespace std;

long long min_index(long long arr[],long long n, long long l, long long u){
    long long s=u;
    fori(u-l){
        if(arr[i+l]<arr[s]){s=i+l;}
    }
    return s;
}

long long miniSum(long long arr[],long long n, long long l, long long u){
    long long v=0,sum=0;
    if(l<n && u<n && l<=u && l>=0 && u>=0){
        v=min_index(arr, n, l, u);
        sum=arr[v]*(u-v+1)*(v-l+1);
        return miniSum(arr, n, l, v-1)+miniSum(arr, n, v+1, u)+sum;
    }
    else{
        return 0;
    }
}

int main(){
    //cout<<"Om\n";
    long long n;
    cin>>n;
    long long arr[n];
    
    fori(n) cin>>arr[i];
    cout<<miniSum(arr, n, 0, n-1);
    
    
    return 0;
}
