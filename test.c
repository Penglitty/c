#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    printf("%d\n", func(1));
//
//    return 0;
//}

//F11 - �����
//F10 - �����


//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}



//д���뽫�������������Ӵ�С�����
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//��� - ��С
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//дһ�������ӡ1 - 100֮������3�ı���������
//
//int main()
//{
//	int i = 0;
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	//�ж�i�Ƿ�Ϊ3�ı���
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//���������������������������Լ��

//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int max = 0;
//	//�������Լ��max����m��n�Ľ�Сֵ
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ�����ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}
//
//

//շת�����

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int t = 0;
//
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
//
//	//��С������ = m*n/���Լ��;
//
//	return 0;
//}

//��ӡ1000�굽2000��֮�������

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
//		if (((y%4==0) && (y%100!=0)) || (y%400==0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//дһ�����룺��ӡ100~200֮�������
//���� - ����
//ֻ�ܱ�1������������
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//
//		if (i == j)
//		{
//			printf("%d ", i);//����
//		}
//	}
//	return 0;
//}


//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
//#include <math.h>
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//
//	//m = a*b
//	//a��b��һ��������һ�������� <= ��ƽ��m��
//	//16 = 2*8 = 4*4
//
//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//
//#include <math.h>
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//
//	//m = a*b
//	//a��b��һ��������һ�������� <= ��ƽ��m��
//	//16 = 2*8 = 4*4
//
//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//


//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�!
//
//shutdown -s -t 60
//shutdown -a
//
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//string.h
//		if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//goto ���ֻ����һ��������Χ����ת�����ܿ纯��
//
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}


//f(x) = 2*x+1;
//f(x, y) = x+y;
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//
//	return 0;
//}
//

int main()
{
	char arr[] = "hello bit";
	memset(arr, 'x', 5);
	
	printf("%s\n", arr);

	return 0;
}

