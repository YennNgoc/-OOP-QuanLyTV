#include <iostream>
#include <stdio.h>
#include <string>
#include "DS_Sach.h"
using namespace std;

void main()
{
	int soluong = 0;
	cout << "-->Nhap so luong sach can them: ";
	cin >> soluong;
	
	// Tao danh sach
	DS_Sach ds(soluong);
	for (int i = 0; i < soluong; i++)
	{
		ds.nhap_Sach(i);	
	}

	// Xuat danh sach
	cout<< ds;

	//Xoa con tro *Sach trong danh sach
	ds.~DS_Sach();
		
}