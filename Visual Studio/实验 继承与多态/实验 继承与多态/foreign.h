#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
class StudentInfo {
protected:
    string name;
    string student_id;
    string major;

public:
    StudentInfo() {}
    StudentInfo(const string& name, const string& student_id, const string& major)
        : name(name), student_id(student_id), major(major) {}
    void input();
    void display() const;
};
class Grades : public StudentInfo {
private:
    double scores[6];

public:
    void input();
    double getAverage() const;
    void display() const;
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
