#pragma once
#include "..\Entity\Group.h"
#include "..\Entity\Subject.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

class Lesson
{
private:
	int number; // first, second pair...
	Group group;
	Subject subject;
public:
	Lesson(): number(0), group(), subject() {}
	Lesson(int n, string ng, string ig, string ct, string is): number(n), group(ng, ig), subject(ct, is) {}
	Lesson(const Lesson &obj)
	{
		number = obj.number;
		group = obj.group;
		subject = obj.subject;
	}
	void set_number(int);
	int get_number();
	void set_group(string, string);
	Group get_group();
	void set_subject(string, string);
	Subject get_subject();
};