#include<bits/stdc++.h>
using namespace std;

string to_lower(string s) {
	string res = "";
    for(int i = 0; i< s.size(); i++) {
    	res +=tolower (s[i]);
	}
    return res;
}

int main  (){
	
	freopen("input/49_VANBAN.IN", "r", stdin);
	
	string word;
	set<string> uniqueWords;
	
	while(cin >> word) {
		if(!word.empty()) {
			uniqueWords.insert(to_lower(word));
		}
	}
	
    for (set<std::string>::const_iterator it_const = uniqueWords.begin(); it_const != uniqueWords.end(); ++it_const) {
        std::cout << *it_const << std::endl;
    }
	
	return 0;
}
