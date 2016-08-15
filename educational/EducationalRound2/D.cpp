#include<bits/stdc++.h>
#define pi 3.1415926535897932384626433
using namespace std ;

int main(){
    long double x1, y1, r1, x2, y2, r2 ;
    long double d, p1, p2, ans, t;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;
    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    if(d >= r1 + r2)
        cout <<  "0.000000" << endl ;
    else if(d <= fabs(r1-r2)){
        t = min(r1, r2);
        cout << fixed << setprecision(30) << (pi * t*t) << endl ;
    }
    else{
        p1 = acos((d*d + r1*r1 - r2*r2)/ (2*d*r1));
        p1 *= 2;
        p2 = acos((d*d + r2*r2 - r1*r1)/(2*d*r2));
        p2 *= 2;
        ans = 0.5*((r1*r1)*(p1-sin(p1))+(r2*r2)*(p2-sin(p2))) ;
        cout << fixed << setprecision(30) <<  ans << endl;
    }
    return 0 ;
}
