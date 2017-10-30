#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Subject {
private:
	string id;
	string course_title;
public:
	///info:
	///Constructors.
	Subject();
	Subject(string course_title1, string id1);
	Subject(const Subject &object);

	///info:
	///Setters.
	void set_course_title(string);
	void set_id(string);

	///info:
	///Gettters.
	string get_course_title();
	string get_id();

};