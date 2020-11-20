#pragma once
#include"ClassDongHo.h"
#include"ClassHangHoa.h"
#include<vector>
#include"ClassPhuKien.h"
class ClassMenu
{
private:
	vector <ClassHangHoa*> DSHH;
	ofstream fileout; // ghifile
	ifstream filein; // docfile
public:
	ClassMenu();
	void DieuKhien(); // dieu khien chuong trinh
	~ClassMenu();
	void Them();
	void DocFileDongHo();
	void DocFilePhuKien();
};

