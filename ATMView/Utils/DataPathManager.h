#pragma once

#include <QString>
#include <string>
using std::string;

class DataPathManager
{
public:	
	/*��ȡ�û�Ŀ¼*/
	static string getUserDir();

	/*��ȡ�豸�������ļ�·��*/
	static string getDevicePath();

	/*��ȡ��־�ļ�·��*/
    static string getLogDirPath();

	/*��ȡͼƬĿ¼·��*/
	static string getImagesDirPath();

	/*��ȡpdf�ļ�·��*/
    static string getPdfDirPath();

	/*��ȡAthenaEye·��*/
	static string getAEyeDir();

	/*��ȡDump·��*/
	static string getDumpDirPath();
};
