#include<bits/stdc++.h>

using namespace std ;

inline int  ceil(int a){
    if(a%2==0){
        return a/2;
    } 
    else
        return (a/2+1);
}

int main()
{
    int n, w, temp;
    cin >> n >> w ; 
    int a[n+1], p[n+1] ;
    memset(p, 0, sizeof(p));
    int sh = 0 ;
    for(int i = 0 ; i< n ;i++){
        cin >> temp;
        sh += ceil(temp) ;
        a[i] = temp ; 
    }
    bool flag = true ;
    if(sh > w){
        flag = false ;
    }
    else{
        for(int i = 0 ;i < n ; i++){
            p[i] = ceil(a[i]);
        }
        int rem = w - sh, max, mi ;

        for(int i = 0 ;i < n ; i++){
            if(rem <= 0)
                break ;
            max = a[0];
            mi = 0 ;
            for(int j = 1 ; j < n ; j++){
                if(a[j] > max and p[j] != a[j]){
                    max = a[j] ;  mi = j ;
                }
            }
            temp = min(a[mi]-p[mi], rem);
            p[mi] += temp;
            rem -=  min(rem, temp);
        }
    }
    if(flag){
        for(int i = 0 ;i < n ; i++){
            if(p[i] == 0){
                cout << ceil(a[i]) << " ";
            }
            else
                cout << p[i] << " " ;
        }
        cout << endl ;
    }
    else{
        cout << -1 << endl ;
    }
return 0 ;
}
