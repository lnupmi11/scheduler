#include "BL.h"

bool makeChanges;

bool start_login() {
	Login object;
	string login, password;
	cin >> login;
	cin >> password;
	if (object.check_login(login, password)) {
		if (login != "admin") {
			makeChanges = false;
		}
		else
		{
			makeChanges = true;
		}
		return true;
	}
	else
	{
		return false;
	}
}

void Start() {
	cout << "Enter your login and password" << endl;
	int count_try = 0;
	while (!start_login()) {
		cout << "Error. Please try again. Click the button to continue" << endl;
		count_try++;
		_getch();
		system("cls");
		if (count_try == 5) {
			cout << "Limit attempts exhausted. Please try again later";
			return;
		}
	}
	while (true)
	{
		system("cls");
		cout << "Available menu items :" << endl;
		cout << "1. Teacher" << endl << "2. Groups" << endl << "3. Rooms" << endl << "4. Subject" << endl << "5. Student" << endl << "6. Timetable" << endl << "7. Exit" << endl;
		string i;
		cin >> i;
		if (!cin.fail())
		{
			/*switch (stoi(i))
			{
			case 1: teacher_menu(); break;
			case 2: group_menu(); break;
			case 3: room_menu(); break;
			case 4: subject_menu(); break;
			case 5: student_menu(); break;
			case 6: timetable_menu(); break;
			case 7: return;
			default:
				break;
			}*/
		}
		else
		{
			cout << "Input date is incorrect. Try again" << endl;
		}
	}
}