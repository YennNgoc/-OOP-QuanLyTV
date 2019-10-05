#include "DS_Sach.h"

DS_Sach::DS_Sach(int soluong)
{
	this->soluongsach = soluong;
	DSsach = new Sach[soluong];
}

/*DS_Sach::DS_Sach(const DS_Sach& ds)
{
	this->soluongsach = ds.soluongsach;
	for (int i = 0; i < soluongsach; i++)
	{
		DSsach[i] = ds.DSsach[i];
	}
}*/


DS_Sach::~DS_Sach()
{
	soluongsach = 0;
	if (DSsach != NULL)
		delete[] DSsach;
	

}

Sach DS_Sach::get_Sach(int i)
{
	return (this->DSsach[i]);
}
int DS_Sach::get_Soluong()
{
	return this->soluongsach;
}

void DS_Sach::set_Soluong(int n)
{
	DSsach = new Sach[n];
	this->soluongsach = n;
}

void DS_Sach::nhap_Sach(int i)
{
	cin >> DSsach[i];
	DSsach[i].set_STT(i);
}

ostream& operator<<(ostream& out, const DS_Sach& DS)
{
	system("cls");
	
	cout << ("--------------->DANH SACH<-----------------\n");
	for (int i = 0; i < DS.soluongsach; i++)
	{
		
		{
			cout << DS.DSsach[i];
		}
		
	}
	return out;
}

//Chuc nang 1
void DS_Sach::Tim_Ten_Sach(DS_Sach& ds)
{
	string temp;
	cout << "---------->Nhap ten sach can tim: ";
	cin.ignore();
	//_flushall();
	getline(cin, temp);
	int count = 0;
	for (int i = 0; i < this->soluongsach; i++)
	{
		if (this->DSsach[i].get_TenSach().find(temp) != -1)
			count++;
	}
	
	ds.set_Soluong(count);
	int x = 0;
	for (int i = 0; i < this->soluongsach; i++)
	{
		if (this->DSsach[i].get_TenSach().find(temp) != -1)
		{
			ds.DSsach[x] = DSsach[i];
			x++;
		}
	}
}

void DS_Sach::Tim_Ma_Sach(Sach& sach)
{
	string temp;
	cout << "---------->Nhap ma sach can tim:";
	//cin.ignore();
	//_flushall();
	getline(cin, temp);
	for (int i = 0; i < soluongsach; i++)
	{
		
		if (this->DSsach[i].get_MaSach() == temp)
		{
			sach = this->DSsach[i];
			break;
		}
	}
}
void DS_Sach::Xoa_Sach_i(int i)
{
	this->DSsach[i].~Sach();
}
void DS_Sach::Doi_GiaSach_i(int i)
{
	this->DSsach[i].Doi_GiaTien();
}
