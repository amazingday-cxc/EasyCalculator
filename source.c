#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#pragma warning(disable:4996)

double Plus(double tp1, double tp2);//加法函数

double Minu(double tp1, double tp2);//减法函数

double Muly(double tp1, double tp2);//乘法函数

double Divi(double tp1, double tp2);//除法函数

double Invo(double tp1, double tp2);//乘方函数

double Sqrt(double tp1, double tp2);//开方函数


int main(void)
{
	int judg = 0;
	double num1, num2, ans;
	char otr, jdg[4], jd[4] = "Yes";
	
	num1 = 0;
	num2 = 0;
	ans = 0;
	
	printf("使用须知：\n");//打印介绍文本
	printf("1.本程序计算精度为小数点后两位，不可用于高精度计算及长位数计算\n");
	printf("2.输入时数字符号之间无间隔，由于技术原因仅支持一次符号计算\n");
	printf("3.在进行乘方计算时请使用C作为运算符，第一个为被乘方数，第二个为次方数\n");
	printf("4.在进行开方计算时请使用S作为运算符，第一个和第二个数字相同\n");
	printf("\n");
	printf("是否开始使用？(Yes/No)\n");
	
	scanf("%s", jdg);//检测是否开始输入
	
	if ( strcmp(jdg, jd) == 0 ) //比较预先设置好的"yes",如果一致则继续
	{ 
		system("cls");//如果输入值为"yes"，执行清屏系统函数
		printf("欢迎使用！\n");
	}
	else
	{
		return 0;//如果输入值为"no",则不执行下一步，退出程序
	}
	do //首先执行第一步计算，后期判断是否继续，引用while
	{
		printf("请输入计算内容：\n");
		scanf("%lf%c%lf", &num1, &otr, &num2);//固定格式输入计算内容
		switch (otr) //检测输入符号，使用特定计算函数
		{
			case '+': // 判断计算函数
				ans = Plus(num1, num2); //执行计算，下同
				printf("加法结果为: %.0f", ans); //打印计算内容，下同
				break;
			case '-':
				ans = Minu(num1, num2);
				printf("减法结果为: %.0f", ans);
				break;
			case '*':
				ans = Muly(num1, num2);
				printf("乘法结果为: %.2f", ans);
				break;
			case '/':
				ans = Divi(num1, num2);
				printf("除法结果为: %.2f", ans);
				break;
			case 'C':
				ans = Invo(num1, num2);
				printf("乘方结果为: %.2f", ans);
				break;
			case 'K':
				ans = Sqrt(num1, num2);
				printf("开方结果为: %.2f", ans);
				break;
			default:
				printf("数据错误");
				break;
		}
		printf("\n是否继续计算?(Yes/No)");
		scanf("%s", jdg); //判断是否进行计算
		if ( strcmp(jdg, jd) == 0 ) //将输入值与预设字符串进行比较
		{
			judg = 1; //继续计算标志变量
			system("cls");
		}
		else
		{
			judg = 0; //终止计算标志变量
			system("cls");
		}
	}while ( judg == 1 );  //检测标志变量判断是否继续执行
	//printf("\n");
	printf("谢谢使用！\n"); //打印文本
	printf("作者QQ：2111321623\n");
	printf("按任意键退出...\n");
	getch();//实现任意值输入返回并结束程序
	return 0; 
}

double Plus(double tp1, double tp2)//加法函数
{
	double ans;
	ans = tp1 + tp2;
	return ans;
}
double Minu(double tp1, double tp2)//减法函数
{
	double ans;
	ans = tp1 - tp2;
	return ans;
}
double Muly(double tp1, double tp2)//乘法函数
{
	double ans;
	ans = tp1 * tp2;
	return ans;
}
double Divi(double tp1, double tp2)//除法函数
{
	double ans;
	ans = tp1 / tp2;
	return ans;
}
double Invo(double tp1, double tp2)//乘方函数
{
	int temp;
	double ans = 1;
	for ( temp = 0; temp < tp2; temp++) //乘方算法
	{
		ans = ans * tp1;
	}
	return ans;
}
double Sqrt(double tp1, double tp2)//开方函数
{
	double ans;
	ans = sqrt(tp1);
	return ans;
}
