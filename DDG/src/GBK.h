
#ifndef _QT_GBK_H
#define _QT_GBK_H

/* GBK
	C风格字符串(GBK编码) <-> QString

	作者：邵发
	版本: 2015-12-29
	官网: http://afanihao.cn 

*/

#include <QString>
#include <QTextCodec>
#include <string>
using std::string;

class GBK
{
public:
	// QString(Unicode) -> std::string (GBK)
	static string FromUnicode(const QString& qstr)
	{
		QTextCodec* pCodec = QTextCodec::codecForName("gb2312");
		if(!pCodec) return "";	

		QByteArray arr = pCodec->fromUnicode(qstr);
		string cstr = arr.data();
		return cstr;
	}

	// std::string (GBK) -> QString(Unicode)
	static QString ToUnicode(const string& cstr)
	{
		QTextCodec* pCodec = QTextCodec::codecForName("gb2312");
		if(!pCodec) return "";

		QString qstr = pCodec->toUnicode(cstr.c_str(), cstr.length());
		return qstr;
	}

};


#endif

