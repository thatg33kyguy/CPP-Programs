#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,answer=0;
     cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        answer++;

    }
    
        cout<<answer<<endl;
        return 0;
    }
