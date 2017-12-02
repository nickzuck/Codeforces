#include<bits/stdc++.h>

using namespace std ;

int main(){

    int n, k ;
    cin >> n >> k ;
    int arr[n+1];
    for(int i = 0 ;i < n ; i++){
        cin >> arr[i] ;
    }
    int m = 1 ;
    while(k - m > 0){
        k -= m ;
        //cout << k -m << endl ;
        m += 1 ;
    }
        //cout << "k = " << k << endl ;
        cout << arr[k-1] << endl  ;
    return 0 ;
}
