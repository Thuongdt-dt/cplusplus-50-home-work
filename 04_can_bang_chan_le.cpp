#include<bits/stdc++.h>
using namespace std;

bool check(int number) {
	int cnt_odd = 0;
	int cnt_even = 0;
	
	while(number > 0) {
		int digit = number%10;
		number /= 10;
		if(digit%2==0) {
			cnt_even++;
		}
		else cnt_odd++;
	}
	if(cnt_odd == cnt_even) return true;
	return false;
}


int main (){
	int n;
	cin >> n;
	int min_n = pow(10, n-1);
	int max_n = pow(10, n) - 1;
	
	for(int i = min_n; i <= max_n; i++) {
		if(check(i)) cout << i << " ";
	}
	
	return 0;
}
