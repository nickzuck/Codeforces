#include<iostream>

using namespace std ;

int main(){
	int n ;
	cin >> n ;

	// Preprocess
	int imax = -1 , imin = -1 , maxV = INT_MIN, minV = INT_MAX, temp;
	for(int i = 0 ;i < n; i++){
		cin >> temp ;
		if (temp > maxV){
			maxV = temp;
			imax = i ;
		}
		if (temp <= minV){
			minV = temp;
			imin = i ;
		}
	}


	// Processing for answer
	int d = 0 ;
	if (imin == n-1){
		d = imax ;
	} else {
		if (imax > imin){
			d = imax + (n-1-imin) - 1;
		} else {
			d = imax + (n-1-imin) ;
		}
	}

	cout << d << endl ;
}