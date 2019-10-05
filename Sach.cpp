#include "Sach.h"

Sach::Sach()
{
	this->tensach = "";
	this->masach = "";
}
Sach::Sach(const Sach& a)
{
	this->tensach = a.tensach;
	this->masach = a.masach;
	this->Gia = a.Gia;
	this->STT = a.STT;
}
Sach::~Sach()
{
	tensach = "";
	masach = "";
	Gia = 0;
}

							//setter
void Sach::set_TenSach(string tensach)
{
	this->tensach = tensach;
}

void Sach::set_MaSach(string masach)
{
	this->masach = masach;
}
void Sach::set_Gia(int gia)
{
	this->Gia = gia;
}
void Sach::set_STT(int stt)
{
	this->STT = stt;
}
							//getter
string Sach::get_TenSach()
{
	return this->tensach;
}
string Sach::get_MaSach()
{
	return this->masach;
}
int Sach::get_Gia()
{
	return this->Gia;
}
int Sach::get_STT()
{
	return this->STT;
}


							//operator
Sach& Sach::operator=(const Sach& sach)
{
	this->tensach = sach.tensach;
	this->masach = sach.masach;
	this->Gia = sach.Gia;
	this->STT = sach.STT;
	return *this;
}

istream& operator>>(istream& in, Sach& sach)
{
	cout << "Nhap ten sach: ";
	cin.ignore();
	//_flushall();
	getline(cin, sach.tensach);
	cout << "Nhap ma sach: ";
	//_flushall();
	getline(cin, sach.masach);
	cout << "Nhap gia tien: ";
	cin >> sach.Gia;
	return in;
}

ostream& operator<<(ostream& out, const Sach& sach)
{
	if (sach.masach != "" && sach.tensach != "")
	{
		cout << sach.tensach << endl;
		cout << sach.masach << endl;
		cout << sach.Gia << endl;
		//cout << sach.STT << endl;
		cout << "-----------------------------------------------" << endl;
	}
	return out;
}

void Sach::Doi_GiaTien()
{
	int GiaMoi = 0;
	cout << "Nhap gia tien moi: ";
	cin >> GiaMoi;
	this->Gia = GiaMoi;
}