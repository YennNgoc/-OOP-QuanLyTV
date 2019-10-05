#include "DS_Sach.h"


void ChucNang1(DS_Sach &DS)
{
	system("cls");
	DS_Sach find_name(0);
	DS.Tim_Ten_Sach(find_name);
	if (find_name.get_Soluong() > 0)
	{
		cout << find_name;
		Sach find_id;
		find_name.Tim_Ma_Sach(find_id);
		if (find_id.get_MaSach() != "")
		{
			cout << find_id;
			cout << "1. Xoa sach				2. Doi gia tien" << endl;
			int lenh = 0;
			do
			{
				cout << "Chon: "; cin >> lenh;
			} while (lenh != 1 && lenh != 2);
			if (lenh == 1)
			{
				DS.Xoa_Sach_i(find_id.get_STT());
			}
			else
			{
				DS.Doi_GiaSach_i(find_id.get_STT());
			}

		}
		else
			cout << "Khong tim thay sach!" << endl;
	}
	else
		cout << "Khong tim thay sach!" << endl;
	system("pause");

}