#include <bits/stdc++.h>

using namespace std;
int main() {
     //cout<<"Om\n";
       string c="0";
       int t=0,x=0;
       cin>>c;
       for(int i=0;i<c.size(); i++){
           if((c[i]-'0')==9){t++;}
       }
       if(t==c.size()){x++;}
       x+=c.size();
       cout<<x<<endl;
    return 0;
}
