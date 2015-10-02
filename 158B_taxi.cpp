#include<iostream>
#include<algorithm>

using namespace std ;

int main ()
{
	int i, n , group[6]= {0} , temp ;

	cin >> n ; 
	for (i = 0 ; i<n ; i++){
		cin >> temp ; 
		group[temp]++ ; 
	}

	long long int ans = 0 ; 
	ans = group[4] + group[3] ;
	group[1] = max (0 , group[1] - group[3]) ;  // if 1's > 3's ; 1's = 1's - 3's 
	ans += group[2] / 2 ; 
	group[2] = group[2] % 2 ; 
	if (group[2] > 0){
		ans += group[2] ; 
		group[1] -= 2* group[2] ; 
	}	

	if (group[1] / 4 == 0 ){
		ans +=  (group[1]/4) ; 
	}
	else{
		ans += (group[1]/4) + 1  ; 
	}

	cout << ans << endl ;
return 0 ;
}