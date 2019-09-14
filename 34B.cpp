#include<iostream>
#include<algorithm>

using namespace std ;

void printarray(int arr[], int n){
	for (int i = 0 ;i < n ; i++){
		cout << arr[i] << " ";
	}
	cout << endl ;
	cout << "print completed";
}

int main(){
	int n , m ;
	cin >> n  >> m ;

	int arr[n+1] ;

	for (int i = 0; i < n; ++i){
		cin >> arr[i] ;
	}

	sort(arr, arr+n);
	// printarray(arr, n);

	int amount = 0 ;
	int i = 0 ;
	while(arr[i] < 0 && m--){
		amount += arr[i] ;
		i++;
	} 

	cout << -amount << endl ;
	return 0 ;
}