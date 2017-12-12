#include "..\LessonEntity\Lesson.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

string get_random_id()
{
	srand(time(0));
	int random = rand() % 1000;
	return to_string(random);
}

int main()
{
	Lesson l;
	l.set_number(21);
	l.set_group(get_random_id(), "AMI");
	l.set_subject(get_random_id(), " ");
	cout << "Debuged good" << endl;
	system("pause");
	return 0;
}