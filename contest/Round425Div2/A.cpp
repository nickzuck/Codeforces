#include<bits/stdc++.h>

using namespace std ;

int main(){
    long long int n , k;
    cin >> n >> k ;
    long long int temp = n/k ; 
    if (temp %2 == 0){
        cout << "NO\n" ;
    }
    else{
        cout << "YES\n" ;
    }
return 0 ;
}
