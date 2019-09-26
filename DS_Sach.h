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
	~DS_Sach();

	void nhap_Sach(int);
	friend ostream& operator<<(ostream& out, const DS_Sach& DS);
};

