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
    cin >> N; // �?c s? lu?ng ngu?i
    cin.ignore(); // B? qua k� t? newline c�n l?i sau khi d?c N

    vector<Person> people(N); // T?o vector ch?a N ngu?i

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line); // �?c to�n b? d�ng (t�n v� ng�y sinh)

        stringstream ss(line);
        string name_str, dob_str;
        ss >> name_str >> dob_str; // T�ch t�n v� ng�y sinh t? d�ng

        people[i].name = name_str;
        people[i].dob_formatted = format_dob(dob_str); // �?nh d?ng l?i ng�y sinh
    }

	sort(people.begin(), people.end(), comparePerson);

    // In t�n ngu?i tr? nh?t v� gi� nh?t
    cout << people[0].name << endl;
    cout << people[people.size()-1].name << endl;

    return 0;
}
