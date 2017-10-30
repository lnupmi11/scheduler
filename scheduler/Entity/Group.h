#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Group {
	string id;
	string name; //(ÏÌ²-11)
public:

	///info:
	///Constructors.
	Group();
	Group(string n, string i);
	Group(const Group& obj);

	///info:
	///Setters.
	void set_name(string);
	void set_id(string);

	///info:
	///Getters.
	string get_name();
	string get_id();
};