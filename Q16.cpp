#include <iostream>
using namespace std;

void triangleLB(int n);		// ���� �Ʒ��� ������ �̵ �ﰢ���� ���
void triangleLU(int n);		// ���� ���� ������ �̵ �ﰢ���� ���
void triangleRU(int n);		// ������ ���� ������ �̵ �ﰢ���� ���
void triangleRB(int n);		// ������ �Ʒ��� ������ �̵ �ﰢ���� ���

int main()
{
	triangleLB(5);
	printf("========================================\n");
	triangleLU(5);
	printf("========================================\n");
	triangleRU(5);
	printf("========================================\n");
	triangleRB(5);

	return 0;
}

void triangleLB(int n)
{
	for (int nums = 1; nums <= n; ++nums)
	{
		for (int cur = nums; cur > 0; --cur)
		{
			printf("*");
		}
		printf("\n");
	}
}

void triangleLU(int n)
{
	for (int i = n; i > 0; --i)
	{
		for (int cur = i; cur > 0; --cur)
			printf("*");
		printf("\n");
	}
}

void triangleRU(int n)
{
	for (int i = 0; i < n; ++i)
	{

		for (int _cur = i; _cur > 0; --_cur)
			printf(" ");
		for (int _spacing = n - i; _spacing > 0; --_spacing)
			printf("*");

		printf("\n");
	}
}

void triangleRB(int n)
{
	for (int i = n - 1; i >= 0; --i)
	{
		for (int spacing = i; spacing > 0; --spacing)
			printf(" ");
		for (int cur = n - i; cur > 0; --cur)
			printf("*");
		printf("\n");
	}
}