#include<bits/stdc++.h>
#define MAX 102
using namespace std ;

map<char, int> m = {{'R',1}, {'Y', 2}, {'B', 3}, {'G',4}};
int main()
{
    char inp[MAX];
    cin >> inp ;
    char firstSol[MAX], secondSol[MAX];
    int ans[5] = {0};
    vector<int> unsolved ;
    int n = strlen(inp);
    for(int i = 0 ; i < n-4 ; i++){
        bool found[5] = {false };
        bool totF = 0 ; // total found
        for(int j = i ; j<i+4 ; j++){
            cout << "before if, tot " << totF << endl;
            cout << j << " " << i+4 << endl ;
            cout << inp[j] << endl;
            if(inp[j] != '!'){
                found[m[inp[j]]] = true ;
                totF ++ ;
                cout << "in if , tot "  <<totF << endl;
                firstSol[j] = m[inp[j]];
            }
            else{
                firstSol[j] = 10 ;
            }
        }
        cout << "first totF = " << totF << endl ;
        if(totF == 4)
            continue ;
        else if(totF == 3){
            for(int k = 1 ; k<5 ;k++){
                if(!found[k]){
                    ans[k] ++ ;
                    break ;
                }
            }
        }
        else{
            unsolved.push_back(i);
        }
    }
    // Do it again to get the final answer
    for(int i = 0 ;i < n ; i++){
        bool found[5] = {false};    
        bool totF = 0 ;
        for(int j = i ; j < i+4 ; j++){
            if(firstSol[j] != 10){
                found[firstSol[j]] = true ;
                totF ++ ;
                secondSol[j] = firstSol[j];
            }
            else{
                secondSol[j] = 10 ;
            }
        }

        if(totF == 4)
            continue ;
        else if(totF == 3){
            for(int k = 1 ; k < 5 ; k++){
                if(!found[k]){
                    ans[k] ++ ;
                    break ;
                }
            }
        }
    }
    cout << ans[1] << " " << ans[3] << " " << ans[2] << " " << ans[4] << endl;

return 0;
}
