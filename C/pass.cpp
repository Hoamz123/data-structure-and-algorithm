#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

class student
{
private:
    string msv, name, date, lop;
    double gpa;
public:
    student();
    student(string msv, string name, string date, string lop, double gpa){
        this->msv = msv;
        this->name = name;
        this->date = date;
        this->lop = lop;
        this->gpa = gpa;
    }

    double getGpa() {
        return this->gpa;
    }
    string getMsv() {
        return this->msv;
    }
    string getDate() {
        return this->date;
    }

    void CHname() {
        for(int i = 0; i < (int)name.size(); i++) {
            name[i] = tolower(name[i]);
        }
        for(int i = 0; i < (int)name.size(); i++) {
            if(name[i] != ' ') {
                name[i] = toupper(name[i]);
            }
            while(name[i] != ' ' && i < (int)name.size()) ++i;  // Prevent out-of-bounds access
        }
    }

    void chDate() {
        if(date.size() >= 3 && date[2] != '/') {
            date = "0" + date;
        }
        if(date.size() >= 6 && date[5] != '/') {
            date.insert(3,"0");
        }
    }

    void show() {
        cout << msv << " " << name << " " << date << " " << lop << " " << fixed << setprecision(2) << gpa << endl;
    }

};

bool cmp(student a, student b) {
    string d = a.getDate().substr(0, 2);
    string m = a.getDate().substr(3, 2);
    string y = a.getDate().substr(6);

    string d1 = b.getDate().substr(0, 2);
    string m1 = b.getDate().substr(3, 2);
    string y1 = b.getDate().substr(6);

    if(y != y1) {
        return y1 > y;
    }
    else if(m1 != m) {
        return m1 > m;
    }
    else if(d1 != d) {
        return d1 > d;
    }
    else {
        return a.getMsv() < b.getMsv();
    }
}

int main() {
    int n;
    cin >> n;
    string msv, name, date, lop;
    double gpa;
    vector<student> v;
    cin.ignore();  // Ensure to clear the newline character from the buffer
    for(int i = 0; i < n; i++) {
        getline(cin, msv);
        getline(cin, name);
        getline(cin, date);
        getline(cin, lop);
        cin >> gpa;
        cin.ignore();  // Consume the newline after the gpa input
        v.push_back(student(msv, name, date, lop, gpa));
    }

    vector<student> res;
    for(student x : v) {
        x.chDate();
        x.CHname();
        res.push_back(x);
    }

    sort(res.begin(), res.end(), cmp);
    for(student x : res) {
        x.show();
    }

    return 0;
}
