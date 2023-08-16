#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <fstream>
#include <stdio.h>

using namespace std; 

const int MAX_POS = 2000; 
bool visible[MAX_POS][MAX_POS]; 


int main() {
    
    
    for(int i = 0; i<3; i++){
        int x1, y1, x2, y2; 
        cin>>x1; 
        x1 += 1000; 
        y1 += 1000;
        x2 += 1000; 
        y2 += 1000; 
        for(int x = x1; x <x2; x++){
            for(int y = y1; y<y2; y++){
                visible[x][y] = i < 2; 
            }
        }
    }

    int area = 0; 

    for(int x = 0; x < 2000; x++){
        for(int y = 0; y<2000; y++){
            area += visible[x][y];
        }
    }
     
    cout<<area<<endl;

    return 0;
} 

