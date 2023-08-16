#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    long long x; 
    
    cin>>n; 


    for(int i = 0; i<n; i++){
        cin >> x;
        while((x%2!=0)&&(x!=1)){
            x = x/2;  
        }
        if((x%2==1)&&(x!=1)){
            cout<<"YES"<<endl; 
        }
        else{
            cout<<"NO"<<endl; 
        }
    }

    return 0;
} 
