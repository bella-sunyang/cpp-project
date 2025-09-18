#include<iostream>
#include"struct.h"
using namespace std;

void delect_users(contact* con) {
	string del_name;
	cout << "请输入要删除联系人的名字" << endl;
	cin >> del_name;
	int data = con->con_size;

	for (int i = 0; i < con->con_size; i++) {
		if (con->Contact_users[i].name == del_name) {
			con->Contact_users[i] = con->Contact_users[i + 1];
			con->con_size--;
			cout << "删除成功" << endl;
		}
	}
	if (data == con->con_size) {
		cout << "查出此人" << endl;
	}

	system("pause");	  
}