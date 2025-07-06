#include <bits\stdc++.h>
using namespace std;

struct Person {
    string name;
    string dob_formatted;
};

bool comparePerson(const Person& a, const Person& b) {
    return a.dob_formatted > b.dob_formatted;
}

string format_dob(const string& dob) {
    string day = dob.substr(0, 2);
    string month = dob.substr(3, 2);
    string year = dob.substr(6, 4);
    return year + month + day;
}

int main() {
    int N; // S? lu?ng ngu?i
    cin >> N; // Ð?c s? lu?ng ngu?i
    cin.ignore(); // B? qua ký t? newline còn l?i sau khi d?c N

    vector<Person> people(N); // T?o vector ch?a N ngu?i

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line); // Ð?c toàn b? dòng (tên và ngày sinh)

        stringstream ss(line);
        string name_str, dob_str;
        ss >> name_str >> dob_str; // Tách tên và ngày sinh t? dòng

        people[i].name = name_str;
        people[i].dob_formatted = format_dob(dob_str); // Ð?nh d?ng l?i ngày sinh
    }

	sort(people.begin(), people.end(), comparePerson);

    // In tên ngu?i tr? nh?t và già nh?t
    cout << people[0].name << endl;
    cout << people[people.size()-1].name << endl;

    return 0;
}
