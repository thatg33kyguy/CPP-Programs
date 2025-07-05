
#include<iostream>
using namespace std;

int main(){
   int i,n,a,b,c;
   int count=0,ans=0;
   cin>>n;
   
   while(n--){
    cin>>a>>b>>c>>endl;
      if((a+b+c)>=2){
        count++;

      }
      else{
          ans++;
      }
    
    }
   
     cout<<count;

return 0;
}
