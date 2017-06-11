#include<bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std ;

inline int  ceil(int a){
    if(a%2==0){
        return a/2;
    } 
    else
        return (a/2+1);
}
void pvp(vector<pair<int, int > > v){
    for(int i = 0 ;i < v.size() ; i++){
        cout << v[i].first << "  " << v[i].second << endl ;
    }
}
int main()
{
    int n, w, temp, temp2;
    cin >> n >> w ; 
    int a[n+1], p[n+1] ;
    memset(p, 0, sizeof(p));
    int sh = 0 ;
    for(int i = 0 ; i< n ;i++){
        cin >> temp;
        //cout << "temp = " << temp << endl ; 
        temp2 = ceil(temp) ;
        sh += temp2 ;
        //cout << "sh = " << sh << endl ;
        p[i] = temp2 ;
        a[i] = temp ; 
    }
    bool flag = true ;
    if(sh > w){
        flag = false ;
    }
    else{
        int rem = w-sh ;
        vector<pair<int, int> > newA ;
        for(int i = 0 ; i < n ; i++){
            newA.pb(mp(a[i], i));
        }
        sort(newA.rbegin(), newA.rend()) ;
        //pvp(newA) ;
        int index ;
        for(int i = 0 ;i <n ; i++){
            index = newA[i].second;
            //cout << "index = " << index << endl ;
            //cout << a[index] << p[index] << endl ;
            temp = min(a[index]-p[index], rem);
            //cout << "temp for loop = " << temp << endl ;
            p[index] += temp ;
            rem -= temp ;
            //cout << "rem in for = " << rem << endl ;
        }
    }
    if(flag){
        for(int i = 0 ;i < n ; i++){
            cout << p[i] << " " ;
        }
        cout << endl ;
    }
    else{
        cout << -1 << endl ;
    }
return 0 ;
}
