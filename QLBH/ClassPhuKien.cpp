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
	ClassHangHoa::Them(fileout);
	cin.ignore();
	cout << "\n Nhap chat lieu phu kien: ";
	getline(cin, this->ChatLieu);
	cout << "\n Nhap mau sac phu kien: ";
	getline(cin, this->MauSac);
	fileout << "," << this->ChatLieu << "," << this->MauSac << endl;
	fileout.close();
}

void ClassPhuKien::setInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string MauSacIn, string ChatLieuIn)
{
	this->MaHH = MaHHIn;
	this->TenHH = TenHHIn;
	this->HangSX = HangSXIn;
	this->Gia = GiaIn;
	this->NamSX = NamSXIn;
	this->MauSac = MauSacIn;
	this->ChatLieu = ChatLieuIn;
}

void ClassPhuKien::HienThi()
{
	cout << "\n";
	cout << this->MaHH << "\t" << this->TenHH << "\t" << this->HangSX << "\t" << this->Gia << "\t" << this->NamSX << "\t" << this->ChatLieu << "\t" << this->MauSac <<endl;
}

void ClassPhuKien::setInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string MauSacIn, string ChatLieuIn)
{
	ClassHangHoa::setInfo(MaHHIn, TenHHIn, HangSXIn, GiaIn, NamSXIn);
	this->ChatLieu = ChatLieuIn;
	this->MauSac = MauSacIn;
}

