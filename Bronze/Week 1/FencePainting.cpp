#include <iostream>
#include <vector>
#include <fstream>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	vector<bool> cover(100);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for(int i = a; i < b; i++){
        cover[i] = true; 
    }
	for(int i = c; i < d; i++){
        cover[i] = true; 
    }

	int ans = 0;
	for (int i = 0; i < cover.size(); i++){
         ans += cover[i]; 
    }
	cout << ans << endl;



    return 0;
} 
