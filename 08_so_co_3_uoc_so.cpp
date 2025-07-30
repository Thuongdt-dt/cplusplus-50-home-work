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

bool uocSo(long long n) {
    if (n < 3) return false;
    cout << n << ": ";
    vector<int> powV;
    powV.push_back(1);
    if(!isPrime[n]) powV.push_back(n);
    for (int i = 0; i <= primes.size()-1; i++) {
        int cnt = 0;
        while (n % primes[i] == 0) {
            n /= primes[i];
            ++cnt;
        }
        if (cnt) powV.push_back(primes[i]);
    }
    if (n != 1) powV.push_back(n);
    for(int i = 0; i < powV.size(); i++) {
    	cout << powV[i] << " ";
	}
	cout << endl;
    
    if(powV.size() == 3) return true;
    return false;
}

void sol() {
    sieve();
    long long n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
    	if(uocSo(i)) cout << i << " ";
	}
	cout << endl;
}

int main (){
	int test;
	cin >> test;
	while(test--) {
		sol();
	}	
	return 0;
}
