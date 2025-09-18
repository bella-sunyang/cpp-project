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
		cout << "请输入实现功能编号" << endl;
		cin >> select;

		switch (select) {
		case 1:
			//添加联系人
			aad_users(&con);
			break;
		case 2:
			//显示联系人
			show_users(&con);
			break;
		case 3:
			//删除联系人
			delect_users(&con);
			break;
		case 4:
			//修改联系人
			change_users(&con);
			break;
		case 5:
			//清空联系人
			clean(&con);
			break;
		default:
			//退出<通讯录
			cout << "已退出通讯录" << endl;
			system("pause");
			return 0;
			break;

		}
	}

	
	system("pause");
	return 0;
}