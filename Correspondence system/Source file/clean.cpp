#include<iostream>
#include"struct.h"
using namespace std;

void clean(contact* con) {
	con->con_size = 0;
	cout << "通讯录已经清空" << endl;
	system("pause");
}