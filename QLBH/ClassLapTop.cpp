#include "ClassLapTop.h"

ClassLapTop::ClassLapTop():ClassTBDienTu()
{
	this->CardDoHoa = 0;
	this->SoKheRam = 0;
	this->SSD = 0;
}

ClassLapTop::ClassLapTop(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn, float CardDoHoa, int SoKheRamIn, float SSDIn):ClassTBDienTu(MaHHIn, TenHHIn, HangSXIn, GiaIn, NamSXIn, ManHinhIn, PinIn, CameraIn, RamIn, HDHIn, ChipIn) // Ham tao co doi
{
	this->CardDoHoa = CardDoHoa;
	this->SSD = SSDIn;
	this->SoKheRam = SoKheRamIn;
}

ClassLapTop::~ClassLapTop()
{

}

void ClassLapTop::Them(ofstream& fileout)
{
	fileout.open("LAPTOP.TXT", ios_base::app);
	ClassTBDienTu::Them(fileout);
	cout << "\n Nhap Card do hoa:  "; cin >> this->CardDoHoa;
	cout << "\n Nhap So khe ram: "; cin >> SoKheRam;
	cout << "\n Dung luong SSD (GB): "; cin >> SSD;
	fileout << this->CardDoHoa << " " << this->SoKheRam << " " << this->SSD << endl;
	fileout.close();
}

void ClassLapTop::HienThi()
{
	ClassTBDienTu::HienThi();
	cout << "\n Card do hoa: " << this->CardDoHoa;
	cout << "\n So khe ram: " << this->SoKheRam;
	cout << "\n Dung luong SSD (GB): " << this->SSD;
}

void ClassLapTop::SetInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn, float CardDoHoa, int SoKheRamIn, float SSDIn)
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
	this->CardDoHoa = CameraIn;
	this->SoKheRam = SoKheRamIn;
	this->SSD = SSDIn;
}