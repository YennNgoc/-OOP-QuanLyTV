#include "Sach.h"

Sach::Sach()
{
	this->tensach = "";
	this->masach = new char[14];
}


Sach::~Sach()
{
	tensach = "";
	if (this->masach != NULL)
		delete [] masach;
}

void Sach::set_TenSach(string tensach)
{
	this->tensach = tensach;
}

void Sach::set_MaSach(char* masach)
{
	if (this->masach == NULL)
		delete[] this->masach;
	this->masach = masach;
}

string Sach::get_TenSach()
{
	return this->tensach;
}
char* Sach::get_MaSach()
{
	return this->masach;
}
istream& operator>>(istream& in, Sach& sach)
{
	cout << "Nhap ten sach: ";
	cin.ignore();
	_flushall();
	getline(cin, sach.tensach);
	cout << "Nhap ma sach: ";
	_flushall();
	gets_s(sach.masach, 14);
	return in;
}

ostream& operator<<(ostream& out, const Sach& sach)
{
	cout<<sach.tensach<<endl;
	puts(sach.masach);
	return out;
}