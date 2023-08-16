#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n, k;
    cin>>n>>k; 
    
    int taken = 0;

    for(int i = 0; i<n; i ++){
        string str; 
        cin>>str; 
        int length = str.length();

        if((taken+length)<=k){
            if(taken!=0){
                cout<<" "; 
            }            
            cout<<str;
            taken += length;
              
        }
        else{
            cout<<"\n"<<str;
            taken = length; 
        }    
    }

    return 0;
} 
