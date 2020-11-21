#pragma once
#include"ClassHangHoa.h"
class ClassTBDienTu: public ClassHangHoa
{
protected:
	float ManHinh;
	float Pin;
	float Camera;
	float Ram;
	string HDH; // He dieu hanh
	string Chip; // Chip 
public:
	ClassTBDienTu();
	ClassTBDienTu(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, float ManHinhIn, float PinIn, float CameraIn, float RamIn, string HDHIn, string ChipIn);
	~ClassTBDienTu();
	virtual void Them(ofstream& fileout); // ham ghi moi mot mat hang vao file
	double TinhThue();
	virtual void HienThi();
};
