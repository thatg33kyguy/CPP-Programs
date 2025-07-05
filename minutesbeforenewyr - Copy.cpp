#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
     int h[t],m[t];
        for(int i=0;i<t;i++){
            cin>>h[i]>>m[i];
            int ans= (23-h[i])*60 + (60-m[i]);
            cout<< ans<< endl;
            


        }


    }
