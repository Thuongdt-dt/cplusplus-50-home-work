#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

vector<int> primes;
vector<bool> isPrime;

void sieve() {
    isPrime.assign(MAXN + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (!isPrime[i]) continue;
        primes.push_back(i);
        for (int j = i + i; j <= MAXN; j += i) {
            isPrime[j] = 0;
        }
    }
}

void uocSo(long long n) {
    if (n == 1) return ;
    vector<int> powV;
    for (int i = 0; i <= primes.size()-1; i++) {
        int cnt = 0;
        while (n % primes[i] == 0) {
            n /= primes[i];
            ++cnt;
        }
        if (cnt) powV.push_back(primes[i]);
    }
    if (n != 1) powV.push_back(1);

    for (int i = 0; i <= powV.size()-1; i++) {
    	cout <<  powV[i] << " ";
    }
    cout << endl;
}

void sol() {
    sieve();
    long long n;
    cin >> n;
    uocSo(n);
}

int main (){
	int test;
	cin >> test;
	while(test--) {
		sol();
	}	
	return 0;
}
