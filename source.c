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
	
	printf("使用须知：\n");
	printf("1.本程序计算精度为小数点后两位，不可用于高精度计算及长位数计算\n");
	printf("2.输入时数字符号之间无间隔，由于技术原因仅支持一次符号计算\n");
	printf("3.在进行乘方计算时请使用C作为运算符，第一个为被乘方数，第二个为次方数\n");
	printf("4.在进行开方计算时请使用S作为运算符，第一个和第二个数字相同\n");
	printf("\n");
	printf("是否开始使用？(Yes/No)\n");
	
	scanf("%s", jdg);
	
	if ( strcmp(jdg, jd) == 0 )
	{ 
		system("cls");
		//printf("\n");
		printf("欢迎使用！\n");
	}
	else
	{
		return 0;
	}
	do
	{
		printf("请输入计算内容：\n");
		scanf("%lf%c%lf", &num1, &otr, &num2);
		switch (otr)
		{
			case '+':
				ans = Plus(num1, num2);
				printf("加法结果为: %.0f", ans);
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
		scanf("%s", jdg);
		if ( strcmp(jdg, jd) == 0 )
		{
			judg = 1;
			system("cls");
		}
		else
		{
			judg = 0;
			system("cls");
		}
	}while ( judg == 1 );
	//printf("\n");
	printf("谢谢使用！\n");
	printf("作者QQ：2111321623\n");
	printf("按任意键退出...\n");
	getch();
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
	for ( temp = 0; temp < tp2; temp++)
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