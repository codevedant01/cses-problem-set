#include<bits/stdc++.h>
using namespace std;
 
int main() {
	long long n;
	cin >> n;
 
	long long s1 = n * (n+1) / 2;
	long long s2 = 0;
 
	for(int i = 0; i < n-1; i++) {
		long long x;
		cin >> x;
		s2 += x;
	}
 
	long long missing = s1 - s2;
	cout << missing;
	
	return 0;
}