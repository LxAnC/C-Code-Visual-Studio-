#include "foreign.h"
class StudentInfo {
protected:
    string name;
    string student_id;
    string major;

public:
    StudentInfo() {}

    StudentInfo(const string& name, const string& student_id, const string& major)
        : name(name), student_id(student_id), major(major) {}

    void input() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter student ID (10 characters): ";
        cin >> student_id;
        while (student_id.length() != 10) {
            cout << "Invalid ID. Enter a 10-character student ID: ";
            cin >> student_id;
        }

        cout << "Enter major: ";
        cin.ignore();
        getline(cin, major);
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Major: " << major << endl;
    }
};

class Grades : public StudentInfo {
private:
    double scores[6];

public:
    void input() {
        StudentInfo::input();
        for (int i = 0; i < 6; ++i) {
            cout << "Enter score for subject " << i + 1 << ": ";
            cin >> scores[i];
            while (scores[i] < 0 || scores[i] > 100) {
                cout << "Invalid score. Enter a score between 0 and 100: ";
                cin >> scores[i];
            }
        }
    }

    double getAverage() const {
        double sum = 0;
        for (int i = 0; i < 6; ++i) {
            sum += scores[i];
        }
        return sum / 6.0;
    }

    void display() const {
        StudentInfo::display();
        cout << "Average score: " << fixed << setprecision(2) << getAverage() << endl;
    }

    friend bool operator<(const Grades& a, const Grades& b) {
        return a.getAverage() < b.getAverage();
    }
};

void sort(Grades* grades, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (grades[j] < grades[j + 1]) {
                swap(grades[j], grades[j + 1]);
            }
        }
    }
}
int main() {
    const int size = 3;
    Grades students[size];
    for (int i = 0; i < size; ++i) {
        cout << "Enter information for student " << i + 1 << endl;
        students[i].input();
        cout << endl;
    }

    sort(students, size);
    cout << "Students sorted by average score:" << endl;
    for (int i = 0; i < size; ++i) {
        students[i].display();
        cout << endl;
    }

    return 0;
}