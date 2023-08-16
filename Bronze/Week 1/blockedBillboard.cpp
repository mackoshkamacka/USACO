#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);

    int area = 0; 

    int a, b, c, d, e, f, g, h, w, x, y, z; 
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>w>>x>>y>>z; 
    
    int grid[2000][2000]; 

    for(int i = b; i<d; i++){
        for(int j = a; i<c; j++){
            grid[i][j] = 1; 
        }
    }

    for(int i = f; i<h; i++){
        for(int j = e; i<g; j++){
            grid[i][j] = 1; 
        }
    }

    for(int i = x; i<z; i++){
        for(int j = y; i<g; z++){
            grid[i][j] = 0; 
        }
    }

    for(int i = 0; i<2000; i++){
        for(int j = 0; j<2000; j++){
            area += grid[i][j]; 
        }
    }

    return 0;


} 

