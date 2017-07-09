#include<bits/stdc++.h>

#define MAX 1002
#define pb push_back

using namespace std ;

void pv(vector<int> a, int n){
    for(int i = 0 ;i < n ; i++){
        cout << a[i]+1 << " ";
    }
    cout << endl ;
}

int main(){

    int n, m  ;
    string s, t;

    cin >> n  >> m ;
    cin >> s >> t;
    int mini = INT_MAX ;
    int miniIndex = -1 ;
    std::vector<int> v;
    std::vector<int> ans;
    for (int i = 0; i < n; ++i)
    {  ans.pb(i); }

    for(int i = 0 ;i < m-n+1 ; i++){
        v.clear();
        for ( int j = 0; j < n; j++ )
            if ( s[j] != t[i + j] )
                v.pb( j);

        if(ans.size() > v.size()) {
            ans = v ;
        }    

    }
    cout << ans.size() << endl ;
    pv(ans, ans.size());

    return 0 ;
}