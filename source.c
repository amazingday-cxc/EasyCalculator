#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#pragma warning(disable:4996)

double Plus(double tp1, double tp2);//�ӷ�����

double Minu(double tp1, double tp2);//��������

double Muly(double tp1, double tp2);//�˷�����

double Divi(double tp1, double tp2);//��������

double Invo(double tp1, double tp2);//�˷�����

double Sqrt(double tp1, double tp2);//��������


int main(void)
{
	int judg = 0;
	double num1, num2, ans;
	char otr, jdg[4], jd[4] = "Yes";
	
	num1 = 0;
	num2 = 0;
	ans = 0;
	
	printf("ʹ����֪��\n");
	printf("1.��������㾫��ΪС�������λ���������ڸ߾��ȼ��㼰��λ������\n");
	printf("2.����ʱ���ַ���֮���޼�������ڼ���ԭ���֧��һ�η��ż���\n");
	printf("3.�ڽ��г˷�����ʱ��ʹ��C��Ϊ���������һ��Ϊ���˷������ڶ���Ϊ�η���\n");
	printf("4.�ڽ��п�������ʱ��ʹ��S��Ϊ���������һ���͵ڶ���������ͬ\n");
	printf("\n");
	printf("�Ƿ�ʼʹ�ã�(Yes/No)\n");
	
	scanf("%s", jdg);
	
	if ( strcmp(jdg, jd) == 0 )
	{ 
		system("cls");
		//printf("\n");
		printf("��ӭʹ�ã�\n");
	}
	else
	{
		return 0;
	}
	do
	{
		printf("������������ݣ�\n");
		scanf("%lf%c%lf", &num1, &otr, &num2);
		switch (otr)
		{
			case '+':
				ans = Plus(num1, num2);
				printf("�ӷ����Ϊ: %.0f", ans);
				break;
			case '-':
				ans = Minu(num1, num2);
				printf("�������Ϊ: %.0f", ans);
				break;
			case '*':
				ans = Muly(num1, num2);
				printf("�˷����Ϊ: %.2f", ans);
				break;
			case '/':
				ans = Divi(num1, num2);
				printf("�������Ϊ: %.2f", ans);
				break;
			case 'C':
				ans = Invo(num1, num2);
				printf("�˷����Ϊ: %.2f", ans);
				break;
			case 'K':
				ans = Sqrt(num1, num2);
				printf("�������Ϊ: %.2f", ans);
				break;
			default:
				printf("���ݴ���");
				break;
		}
		printf("\n�Ƿ��������?(Yes/No)");
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
	printf("ллʹ�ã�\n");
	printf("����QQ��2111321623\n");
	printf("��������˳�...\n");
	getch();
	return 0;
}

double Plus(double tp1, double tp2)//�ӷ�����
{
	double ans;
	ans = tp1 + tp2;
	return ans;
}
double Minu(double tp1, double tp2)//��������
{
	double ans;
	ans = tp1 - tp2;
	return ans;
}
double Muly(double tp1, double tp2)//�˷�����
{
	double ans;
	ans = tp1 * tp2;
	return ans;
}
double Divi(double tp1, double tp2)//��������
{
	double ans;
	ans = tp1 / tp2;
	return ans;
}
double Invo(double tp1, double tp2)//�˷�����
{
	int temp;
	double ans = 1;
	for ( temp = 0; temp < tp2; temp++)
	{
		ans = ans * tp1;
	}
	return ans;
}
double Sqrt(double tp1, double tp2)//��������
{
	double ans;
	ans = sqrt(tp1);
	return ans;
}