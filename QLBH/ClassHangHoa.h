#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class ClassHangHoa
{
protected:
	string MaHH;
	string TenHH;
	string HangSX;
	double Gia;
	int NamSX;
public:
	ClassHangHoa(); // Ham tao khong doi
	ClassHangHoa(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn); // Ham tao co doi
	~ClassHangHoa(); // Ham huy
	virtual void getMaHH() = 0;
	virtual void Them(ofstream& fileout); // ham ghi moi mot mat hang vao file
	virtual void HienThi() = 0;
	virtual void setInfo(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn);
};

