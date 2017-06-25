#include<bits/stdc++.h>

using namespace std ;

#define MAX 200002

int m[MAX] ;
int sum[MAX] ;

void print_r(int l, int r){
    for(int i = l; i<=r; i++){
        cout << i << ":"<< m[i] << " "<< sum[i] << endl;
    }
}

int main()
{
    int n,q, k , l, r;

    memset(m, 0, sizeof(m));
    memset(sum, 0, sizeof(sum));

    cin >> n >> k >> q ;
    int mini = MAX ;
    int maxi = -1 ;
    for(int i = 0 ; i <n ; i++){
        cin >> l >> r; 
        mini = min(mini, l);
        maxi = max(maxi, r);
        m[l] += 1;
        m[r+1] -= 1;
    }

    for(int i = 0 ; i < MAX ; i++){
        sum[i] = sum[i-1] + m[i];
    }

    // print_r(mini, maxi);
    m[0] = sum[0] > k ? 1 : 0 ;
    for(int i= 1;i < MAX ;i++){
        m[i] = m[i-1] + (sum[i] >=k ?1:0 );
    }

    for(int i = 0  ;i <q ;i++){
        cin >> l >> r ;
        // cout << sum[r] << sum[l-1] << endl;
        cout << (m[r] - m[l-1]) << endl;
    }
return 0 ;
}