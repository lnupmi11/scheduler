#include "Login.h"

bool Login::check_login(string login, string password) {
	ifstream in("Users.txt");
	string cheker1, cheker2;
	if (in.is_open()) {
		while (!in.eof()) {
			getline(in, cheker1);
			getline(in, cheker2);
			if (cheker1 == login && cheker2 == password) {
				in.close();
				return true;
			}
			if (cheker1 == "") {
				in.close();
				return false;
			}
		}
	}
	in.close();
	return false;
}

void Login::save_new_user(string login) {
	ofstream out;
	out.open("Users.txt", ios_base::app);
	out << login << endl;
	out.close();
}

void Login::delete_user(string login)
{
	ifstream in("Users.txt");
	string ID;
	vector<string> all_login;
	if (in.is_open()) {
		while (!in.eof()) {
			getline(in, ID);
			if (ID == login) {
				continue;
			}
			if (ID == "") {
				break;
			}
			all_login.push_back(ID);
		}
	}
	in.close();
	ofstream out;
	out.open("Users.txt", ios_base::trunc);
	for (int i = 0; i < all_login.size(); i++) {
		out << all_login[i] << endl;
	}
	out.close();
}
