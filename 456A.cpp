#include <iostream>
#include<utility>
#include<algorithm>
#include<vector>

#define mp make_pair
#define pb push_back 

using namespace std ;

int main(){
	int n, t1, t2; 

	cin >> n ;

	vector<pair<int, int> > v; ;

	for (int i = 0; i < n; ++i){
		cin >> t1 >> t2 ;
		v.pb(mp(t1, t2));
	}

	sort(v.begin(), v.end());

	vector<pair<int, int> >::iterator it = v.begin();

	int hs = INT_MIN ;
	int hsp = INT_MAX ;
	bool found = false ;
	for(; it != v.end() ; it++){
		if (it->second > hs){
			hs = it->second ;
			hsp = it->first ;
		}
		if (hs > it->second && hsp < it->first){
			found = true ; 
			break ;
		}
	}

	if (found) {
		cout << "Happy Alex" << endl ;
	} else {
		cout << "Poor Alex" << endl ;
	}


	return 0;
}