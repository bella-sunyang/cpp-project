#include<iostream>
#include"struct.h"
using namespace std;

//�����ϵ�˽ṹ��
//���ͨѶ¼�ṹ��
//main�����д���ͨѶ¼
//��װ�����ϵ�˺���
//���������ϵ�˹���


void aad_users(contact *con) {
	int a_age;
	string a_name;
	string a_agend;
	string a_phone;
	string a_adress;

	if (con->con_size == Max) {
		cout << "ͨѶ¼����" << endl;
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
		cout << "��ӳɹ�" << endl;
		system("pause");

	}

}