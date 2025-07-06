#include<bits/stdc++.h>
using namespace std;

struct company {
	string id;
	string name;
	int total_internship;
};

bool operator<(const company& s1, const company& s2) {
    return s1.total_internship > s2.total_internship;
}

int main () {
	int n;
	cin >> n;
	
	cin.ignore();
	
	company companies[100];
	
	string id, name;
	int total_internship;
	for(int i = 1; i <= n; i++) {
		getline(cin, id);
		getline(cin, id);
		
		cin >> total_internship;
		companies[i].id = id;
		companies[i].name = name;
		companies[i].total_internship = total_internship;
		cin.ignore();
	}
	
	sort(companies, companies + n+1);
	
	for(int i = 1; i <= n; i++) {
		cout << companies[i].id << " " << companies[i].name << " " << companies[i].total_internship << endl;
	}
	
}
