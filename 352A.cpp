#include<iostream> 

using namespace std ;

int main(){
	int n, countFives = 0, countZeros = 0 , temp; 

	cin >> n; 

	// Store data from input
	for (int i = 0; i < n; ++i){
		cin >> temp ;
		if (temp == 5){
			countFives ++ ;
		} else {
			countZeros ++ ;
		}
	}

	// process 
	if ((countZeros ==0) ||  (countZeros == 0 && countFives < 9)) {
		cout << -1 << endl ;
	} else {
		int f = countFives/9;
		for(int i =0 ; i < 9*f  ; i++){
			cout << 5 ;
		}

		if (f == 0) {
			cout << 0 ; 
		} else {
			for(int i = 0 ;i < countZeros ; i++){
			cout << 0 ;
			}	
		}
		
		cout << endl ;
	}
	
	return 0;
}