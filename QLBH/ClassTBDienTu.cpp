#include "ClassTBDienTu.h"

ClassTBDienTu::ClassTBDienTu():ClassHangHoa()
{
	this->Camera = 0;
	this->Pin = 0;
	this->Ram = 0;
	this->ManHinh = 0;
	this->Chip = " ";
	this->HDH = " ";
}

ClassTBDienTu::ClassTBDienTu(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn) :ClassHangHoa(MaHHIn, TenHHIn, HangSXIn, GiaIn, NamSXIn)
{
	this->Camera = CameraIn;
	this->Pin = PinIn;
	this->Ram = RamIn;
	this->ManHinh = ManHinhIn;
	this->Chip = ChipIn;
	this->HDH = HDHIn;
}

ClassTBDienTu::~ClassTBDienTu()
{

}

void ClassTBDienTu::Them(ofstream& fileout) // ham ghi mot mat hang vao file
{
	cout << "\n Nhap thong tin mat hang; ";
	ClassHangHoa::Them(fileout);
	cout << "\n Nhap thong tin camera (MP): "; cin >> this->Camera;
	cout << "\n Nhap dung luong pin (Mah): "; cin >> this->Pin;
	cout << "\n Nhap kich thuoc man hinh (in): "; cin >> this->ManHinh;
	cout << "\n Nhap dung luong ram (Gb): "; cin >> Ram;
	cin.ignore();
	cout << "\n Nhap thong tin chip(CPU): "; getline(cin, this->Chip);
	cout << "\n Nhap He dieu hanh: "; getline(cin, this->HDH);
	fileout << this->MaHH << "," << this->TenHH << "," << this->HangSX << "," << this->HDH << "," << this->Chip << ",";
	fileout << this->NamSX << " " << this->Gia << " " << this->ManHinh << " " << this->Camera << " " << this->Pin << " " << this->Ram <<" ";
}

double ClassTBDienTu::TinhThue()
{
	return Gia * 0.5 + Gia * 0.1; // 0.5 la thue GTGT 0.1 la thue nhap khau
}

void ClassTBDienTu::HienThi()
{
	ClassHangHoa::HienThi();
	cout << "\n Cammera (Megapixel): " << this->Camera;
	cout << "\n Dung luong pin (Mah): " << this->Pin;
	cout << "\n Kich thuoc man hinh (In): " << this->ManHinh;
	cout << "\n Dung luong ram: (Gb): " << this->Ram;
	cout << "\n He dieu hanh: " << this->HDH;
	cout << "\n CPU: " << this->Chip;
}