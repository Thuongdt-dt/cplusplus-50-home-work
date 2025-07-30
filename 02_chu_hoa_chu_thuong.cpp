#include<bits/stdc++.h>
using namespace std;

char s;

void convert() {
	if ( s >= 65 && s <= 90) {
		s += 32;
	} else {
		s -= 32;
	}
}

int main (){
	int test;
	cin >> test;
	while(test--) {
		cin >> s;
		convert();
		cout << s << endl;
	}	
	return 0;
}
