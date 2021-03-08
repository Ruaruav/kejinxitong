#ifndef Hanshu
#define  Hanshu


void Find();
//查询消费记录，
//n == 1 消费记录
//n == 2 个人信息

bool Login();
//返回提示信息在函数内输出
Yonghu Regist(int n);//返回一个用户对象，需要传入分配的id

bool change();
	// 充钱
	// 消费
	//个人信息
		// {
		// 	状态
		// 	密码
		// 	昵称
		// 	当前余额
		// }
bool Delete();
// 如果为管理员，则输入要注销的id
// 如果为普通用户，则注销账号

void chouka();
	//钱有正有负
void Save_a(Yonghu x);
//储存用户的个人信息
#endif
