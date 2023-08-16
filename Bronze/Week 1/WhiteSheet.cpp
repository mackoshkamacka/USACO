#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h> 

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> grid; 
    int x1, x2, y1, y2; 
    bool cover = 0; 

    for(int p = 0; p<3; p++){
        cin>>x1>>y1>>x2>>y2; 
        if(p==0){
            for(int i=y1; i<y2; i++){
                for(int j =x1; j<x2; j++){
                    grid[j][i] = 1; 
                }
            }
        }
        else{
            for(int i=y1; i<y2; i++){
                for(int j =x1; j<x2; j++){
                    grid[j][i] = 0; 
                }
            }
        }
    }

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            if(grid[j][i]==1){
                cover = 1;
            }
        }
    }

    if(cover){
        cout<<"YES"; 
    }
    else{
        cout<<"NO"; 
    }

    return 0;
} 
