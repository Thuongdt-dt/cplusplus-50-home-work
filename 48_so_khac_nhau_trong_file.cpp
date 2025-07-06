#include<bits/stdc++.h>
using namespace std;
int main  (){
	
	freopen("input/48_DATA.IN", "r", stdin);
	
	int number;
	
	int arr[1001];
	
	for(int i =1 ; i <= 1000; i++) {
		arr[i] = 0;
	}
	
	while(cin >> number) {
		arr[number] +=1;
	}
	
	for(int i =1 ; i <= 1000; i++) {
	    if(arr[i] > 0) {
	    	cout << i << " " << arr[i] << endl;
		}
	}
	
	return 0;
}
