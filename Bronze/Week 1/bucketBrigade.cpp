#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);

    int bx, by, lx, ly, ry, rx ; 

    char grid[10][10]; 
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            cin>>grid[i][j]; 
            if (grid[i][j]=='B'){
                bx = j; 
                by = i;
            }
            else if(grid[i][j]=='L'){
                lx = j; 
                ly = i;
            }
            else if(grid[i][j]=='R'){
                rx = j; 
                ry = i;
            }
        }
    }

    int cows = abs(lx-bx)+abs(by-ly)-1;
    
    if((by == ly && ly == ry)
        &&((bx<rx && rx<lx)
        ||(lx<rx && rx<bx))){
            cows +=2; 
    }
    else if((bx == lx && lx == rx)
        &&((by<ry && ry<ly)
        ||(ly<ry && ry<by))){
            cows +=2; 
    }
    cout<<cows; 
    return 0;
} 

