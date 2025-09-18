#include<iostream>
#include"struct.h"
using namespace std;

//设计联系人结构体
//设计通讯录结构体
//main函数中创建通讯录
//封装添加联系人函数
//测试添加联系人功能


void aad_users(contact *con) {
	int a_age;
	string a_name;
	string a_agend;
	string a_phone;
	string a_adress;

	if (con->con_size == Max) {
		cout << "通讯录已满" << endl;
	}
	else {
		cout << "put in age :" << endl;
		cin >> a_age;
		con->Contact_users[con->con_size].age = a_age;

		cout << "put in name" << endl;
		cin >> a_name;
		con->Contact_users[con->con_size].name = a_name;

		cout << "put in agend" << endl;
		cin >> a_agend;
		con->Contact_users[con->con_size].agend = a_agend;

		cout << "put in phone" << endl;
		cin >> a_phone;
		con->Contact_users[con->con_size].phone = a_phone;

		cout << "put in address" << endl;
		cin >> a_adress;
		con->Contact_users[con->con_size].adress = a_adress;

		con->con_size += 1;
		cout << "添加成功" << endl;
		system("pause");

	}

}