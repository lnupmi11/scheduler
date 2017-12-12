#include "Student.h"

Student::Student() {
	id = "";
	name = "";
}

Student::Student(string n, string i) {
	id = i;
	name = n;
}

Student::Student(const Student& obj) {
	id = obj.id;
	name = obj.name;
}

void Student::set_name(string n) {
	name = n;
}

string Student::get_name() {
	return name;
}

void Student::set_id(string i) {
	id = i;
}

string Student::get_id() {
	return id;
}