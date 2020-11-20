#pragma once
#include"ClassHangHoa.h"
class ClassPhuKien : public ClassHangHoa
{
private:
	string MauSac;
	string ChatLieu;
public:
	void getMa
	ClassPhuKien(); //Ham tao khong doi
	ClassPhuKien(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string MauSacIn, string ChatLieuIn); //Ham tao co doi
	~ClassPhuKien(); // Ham huy
	void Them(ofstream& fileout); // Ham ghi mot phu kien vao file
	void HienThi(); // Ham hien thi mot phu kien
	void setInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn, string MauSacIn, string ChatLieuIn);
};

