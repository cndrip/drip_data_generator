#include "DDG.h"
#include <random>
#include <memory>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <fstream>
#include <ctime>
#include <string>
#include "GBK.h"
#include "AfCd.h"
#include "About.h"
using namespace std;

const string ALPHSTR = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
default_random_engine e(time(NULL));

int split(const string& str, vector<string>& ret_, string sep = ",")
{
	if (str.empty())
	{
		return 0;
	}

	string tmp;
	string::size_type pos_begin = str.find_first_not_of(sep);
	string::size_type comma_pos = 0;

	while (pos_begin != string::npos)
	{
		comma_pos = str.find(sep, pos_begin);
		if (comma_pos != string::npos)
		{
			tmp = str.substr(pos_begin, comma_pos - pos_begin);
			pos_begin = comma_pos + sep.length();
		}
		else
		{
			tmp = str.substr(pos_begin);
			pos_begin = comma_pos;
		}

		if (!tmp.empty())
		{
			ret_.push_back(tmp);
			tmp.clear();
		}
	}
	return 0;
}

DDG::DDG(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//m_searchWin = new SearchWindow(this);
	//m_searchWin->setWindowFlag(Qt::Window);
	connect(ui.btnMake, SIGNAL(clicked()), this, SLOT(OnbtnMake()));
	connect(ui.btnAbout, SIGNAL(clicked()), this, SLOT(OnbtnAbout()));
}


void MakeIntData(int a, int b, int cnt,int spflag)//整数范围[a,b],数量cnt
{	
	uniform_int_distribution<int> dis(a, b);
	for (int i = 0; i < cnt - 1; i++)
	{
		switch (spflag)
		{
		case 1:
			cout << dis(e);
			break;
		case 2:
			cout << dis(e) << " ";
			break;
		case 3:
			cout << dis(e) << endl;
		default:
			break;
		}
	}
	cout << dis(e) << endl;
}
void MakeDoubleData(int a, int b, int cnt,int spflag)//整数范围[a,b],数量cnt
{
	uniform_real_distribution<double> dis(a, b);
	for (int i = 0; i < cnt - 1; i++)
	{
		switch (spflag)
		{
		case 1:
			cout << dis(e);
			break;
		case 2:
			cout << dis(e) << " ";
			break;
		case 3:
			cout << dis(e) << endl;
		default:
			break;
		}
	}
	cout << dis(e) << endl;
}

void MakeAlphData(int a, int b, int cnt, int spflag)//整数范围[a,b],数量cnt
{
//	a = 0; b = 51;
	uniform_int_distribution<int> dis(a, b);
	for (int i = 0; i < cnt - 1; i++)
	{
		switch (spflag)
		{
		case 1:
			cout << ALPHSTR[dis(e)];
			break;
		case 2:
			cout << ALPHSTR[dis(e)] << " ";
			break;
		case 3:
			cout << ALPHSTR[dis(e)] << endl;
		default:
			break;
		}
	}
	cout << ALPHSTR[dis(e)] << endl;
}


void rand3(long long a, long long b, int row, int col)//整数范围[a,b],数量cnt
{
	uniform_int_distribution<long long> dis(a, b);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col - 1; j++)
			cout << dis(e) << " ";
		cout << dis(e) << endl;
	}

}

void rand4(int a, int b, int cnt)//不重复整数范围[a,b],数量cnt 
{
	vector<int> temp;
	if (cnt > b - a + 1) return;
	for (int i = a; i <= b; ++i)temp.push_back(i);
	random_shuffle(temp.begin(), temp.end());
	for (int i = 0; i < cnt - 1; i++)
		cout << temp[i] << " ";
	cout << temp[cnt - 1] << endl;
}
void rand5(int a, int b, int cnt)//整数范围[a,b],数量cnt
{
	uniform_int_distribution<int> dis(a, b);
	for (int i = 0; i < cnt - 1; i++)
	{
		cout << (char)dis(e);
	}
	cout << endl;
}





int DDG::OnbtnMake()
{
	char csflag[5];
	string qfilename = ui.editflname->text().toStdString(); //获取文件名
	int filenumber = ui.editflnum->text().toInt();//获取文件个数
	if (filenumber == 0) filenumber = 1;	

	QButtonGroup getDataType,getSplitType;
	getDataType.addButton(ui.radioButton, 1);//整数   以后用枚举类型
	getDataType.addButton(ui.radioButton_2, 2);//实数
	getDataType.addButton(ui.radioButton_3, 3);// 字符
	getDataType.addButton(ui.radioButton_7, 4);// 字符

	getSplitType.addButton(ui.radioButton_4, 1);//将radioMode加进组
	getSplitType.addButton(ui.radioButton_5, 2);
	getSplitType.addButton(ui.radioButton_6, 3);

	int datatypeid= getDataType.checkedId();
	int splittypeid= getSplitType.checkedId();
	QString strdatanum = ui.editnumrange->text();
	QString strdatarange = ui.editdatarange->text();
	if (strdatanum == "") strdatanum = "10";
	if (strdatarange == "") strdatarange = "0,100";
	QStringList sdn = strdatanum.split(",");
	QStringList sdr = strdatarange.split(",");	

	string ss = "";
	int dn_begin,dn_end,d_num;
	if (sdn.size() > 1)
	{
		ss = sdn[0].toStdString();
		sscanf(ss.c_str(), "%d", &dn_begin);
		ss = sdn[1].toStdString();
		sscanf(ss.c_str(), "%d", &dn_end);
	}
	else
	{
		d_num = strdatanum.toInt();
	}
		

	long long d_begin, d_end;
	ss = sdr[0].toStdString();
	sscanf(ss.c_str(), "%lld", &d_begin);
	ss = sdr[1].toStdString();
	sscanf(ss.c_str(), "%lld", &d_end);
	uniform_int_distribution<int> dis(dn_begin, dn_end);
	for (int i = 1; i <= filenumber; i++)
	{
		AfCd::cd();
		string nn = itoa(i, csflag, 10);
		string ff ="data//" + qfilename + nn + ".in";
		freopen(ff.c_str(), "w", stdout);
		if (sdn.size() > 1)
		{			
			d_num = dis(e);
		}
		cout << d_num << endl;
		switch (datatypeid)
		{
		case 1:
			MakeIntData(d_begin, d_end, d_num,splittypeid);
			break;
		case 2:
			MakeDoubleData(d_begin, d_end, d_num, splittypeid);
			break;
		case 3:
			MakeAlphData(0, 51, d_num, splittypeid);
			break;
		case 4:
			MakeAlphData(0, 61, d_num, splittypeid);
			break;
		default:
			break;
		}
		
		fclose(stdout);
	}	
	
	ui.lblStatus->setText(GBK::ToUnicode("生成成功"));
	return 0;
}
int DDG::OnbtnAbout()
{
	About dlg;
	dlg.exec();
	return 0;
	
}