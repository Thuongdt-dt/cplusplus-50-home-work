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
	
	freopen("input/50_DATA1.IN", "r", stdin);
	
	string word;
	set<string> uniqueWords1;
	set<string> uniqueWords2;
	
	while(cin >> word) {
		if(!word.empty()) {
			uniqueWords1.insert(to_lower(word));
		}
	}
	
	cin.clear();
	
	freopen("input/50_DATA2.IN", "r", stdin);
	
	while(cin >> word) {
		if(!word.empty()) {
			uniqueWords2.insert(to_lower(word));
		}
	}
	
	vector<std::string> intersectionResult;
	vector<std::string> unionResult;
	
	// uniqueWords1 uniqueWords2
	
	set_union(uniqueWords1.begin(), uniqueWords1.end(),
                   uniqueWords2.begin(), uniqueWords2.end(),
                   std::back_inserter(unionResult));
	
	set_intersection(uniqueWords1.begin(), uniqueWords1.end(),
                          uniqueWords2.begin(), uniqueWords2.end(),
                          std::back_inserter(intersectionResult));

    for (int i = 0; i < unionResult.size(); ++i) {
        cout << unionResult[i] << " ";
    }
	cout << endl;
    for (int i = 0; i < intersectionResult.size(); ++i) {
        cout << intersectionResult[i] << " ";
    }
	
	return 0;
}
