#include "ClassPhuKien.h"

ClassPhuKien::ClassPhuKien():ClassHangHoa() // Ham tao khong doi
{
	this->MauSac = " ";
	this->ChatLieu = " ";
}

ClassPhuKien::ClassPhuKien(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string MauSacIn, string ChatLieuIn):ClassHangHoa(TenHHIn, TenHHIn, HangSXIn, GiaIn, NamSXIn)//Ham tao co doi
{
	this->ChatLieu = ChatLieuIn;
	this->MauSac = MauSacIn;
}

ClassPhuKien::~ClassPhuKien()
{}

void ClassPhuKien::Them(ofstream& fileout)
{
	fileout.open("PHUKIEN.TXT", ios_base::app);
	
	if (fileout.fail() == true)
	{
		cout << "\n FILE KHONG TON TAI !!!!!!!!";
	}
	cout << "\n Nhap thong tin phu kien";
	ClassHangHoa::Them(fileout);
	cin.ignore();
	cout << "\n Nhap chat lieu phu kien: ";
	getline(cin, this->ChatLieu);
	cout << "\n Nhap mau sac phu kien: ";
	getline(cin, this->MauSac);
	fileout << MaHH << "," << TenHH << "," << HangSX << "," << this->ChatLieu << "," << this->MauSac << "," << NamSX << " " << Gia << endl;
	fileout.close();
}

void ClassPhuKien::HienThi()
{
	ClassHangHoa::HienThi();
	cout << "\n Chat lieu: " << this->ChatLieu;
	cout << "\n Mau sac: " << this->MauSac << endl;
}

void ClassPhuKien::SetInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string MauSacIn, string ChatLieuIn)
{
	this->MaHH = MaHHIn;
	this->TenHH = TenHHIn;
	this->HangSX = HangSXIn;
	this->Gia = GiaIn;
	this->NamSX = NamSXIn;
	this->ChatLieu = ChatLieuIn;
	this->MauSac = MauSacIn;
}

double ClassPhuKien::TinhThue()
{
	return Gia * 0.05;
}