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
public: /// upate 21/11 da update
	ClassHangHoa(); // Ham tao khong doi
	ClassHangHoa(string MaHHIn, string TenHHIn, string HangSXIn, double GiaIn, int NamSXIn); // Ham tao co doi
	~ClassHangHoa(); // Ham huy
	virtual void Them(ofstream& fileout); // ham ghi moi mot mat hang vao file
	virtual void HienThi(); // Phuong thua thuan ao Hien thi thong tin mat hang ra man hinh
	int GetNamSX();
	string GetMaHH();
	virtual double TinhThue() = 0;
};

