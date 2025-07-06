#include<bits/stdc++.h>
using namespace std;

struct company {
	string id;
	string name;
	int total_internship;
};

struct Student {
    string maSV;
    string hoTen;
    string lop;
    string email;
    string nganh;
};

bool operator<(const company& s1, const company& s2) {
    return s1.total_internship > s2.total_internship;
}

int main () {
	int n;
	cin >> n;
	
	cin.ignore();
	
	vector<Student> students(n);
	for (int i = 0; i < n ; ++i) {
	    getline(std::cin, students[i].maSV);
	    getline(std::cin, students[i].hoTen);
	    getline(std::cin, students[i].lop);
	    getline(std::cin, students[i].email);
	    students[i].nganh = students[i].maSV.substr(3, 4);
	}
	
	int Q;
	cin >> Q;
	cin.ignore();

	for (int q = 0; q < Q; ++q) {
	    string queryMajorName;
	    getline(cin, queryMajorName); 
	
	    for (int i = 0; i < n; i++) {
	        bool matches = false;
	        // K? toán
	        if (queryMajorName == "Ke toan" && students[i].nganh == "DCKT") {
	            matches = true;
	        }
	        // Công ngh? thông tin
	        else if (queryMajorName == "Cong nghe thong tin" && students[i].nganh == "DCCN" && students[i].lop[0] != 'E') {
	            matches = true;
	        }
	        // An toan thong tin
	        else if (queryMajorName == "An toan thong tin" && students[i].nganh == "DCAT" && students[i].lop[0] != 'E') {
	            matches = true;
	        }
	        // Vi?n thông
	        else if (queryMajorName == "Vien thong" && students[i].nganh == "DCVT") {
	            matches = true;
	        }
	        // Ði?n t?
	        else if (queryMajorName == "Dien tu" && students[i].nganh == "DCDT") {
	            matches = true;
	        }
	
	        if (matches) {
	            cout << students[i].maSV << " " << students[i].hoTen << " " << students[i].lop << " " << students[i].email << endl;
	        }
	    }
	}

	
}
