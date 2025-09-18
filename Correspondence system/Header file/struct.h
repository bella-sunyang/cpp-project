#pragma once
#include<iostream>
#define Max 1000
using namespace std;

struct users {
	string name;
	int age;
	string agend;
	string phone;
	string adress;
};

struct contact {
	users Contact_users[Max];
	int con_size;
};


