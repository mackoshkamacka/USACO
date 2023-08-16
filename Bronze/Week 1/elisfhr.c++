#include<iostream>
#include<math.h>
#include<vector>
#include<utility>
#include<sstream>
 
using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, y; 
    cin >> n; 
    cin >>x;  
    if(n==1){
        cout<<"Yes"; 
    }
    for(int i =0; i<(n-1); i++){
        cin>>y;
        if((x!=y)&&((2*x)!=y)&&((2*y)!=x)&&((3*x)!=y)&&((3*y)!=x)&&((3*x)!=(2*y))&&((3*y)!=(2*x))||((x/y)%3==0)||((2x/y)%3==0)){
            cout<<"No"; 
            return 0; 
        }
        x=y; 
    }
 
    cout<<"Yes"; 
 
    return 0;
} 