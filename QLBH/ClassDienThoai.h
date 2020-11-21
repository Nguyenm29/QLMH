#pragma once
#include"ClassTBDienTu.h"
class ClassDienThoai: public ClassTBDienTu
{
private:
	int SoSim;
	float BoNhoTrong;
public:
	~ClassDienThoai(); // Ham huy
	ClassDienThoai(); // Ham tap khong doi
	ClassDienThoai(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn, int SoSimIn, float BoNhoTrongIn); // Ham tao co doi
	void Them(ofstream& fileout);
	void HienThi();
	void SetInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn, int SoSimIn, float BoNhoTrongIn);
};

