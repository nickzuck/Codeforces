#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int     n , k ; 
    cin >> n  >> k ; 
    int timeLeft = 240 - k ;
    int ans = 0 ; 
    int t = 5 ;
    while(timeLeft >0 and n > 0){
        if (timeLeft -t < 0)
            break ;
        timeLeft -= t ;
        
        t += 5; 
        ans += 1 ;
        n -- ;

    }
    cout << ans << endl;

    return 0 ;

}
