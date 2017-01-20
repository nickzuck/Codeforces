#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t, n ;
    cin >> n ;
    int m = 0 ;
    int arr[n+1];
    for(int i = 0 ;i <n ;i++){
        cin >> arr[i];
        m = max(m , arr[i]);
    }

    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
        ans += m - arr[i];
    }
    
    cout << ans << endl ;
return 0;
}
