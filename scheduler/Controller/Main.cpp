#include "../LessonEntity/Lesson.h"
#include "../BL/BL.h"
#include <iostream>
#include <vector>
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

int get_random_int_id()
{
	srand(time(0));
	int random = rand() % 1000;
	return random;
}

vector<Lesson> generator(vector<Group> g, vector<Subject> s)
{
	vector<Lesson> less;
	for (auto itg : g)
	{
		for (auto its : s)
		{
			less.push_back(Lesson(get_random_int_id(), itg, its));
		}
	}
	return less;
}

int main()
{
	Lesson l;
	l.set_number(1);
	l.set_group(get_random_id(), "AMI");
	l.set_subject(get_random_id(), " ");

	Start();

	cout << "Debuged good" << endl;
	system("pause");
	return 0;
}