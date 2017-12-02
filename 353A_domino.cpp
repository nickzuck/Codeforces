#include<bits/stdc++.h>

#define mp make_pair
#define pb push_back
using namespace std ;

int main(){
    
    int n , u, l;
    cin >> n ;
    int upper_count = 0, lower_count = 0 ,
        total_count = 0 ;
    int u_odd = -1, l_odd =-1 ;
    vector<pair<int, int> > v;
    for(int i = 0 ;i < n ; i++){
        cin >> u >> l ;
        upper_count += u ;
        lower_count += l ;
        total_count += (u+l) ;
        if(u%2 != 0 and l%2 ==0){
            u_odd = u ;
        }
        if(l%2 != 0 and u%2 ==0){
            l_odd = l ;
        }
        v.pb(mp(u, l));
    }

    int ans = 0;
    //cout << upper_count << "  " << lower_count << endl ;
    //cout << u_odd << "    " << l_odd << endl ;
    if(upper_count % 2 != 0 ){
        if(lower_count %2 == 0){
            ans = -1;
        }
        else{
            // Add an odd number from lower half
            // or subtract from upper half
            if(u_odd != -1 or l_odd != -1)
               ans = 1 ;
            else
                ans = -1;
        }
    }
    if(lower_count %2 != 0){
        if(upper_count %2 == 0){
            ans = -1 ;
        }
        else{
            if(u_odd != -1 or l_odd != -1)
               ans = 1 ;
            else
                ans = -1;
        }
    }
     
    cout << ans << endl ;

    return 0 ;
}
