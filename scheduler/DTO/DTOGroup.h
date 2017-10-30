#pragma once
#include "Group.h"
#include <direct.h>
#include <fstream>
#include <string>

using namespace std;

class DTO_Group
{
public:

	///info:
	///
	void save_new_group_date(Group obj);

	//info:
	//Create new group.
	void create_new_group(Group obj);
	
	///info:
	///Check if group.txt is valid.
	bool is_group(string id);
	
	///info:
	///Get id and find group with the same id.
	//TODO: Dana: Can we rename it ? ("find_group_by_id")
	Group find_date_group(string id);
	
	///info:
	///
	vector<Group> all_group_date();
	
	///info:
	///Get id and delete group with the same id.
	void delete_group(string id);
};