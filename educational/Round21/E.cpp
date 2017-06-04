#include<bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std ;

int main()
{
    int maxW,  n;
    int value , w ;
    vector<pair<int, int> > v ;
    cin >> n >> maxW ;
    for(int i = 0 ;i < n ; i++){
        cin >> w >> value ;
        v.pb(mp(value, w));
    }
    sort(v.begin(), v.end()) ;
    reverse(v.begin(), v.end());
    
    long long  currV = 0 ,currW = 0 ; 
    for(int i = 0 ;i < n ; i++){
        if(currW >= maxW )
            break ;
        if(currW + v[i].second <= maxW){
            currV += v[i].first ;   
            currW += v[i].second ; 
        }
    }

    cout << currV << endl ;
    
return 0 ;
}
