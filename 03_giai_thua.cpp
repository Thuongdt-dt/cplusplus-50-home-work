#include<bits/stdc++.h>
using namespace std;

long long giai_thua(int n) {
	long long result = 0L;
	long long mul = 1;
	for(int i = 1; i <=n ; i++) {
		mul *=i;
		result += mul;
	}
	return result;
}

int main (){
	int n;
	cin >> n;
	cout << giai_thua(n);
	return 0;
}
