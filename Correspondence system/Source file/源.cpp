#include<iostream>
#include<string>
#include"show_menue.h"
#include"aad_users.h"
#include"Header Files/show_users.h"
#include"delect_users.h"
#include"change_users.h"
#include"clean.h"

using namespace std;

int main() {
	int select = 0;
	contact con;
	con.con_size = 0;

	while (true) {
		show_menu();
		cout << "������ʵ�ֹ��ܱ��" << endl;
		cin >> select;

		switch (select) {
		case 1:
			//�����ϵ��
			aad_users(&con);
			break;
		case 2:
			//��ʾ��ϵ��
			show_users(&con);
			break;
		case 3:
			//ɾ����ϵ��
			delect_users(&con);
			break;
		case 4:
			//�޸���ϵ��
			change_users(&con);
			break;
		case 5:
			//�����ϵ��
			clean(&con);
			break;
		default:
			//�˳�<ͨѶ¼
			cout << "���˳�ͨѶ¼" << endl;
			system("pause");
			return 0;
			break;

		}
	}

	
	system("pause");
	return 0;
}