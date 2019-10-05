#pragma once
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Sach
{
private:
	string tensach;
	string masach;
	int Gia;
	int STT;
public:
	Sach();
	Sach(const Sach&);
	~Sach();
	
	void set_TenSach(string);
	void set_MaSach(string);
	void set_Gia(int);
	void set_STT(int);
	
	string get_TenSach();
	string get_MaSach();
	int get_Gia();
	int get_STT();

	Sach& operator=(const Sach&);
	friend istream& operator>>(istream& in, Sach&);
	friend ostream& operator<<(ostream& out, const Sach&);

	void Doi_GiaTien();
};

