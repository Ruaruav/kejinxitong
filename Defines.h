#ifndef Defines
#define Defines 


#define LL long long
#include <bits/stdc++.h>

char* id_buliong(int n)
{
	char fl[] = "00000000";
	int cnt=7;
	while(n!=0)
	{
		fl[cnt] = n%10;
		n/=10;
		cnt--;
	}
	return fl;
}
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
	//0 正常 1 挂失 2 已注销
	string nickname;
	bool sex;// 0 nan 1 nv
	Date birthday;
	int money_in_sum,money_out_sum,money_now;
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
#endif
