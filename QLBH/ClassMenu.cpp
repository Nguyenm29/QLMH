#include "ClassMenu.h"
ClassMenu::ClassMenu()
{
}

ClassMenu::~ClassMenu()
{}

void ClassMenu::Them()
{
	ClassDongHo a;
	a.Them(this->fileout);
}

void ClassMenu::DocFilePhuKien()
{
	string MaHHIn;
	string TenHHIn;
	string HangSXIn;
	double GiaIn;
	int NamSXIn;
	string ChatLieuIn;
	string MauSacIn;
	filein.open("PHUKIEN.TXT", ios_base::in);
	if (filein.fail() == true)
	{
		cout << "\n FILE KHONG TON TAI !!!";
	}
	while (!filein.eof())
	{
		getline(filein, MaHHIn, ',');
		getline(filein, TenHHIn, ',');
		getline(filein, HangSXIn, ',');
		getline(filein, ChatLieuIn, ',');
		getline(filein, MauSacIn, ',');
		filein >> NamSXIn;
		filein >> GiaIn;
		ClassPhuKien* PhuKien = new ClassPhuKien();
		PhuKien->setInfo(MaHHIn, TenHHIn, HangSXIn, GiaIn, NamSXIn, ChatLieuIn, ChatLieuIn);
		DSHH.push_back(PhuKien);
		/*cout << MaHHIn << "\t" << TenHHIn << "\t" << HangSXIn << "\t" << ChatLieu << "\t" << MatDH << "\t" << NamSX <<"\t" << Gia << "\t" << CD << endl;*/
	}
	filein.close();
	for (int i = 0; i < DSHH.size(); ++i)
	{
		DSHH[i]->HienThi();
	}
}


void ClassMenu::DocFileDongHo()
{
	string MaHHIn;
	string TenHHIn;
	string HangSXIn;
	double Gia;
	int NamSX;
	string ChatLieu;
	string MatDH;
	float CD;
	string temp;
	filein.open("DONGHO.TXT", ios_base::in);
	if (filein.fail() == true)
	{
		cout << "\n FILE KHONG TON TAI !!!";
	}
	while (!filein.eof())
	{
		getline(filein, MaHHIn, ',');
		getline(filein, TenHHIn, ',');
		getline(filein, HangSXIn, ',');
		getline(filein, ChatLieu, ',');
		getline(filein, MatDH, ',');
		filein >> NamSX;
		filein >> Gia;
		filein >> CD;
		ClassDongHo* DongHo = new ClassDongHo();
		DongHo->SetInfo(MaHHIn, TenHHIn, HangSXIn, Gia, NamSX, ChatLieu, MatDH, CD);
		DSHH.push_back(DongHo);
		/*cout << MaHHIn << "\t" << TenHHIn << "\t" << HangSXIn << "\t" << ChatLieu << "\t" << MatDH << "\t" << NamSX <<"\t" << Gia << "\t" << CD << endl;*/
	}
		filein.close();
	for (int i = 0; i < DSHH.size(); ++i)
	{
		DSHH[i]->HienThi();
	}
}

void ClassMenu::DieuKhien()
{
	while (true)
	{
		int LC;
		system("cls");
		cout << "\n\t\t=======QUAN LY MAT HANG===========";
		cout << "\n\t\t 1. Quan ly dong ho.";
		cout << "\n\t\t 2. An 0 de thoat. ";
		cout << "\n\t\t Nhap lua chon. ";
		cin >> LC;
		if (LC == 1)
		{
			while (true)
			{
				int LCDH;
				system("cls");
				cout << "\t\t\n ======QUAN LY DONG HO=========";
				cout << "\n\t\t 1. Them moi mot mat hang. ";
				cout << "\n\t\t 2. Hien thi danh sach mat hang. ";
				cout << "\n\t\t 3. Tim kiem theo ma mat hang. ";
				cout << "\n\t\t 0. Thoat. ";
				cout << "\n\t\t Nhap lua chon: "; cin >> LCDH;
				if (LCDH == 1)
				{
					ClassHangHoa* DongHo = new ClassDongHo();
					DongHo->Them(fileout);
				}
				else if (LCDH == 2)
				{
					this->DocFileDongHo();
					system("pause");
				}
				/*
				else if (LCDH == 3)
				{
					string MaHHTimKiem;
					cout << "\n Nhap ma hang hoa can tim: "; getline(cin, MaHHTimKiem);
					for (int i = 0; i < DSHH.size(); ++i)
					{
						if (DSHH[i]->getMaHH() = MaHHTimKiem);

					}
				}*/
				else if (LCDH == 0) break;
			}
		}
		else if (LC == 0) break;
	}

}
