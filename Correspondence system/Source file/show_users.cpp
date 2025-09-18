#include<iostream>
#include"struct.h"
using namespace std;

void show_users(contact *con) {
	if (con->con_size == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < con->con_size; i++){
			cout << "name:" << (*con).Contact_users[i].name <<'\t';
			cout << "age:" << con->Contact_users[i].age << '\t';
			cout << "agend:" << con->Contact_users[i].agend << '\t';
			cout << "phone:" << con->Contact_users[i].phone << '\t';
			cout << "adress:" << con->Contact_users[i].adress << endl;
		}
	}
	system("pause");
}