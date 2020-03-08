#include <bits/stdc++.h>


using namespace std;

int deckify(char c){
    if(c=='A' || c=='Q' || c=='J' || c=='K' || c=='T'){
        if(c=='A'){return 14;}
        if(c=='Q'){return 12;}
        if(c=='K'){return 13;}
        if(c=='J'){return 11;}
        if(c=='T'){return 10;}

    }
return (c-'0');
}

int main(){
   string s[5];
   int y=1,arr[5];
   
   for(int i=0;i<5;i++){cin>>s[i];if(s[i][1]!=s[0][1]){y=0;}}
   if(y==0){cout<<"NO";}
   else{
       for(int i=0;i<5;i++){arr[i]=deckify(s[i][0]);}
       sort(arr, arr+5);
       //for(int i=0;i<5;i++){cout<<arr[i]<<" ";}
       if(arr[4]==14){
           if(arr[0]==2){
               arr[4]=1;
           }
           sort(arr, arr+5);
           if(arr[4]-arr[0]>4){cout<<"NO";}
           else{
               cout<<"YES";
           }
       }
       else{
           if(arr[4]-arr[0]>4){cout<<"NO";}
           else{
               cout<<"YES";
           }
       }
   }
    
    return 0;
}
