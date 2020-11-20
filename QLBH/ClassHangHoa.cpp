#include "ClassHangHoa.h"
ClassHangHoa::ClassHangHoa() // Ham tao khong doi
{
	this->MaHH = " ";
	this->TenHH = " ";
	this->HangSX = " ";
	this->Gia = 0;
	this->NamSX = 0;
}


ClassHangHoa::ClassHangHoa(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn) // Ham tao co doi
{
	this->MaHH = MaHHIn;
	this->TenHH = TenHHIn;
	this->HangSX = HangSXIn;
	this->Gia = GiaIn;
	this->NamSX = NamSXIn;
}
ClassHangHoa::~ClassHangHoa()// Ham huy
{
}
void ClassHangHoa::Them(ofstream& fileout) // ham ghi moi mot mat hang vao file
{
	cin.ignore();
	cout << "\n Nhap ma hang hoa: "; getline(cin, this->MaHH);
	cout << "\n Nhap ten hang hoa: "; getline(cin, this->TenHH);
	cout << "\n Nhap ten hang san xuat: "; getline(cin, this->HangSX);
	fileout << MaHH << "," << TenHH << "," << HangSX;
}

void ClassHangHoa::setInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn)
{
	this->MaHH = MaHHIn;
	this->TenHH = TenHHIn;
	this->HangSX = HangSXIn;
	this->Gia = GiaIn;
	this->NamSX = NamSXIn;
}

