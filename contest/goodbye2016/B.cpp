#include<bits/stdc++.h>

using namespace std ;

int main(){

    int curr, t, d ; 
    bool flag = true;
    char s[10];
    curr = 0 ;
    flag = true ; 
    cin >> t;
    while(t--){
        cin >> d >> s ;
        if (s[0] == 'N'){
            if (curr <= 0){
                flag = false;
            }
            else{
                curr -= d ;
            }
        }

        else if(s[0] == 'S'){
            if (curr >= 20000){
                flag = false;
            }
            else{
                curr += d ;
            }
        }
        else if( s[0] == 'E' or s[0] == 'W'){
            if (curr >= 20000 or curr <=0 and d > 0){
                flag = false;
            }
        }

    }
    if(flag == true){
        if (curr == 0){
            cout  << "YES\n";
        }
        else{
            cout <<  "NO\n";
        }
    }
    else{
        cout << "NO\n" ;
    }
    

return 0 ;
}