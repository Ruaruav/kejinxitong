#ifndef cyf
#define cyf 
#include <bits/stdc++.h>
#include "Defines.h"

void Save_a(Yonghu x)
{

	FILE  *fp = freopen(id_buliong(x).a,"w",stdout);
	cout << x.id<< endl;
	cout << x.password<< endl;
	cout << x.zhuangtai<< endl;
	cout << x.nickname<< endl;
	cout << x.sex<< endl;
	cout << x.birthday.year << ' ' << x.birthday.month  << ' '<< x.birthday.day<< endl;
	cout << x.money_in_sum<< endl;
	cout << x.money_out_sum<< endl;
	cout << x.money_now<< endl;
	cout << x.Lv<< endl;
	cout << x.jingyan << endl;
	cout << x.daoqi.year << ' ' << x.daoqi.month  << ' '<< x.daoqi.day<< endl;
	
	fclose(fp);

}
Yonghu Regist(int n)
{
	Yonghu x;
	string s;
	printf("您将是第%d位注册用户",n);
	printf("请输入用户名\n");
	cin >> x.name;
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
	printf("请输入昵称:\n");
	cin >> x.nickname;

	printf("请输入性别，男输入0，女输入1:\n");

	cin >> x.sex;
	printf("请输入生日:\n");

	cin >> x.birthday.year >> x.birthday.month >> x.birthday.day;
	x.Lv = 0;
	x.jingyan = 0;


	Save(x);
	
	

}

#endif
