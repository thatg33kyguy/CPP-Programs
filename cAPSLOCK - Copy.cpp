#include "bits/stdc++.h"
using namespace std;

//GOOD QUESTION, PROPER USAGE OF CASES OF ALPHABETS

#define int long long

void solve(){

string s;
 cin >> s;
 int cnt=0;
 string ans ="";

 if(s.size()==1){ 
    if(isupper(s[0])){ 

        s[0]=tolower(s[0]);        
        cout << s;
        return;}

    else{
        s[0]=toupper(s[0]);
        cout << s;
        return;
    }                          
 }

else{

 if(islower(s[0]) && isupper(s[1])){
    s[0]=toupper(s[0]);
    ans+=s[0];
    for(int i=1; i<s.size(); i++){
        
        char c=s[i];
        if(islower(c)){

            s[0]=tolower(s[0]);

            cout << s << endl;
            return;

        }
        else{
            c=tolower(c);
        ans+=c;
        
       }
    }
    cout << ans;
    
    }
     

    


 else if(isupper(s[0]) && isupper(s[1])){
    s[0]=tolower(s[0]); 
    ans+=s[0];
    for(int i=1; i<s.size(); i++){
        char c=s[i];
        if(isupper(c)) {
            c=tolower(c);
            ans+=c;
            
        }

        else {
            s[0]=toupper(s[0]);
            cout << s;
            return;
    
    }
   
    }
     cout << ans;
 }


 else cout << s;





}

}


signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int T = 1;
    // cin >> T;
    // while(T--) {

        solve();
        
   // }

    return 0;
}