#ifndef cyf
#define cyf
#include <bits/stdc++.h>
#include "Defines.h"
using namespace std;
void Save_a(Yonghu x)
{
	cout << "jer" << endl;
	cout << id_buliong_a(x.id) << endl;
	ofstream fout;
	fout.open(id_buliong_a(x.id));



	fout << x.id<< endl;
	fout << x.password<< endl;
	fout << x.zhuangtai<< endl;
	fout << x.nickname<< endl;
	fout << x.sex<< endl;
	fout << x.birthday.year << ' ' << x.birthday.month  << ' '<< x.birthday.day<< endl;
	fout << x.money_in_sum<< endl;
	fout << x.money_out_sum<< endl;
	fout << x.money_now<< endl;
	fout << x.Lv<< endl;
	fout << x.jingyan << endl;
	fout << x.daoqi.year << ' ' << x.daoqi.month  << ' '<< x.daoqi.day<< endl;
	fout.close();
}
Yonghu Regist(int n)
{
	//setlocale(LC_CTYPE, "");
	Yonghu x;
	x.id = n;
	string s;
	cout <<"nmsl\n";
	cout << "你好\n";
	printf("您将是第%d位注册用户\n",n);
	printf("请输入昵称：\n");
	cin >> x.nickname;
	printf("请输入密码:\n");
	cin >> x.password;
	printf("请重复密码：\n");
	cin >> s;
	while(s != x.password)
	{
		printf("2次密码不匹配\n");
		printf("请输入密码:\n");
		cin >> x.password;
		printf("请重复密码：\n");
		cin >> s;
	}
//	printf("请输入昵称:\n");
//	cin >> x.nickname;

	printf("请输入性别，男输入0，女输入1:\n");

	cin >> x.sex;
	printf("请输入生日:\n");

	cin >> x.birthday.year >> x.birthday.month >> x.birthday.day;
	x.Lv = 0;
	x.jingyan = 0;

	cout<<"ok!"<< endl;

	return x;

}

#endif
