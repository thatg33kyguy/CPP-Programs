#include<iostream>
using namespace std;

int main(){
    string s;
    int i;
    for(i=0; i<=1000;i++){
        cin>> s;
    }
    if(s[0]>92){
        s[0]-=32;
    }
    cout<< s;
}