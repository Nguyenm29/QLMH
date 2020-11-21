#pragma once
#include"ClassHangHoa.h"
class ClassDongHo : public ClassHangHoa
{
private:
	string ChatLieuDayDeo;
	string MatDongHo;
	float ChieuDaiDay;
public:
	ClassDongHo(); 
	ClassDongHo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string ChatLieuDayDeoIn, string MatDongHoIn, float ChieuDaiDayIn);
	~ClassDongHo();
	void Them(ofstream& fileout);
	void SetInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string ChatLieuDayDeoIn, string MatDongHoIn, float ChieuDaiDayIn);
	void HienThi();
	double TinhThue();
};

