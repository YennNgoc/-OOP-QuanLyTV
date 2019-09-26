#include "DS_Sach.h"

DS_Sach::DS_Sach(int soluong)
{
	this->soluongsach = soluong;
	DSsach = new Sach[soluong];
}


DS_Sach::~DS_Sach()
{
	soluongsach = 0;
	if (DSsach != NULL)
		delete[] DSsach;

}

void DS_Sach::nhap_Sach(int i)
{
	cin >> DSsach[i];
}
ostream& operator<<(ostream& out, const DS_Sach& DS)
{
	system("cls");
	cout << ("--------------->DANH SACH<-----------------\n");
	for (int i = 0; i < DS.soluongsach; i++)
	{
		cout << DS.DSsach[i];
		cout << "------------------------------------" << endl;
		
	}
	return out;
}