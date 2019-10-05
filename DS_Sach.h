#pragma once
#include <iostream>
using namespace std;
#include "Sach.h"
class DS_Sach
{
private:
	Sach* DSsach;
	int soluongsach;
public:
	DS_Sach(int);
	//DS_Sach(const DS_Sach&);
	~DS_Sach();

	int get_Soluong();
	Sach get_Sach(int);

	void set_Soluong(int);

	void nhap_Sach(int);
	friend ostream& operator<<(ostream& out, const DS_Sach& DS);
	//DS_Sach& operator=(DS_Sach& DS);

	//Chuc nang 1
	void Tim_Ten_Sach(DS_Sach&);
	void Tim_Ma_Sach(Sach&);
	void Xoa_Sach_i(int i);
	void Doi_GiaSach_i(int i);
	
	
};

