#pragma once
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Sach
{
private:
	string tensach;
	char* masach;
public:
	Sach();
	~Sach();
	
	void set_TenSach(string);
	void set_MaSach(char*);
	
	string get_TenSach();
	char* get_MaSach();

	friend istream& operator>>(istream& in, Sach&);
	friend ostream& operator<<(ostream& out, const Sach&);
};

