#include "Lesson.h"

void Lesson::set_number(int n)
{
	number = n;
}
int Lesson::get_number()
{
	return number;
}
void Lesson::set_group(string id, string name)
{
	group.set_id(id);
	group.set_name(name);
}
Group Lesson::get_group()
{
	return group;
}
void Lesson::set_subject(string id, string ct)
{
	subject.set_id(id);
	subject.set_course_title(ct);
}
Subject Lesson::get_subject()
{
	return subject;
}