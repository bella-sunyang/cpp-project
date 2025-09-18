#include<iostream>
#include"struct.h"
using namespace std;

void change_users(contact* con) {
	string change_name;
	cout << "请输入要修改联系人的名字" << endl;
	cin >> change_name;
	
	int flag = 0;

	for (int i = 0; i < con->con_size; i++) {
		if (con->Contact_users[i].name == change_name) {
			int change_age;
			string change_agend;
			string change_phone;
			string change_adress;
			cout << "put in age :" << endl;
			cin >> change_age;
			con->Contact_users[i].age = change_age;

			cout << "put in name" << endl;
			cin >> change_name;
			con->Contact_users[i].name = change_name;

			cout << "put in agend" << endl;
			cin >> change_agend;
			con->Contact_users[i].agend = change_agend;

			cout << "put in phone" << endl;
			cin >> change_phone;
			con->Contact_users[i].phone = change_phone;

			cout << "put in address" << endl;
			cin >> change_adress;
			con->Contact_users[i].adress = change_adress;
			
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "查出此人" << endl;
	}
	system("pause");
}