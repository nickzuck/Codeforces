#include<iostream>

using namespace std ;

int main(){
	int n , k ; 
	cin >> n >> k ;

	int curr = n ;
	for(int i = 0 ; i < k ; i++){
		cout << curr << " " ;
		curr -- ;
	}

	for(int i = 1 ; i <= curr ; i++){
		cout << i << " " ;
	}

	return 0 ;
}