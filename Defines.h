#define LL long long
#include <bits/stdc++.h>
struct Date
{
	int year,month,day,hour,minute;
	//  0 <= hour <= 23
	// 0 <= minute <= 59
};
struct Yonghu
{
	long long id;//8位，不足补零
	string password;//
	int zhuangtai;
	//0 正常 1 挂失
	string nickname;
	bool sex;// 0 nan 1 nv
	Date birthday;
	int money;
	// void xiaofeijilu()
	// {
	// 	Find(id,1,);
	// }
	int Lv;
	//1~5
	int jingyan;
	// 100经验升1级
	Date daoqi;
};
