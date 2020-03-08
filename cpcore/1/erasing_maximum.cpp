#include <bits/stdc++.h>


using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
          cin >> a[i];

      vector<int> result;

    int max=0,count=0,arr[3];
    for (int i = 0; i < n; i++){
        if(max==a[i]){count++;if(count<3){arr[count]=i;//cout<<count<<","<<arr[count]<<" ";
            
        }}
        if(max<a[i]){count=0;max=a[i];arr[0]=i;//cout<<count<<" ";
            
        }
    }
    for (int i = 0; i < n; i++){
        if(count!=0){
            if(arr[2]!=i){
                result.push_back(a[i]);}
        }
        if(count==0){
            if(arr[0]!=i){
            result.push_back(a[i]);}
        }
    }
    

      for (int i = 0; i < result.size(); i++) {
          if (i != 0) cout << ' ';
          cout << result[i];
      }
      cout << endl;
    return 0;
}
