#include<iostream>

using namespace std ;

int main(){

	int t , deg ;

	cin >> t ;
	while(t--){
		cin >> deg ;
		int mod = 360%(180-deg); 
		if (mod == 0 ){
			cout << "YES" << endl ;
		} else {
			cout << "NO" << endl ;
		}

	}
	return 0 ;
}