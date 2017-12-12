#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Student {
	string id;
	string name; 
public:
	Student();
	Student(string n, string i);
	Student(const Student& obj);
	void set_name(string);
	string get_name();
	void set_id(string);
	string get_id();
};