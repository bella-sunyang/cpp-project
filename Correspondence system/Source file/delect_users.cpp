#include<iostream>
#include"struct.h"
using namespace std;

void delect_users(contact* con) {
	string del_name;
	cout << "������Ҫɾ����ϵ�˵�����" << endl;
	cin >> del_name;
	int data = con->con_size;

	for (int i = 0; i < con->con_size; i++) {
		if (con->Contact_users[i].name == del_name) {
			con->Contact_users[i] = con->Contact_users[i + 1];
			con->con_size--;
			cout << "ɾ���ɹ�" << endl;
		}
	}
	if (data == con->con_size) {
		cout << "�������" << endl;
	}

	system("pause");	  
}