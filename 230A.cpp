#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>


#define mp make_pair
#define pb push_back
using namespace std ;

int main(){
	int s, n ; 

	cin >> s >> n ;
	vector< pair<int, int > > v ;

	int strength, bonus ;
	for(int i = 0 ;i < n; i++){
		cin >> strength >> bonus ;
		// cout << "s : " << strength << " b : "  << bonus << endl ;
		v.pb(mp(strength, bonus));
	}

	sort(v.begin(), v.end());

	vector<pair<int, int > >::iterator it = v.begin();
	bool died = false ;
	for( ; it != v.end() ; ++it){
		// cout << it->first << "  " << it->second << endl ;
		if (it->first < s){
			s += it->second ;
		} else {
			died = true ;
		}
	}

	if (!died){
		cout << "YES" << endl ;
	} else {
		cout << "NO" << endl ;
	}
	return 0;
}