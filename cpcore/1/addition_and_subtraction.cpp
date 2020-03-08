#include <bits/stdc++.h>


using namespace std;

int main() {
    int x,y,z,a,b;
    cin>>x>>y>>z;
    if(z==0){cout<<0;}
    else{
        if(x==y){
            if(z==x){cout<<1;}
            else{cout<<-1;}
        }
        else{
            if(y==0){
                if(z%x==0 && z/x>=0){cout<<2*(z/x)-1;}
                else{cout<<-1;}
            }
            else{
                if(x==0){
                    cout<<-1;
                }
                else{
                    if(z%(x-y)==0 || (z-y)%(x-y)==0){
                        if(z%(x-y)==0 && (z-y)%(x-y)==0){
                        a=2*(z/(x-y));
                        b=2*((z-y)/(x-y))-1;
                        if(b>=0 && b<=a){cout<<b;}
                        else{if(a>=0 && a<=b){cout<<a;}
                        else{
                            if(a>=0 && b<0){cout<<a;}
                            else{if(b>=0 && a<0){cout<<b;}
                            else{cout<<-1;}
                            }
                        }
                        }
                            }
                        else{
                            if(z%(x-y)==0 && z/(x-y)>=0){cout<<2*(z/(x-y));}
                            else{
                                if((z-y)%(x-y)==0 && (z-y)/(x-y)>0){cout<<2*(z/(x-y))-1;}
                                else{cout<<-1;}
                            }
                        }
                    }}
            }
        }
    }
    
    return 0;
}
