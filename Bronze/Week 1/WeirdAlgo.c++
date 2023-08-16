#include <iostream>
#include <math.h>
#include <utility>
#include <string.h>
#include <stdio.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;    
    cin>>n; 
    cout<<n<<" "; 
    while(n!=1){
        if(n%2==0){
            n = n/2;
            cout<<n<<" ";
        }
        else{
            n = n*3; 
            n++; 
            cout<<n<<" "; 
        }
    }

    return 0;
} 
