#pragma once
#include <direct.h>
#include <string>
#include <fstream>
#include "Subject.h"

using namespace std;

class DTO_Subject
{
public:
	
	///info:
	///
	//TODO: Rename function.
	void save_new_subject_date(Subject object);

	///info:
	///Output subject course_title and id into data.txt snd Subjects.txt.
	//TODO: Rename function.
	void create_new_subject(Subject object);

	///info:
	///Check if data in Subject.txt is valid.
	bool is_subject(string id);

	///info:
	///
	Subject find_date_subject(string id);
	
	///info:
	///
	vector<Subject> all_subject_date();
	
	///info:
	///
	void delete_subject(string id);
	
	///info:
	///
	void create_new_subjects_date_from_teacher(vector<string> v);
	
	///info:
	///
	bool is_subject_by_name(string name);
};