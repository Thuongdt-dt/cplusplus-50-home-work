#include<bits/stdc++.h>
using namespace std;

const int maxn = 1000000 + 5; //10^6 + 5
bool is_prime[maxn]; // mang bool khoi tao voi các giá tri false
void sieve(int n){
    for (int i = 2; i <= n; i++)
        is_prime[i] = true;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * 2; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

int main (){
	int from, to;
	cin >> from >> to;
	sieve(to);
	for(int i = from; i <= to; i++) {
		if(is_prime[i]) cout << i << " ";
	}
	return 0;
}



