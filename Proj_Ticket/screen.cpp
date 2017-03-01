#include "Ticket.h"
#include "Ticket1.h"
#include <iostream>

using namespace std;

void User::Start_screen()			//开始界面
{
	Flight f;
	init_file();					//初始化
	f.init_fnf();
	system("cls");
	cout<<"-----------------------------------------------"<<endl;
	cout<<"                                               "<<endl;
	cout<<"                                               "<<endl;
	cout<<"                                               "<<endl;
	cout<<"                                               "<<endl;
	cout<<"        ^-^欢迎使用机票管理系统^-^             "<<endl;
	cout<<"                                               "<<endl;
	cout<<"                           制作人:             "<<endl;
	cout<<"                                  张亚超       "<<endl;
	cout<<"                                  软件132003班 "<<endl;
	cout<<"                                  201320020332 "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	getchar();
	home();
}

void User::End_screen()				//结束界面
{
	system("cls");
	cout<<"-----------------------------------------------"<<endl;
	cout<<"                                               "<<endl;
	cout<<"                                               "<<endl;
	cout<<"                                               "<<endl;
	cout<<"                                               "<<endl;
	cout<<"        ^-^谢谢使用机票管理系统^-^             "<<endl;
	cout<<"                                               "<<endl;
	cout<<"                           制作人:             "<<endl;
	cout<<"                                  张亚超       "<<endl;
	cout<<"                                  软件132003班 "<<endl;
	cout<<"                                  201320020332 "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	Sleep(3000);
	exit(0);
}

void User::print_item(int k)				//打印操作标题
{
	if(k==1)
	{
		cout<<"#============================================#"<<endl;
		cout<<"#            ~欢迎使用机票管理系统~          #"<<endl;
		cout<<"#                1>登录系统                  #"<<endl;
		cout<<"#                2>新用户注册                #"<<endl;
		cout<<"#                0>退出                      #"<<endl;
		cout<<"#============================================#"<<endl;
	}
	else if(k==2)
	{
		cout<<"#============================================#"<<endl;
		cout<<"#               1>管理员登陆                 #"<<endl;
		cout<<"#               2>用户登陆                   #"<<endl;
		cout<<"#               0>返回主界面                 #"<<endl;
		cout<<"#============================================#"<<endl;
	}
	else if(k==3)
	{
		cout<<"#=======================================#"<<endl;
		cout<<"#            首次使用该系统!            #"<<endl;
		cout<<"# 管理员账户为:Manager,密码为:359099631 #"<<endl;
		cout<<"#=======================================#"<<endl;

	}
	else if(k==4)
	{
		cout<<"#============================================#"<<endl;
		cout<<"#                 管理员登录                 #"<<endl;
		cout<<"#============================================#"<<endl;
	}
	else if(k==5)
	{
		cout<<"#=======================================#"<<endl;
		cout<<"#            首次使用该系统!            #"<<endl;
		cout<<"#	    请先注册,再登录该系统!         #"<<endl;
		cout<<"#=======================================#"<<endl;
	}
	else if(k==6)
	{
		cout<<"#============================================#"<<endl;
		cout<<"#                 用户登录                   #"<<endl;
		cout<<"#============================================#"<<endl;
	}
	else if(k==7)
	{
		cout<<"#================================================#"<<endl;
		cout<<"#                   用户信息注册                 #"<<endl;
		cout<<"#================================================#"<<endl;
	}
	else if(k==8)
	{
		cout<<"#============================================#"<<endl;
		cout<<"#            欢迎进入机票管理系统            #"<<endl;
		cout<<"#============================================#"<<endl;
		cout<<"#             1>添加航班信息                 #"<<endl;
		cout<<"#             2>浏览航班信息                 #"<<endl;
		cout<<"#             3>查询航班信息                 #"<<endl;
		cout<<"#             4>航班按票价降序显示           #"<<endl;
		cout<<"#             5>订票                         #"<<endl;
		cout<<"#             0>退出                         #"<<endl;
		cout<<"#============================================#"<<endl;		
	}
	else if(k==9)
	{
		cout<<"#============================================#"<<endl;
		cout<<"#            欢迎进入机票管理系统            #"<<endl;
		cout<<"#============================================#"<<endl;
		cout<<"#             1>浏览航班信息                 #"<<endl;
		cout<<"#             2>查询航班信息                 #"<<endl;
		cout<<"#             3>航班按票价降序显示           #"<<endl;
		cout<<"#             4>订票                         #"<<endl;
		cout<<"#             0>退出                         #"<<endl;
		cout<<"#============================================#"<<endl;
	}
	else if(k==10)
	{
		cout<<"#================================================#"<<endl;
		cout<<"#                  航班信息添加                  #"<<endl;
		cout<<"#================================================#"<<endl;
	}
	else if(k==11)
	{
		cout<<"#===========================================================================#"<<endl;
		cout<<"#                                全部航班信息                               #"<<endl;
		cout<<"#===========================================================================#"<<endl;
	}
	else if(k==12)
	{
		cout<<"#===========================================================================#"<<endl;
		cout<<"#                                航班信息查找                               #"<<endl;
		cout<<"#===========================================================================#"<<endl;
	}
	else if(k==13)
	{
		cout<<"#===========================================================================#"<<endl;
		cout<<"#                              航班按票价降序显示                           #"<<endl;
		cout<<"#===========================================================================#"<<endl;
	}
	else if(k==14)
	{
		cout<<"#===========================================================================#"<<endl;
		cout<<"#                                订票专区                                   #"<<endl;
		cout<<"#===========================================================================#"<<endl;
	}
}
