#include <iostream>
#include <fstream>
using namespace std;

struct StudentInfo {
	string name;
	char grade;
};

int main() {
	StudentInfo s1;
	s1.name = "Student1";
	s1.grade = 'A';

	StudentInfo s2;
	s2.name = "Student2";
	s2.grade = 'B';

	StudentInfo allStudents[3];
	allStudents[0].name = "Bob";
	allStudents[1].name = "Alex";
	allStudents[0].grade = 'A';
	allStudents[1].grade = 'C';
}
