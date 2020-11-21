#include "ClassDienThoai.h"



ClassDienThoai::~ClassDienThoai() // Ham huy
{
}

ClassDienThoai::ClassDienThoai():ClassTBDienTu() // Ham tao khong doi
{
	this->SoSim = 0;
	this->BoNhoTrong = 0;
}

ClassDienThoai::ClassDienThoai(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn, int SoSimIn, float BoNhoTrongIn):ClassTBDienTu( MaHHIn,  TenHHIn,  HangSXIn,  GiaIn,  NamSXIn,  ManHinhIn,  PinIn,  CameraIn,  RamIn,  HDHIn,  ChipIn) // Ham tao co doi
{
	this->SoSim = SoSimIn;
	this->BoNhoTrong = BoNhoTrongIn;
}


void ClassDienThoai::Them(ofstream& fileout)
{
	fileout.open("DIENTHOAI.TXT", ios_base::app);
	ClassTBDienTu::Them(fileout);
	cout << "\n Nhap so luong sim: "; cin >> SoSim;
	cout << "\n Nhap bo nho trong: "; cin >> BoNhoTrong;
	fileout << this->SoSim << " " << BoNhoTrong << endl;
	fileout.close();
}
void ClassDienThoai::HienThi()
{
	ClassTBDienTu::HienThi();
	cout << "\n So luong sim: " << this->SoSim;
	cout << "\n Bo nho trong (Gb): " << this->BoNhoTrong << endl;
}


void ClassDienThoai::SetInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn, int SoSimIn, float BoNhoTrongIn)
{
	this->MaHH = MaHHIn;
	this->TenHH = TenHHIn;
	this->HangSX = HangSXIn;
	this->Gia = GiaIn;
	this->NamSX = NamSXIn;
	this->ManHinh = ManHinhIn;
	this->Pin = PinIn;
	this->Camera = CameraIn;
	this->Ram = RamIn;
	this->HDH = HDHIn;
	this->Chip = ChipIn;
	this->SoSim = SoSimIn;
	this->BoNhoTrong = BoNhoTrongIn;
}