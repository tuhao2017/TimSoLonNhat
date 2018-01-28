// TimSoLonNhat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*Tim So Lon Nhat*/

int n; 

int a[];

int TimSoLonNhat(int n, int a[]) {

	int max = a[0];

	for (int i = 0; i < n; i++) {

		if (a[i] > a[i + 1]) {

			max = a[i];
		}
	}

	return max;
}

/*Tim so Nho Nhat*/

int TimSoNhoNhat(int n, int a[]) {

	int min = 0; 

	min = a[0];

	for (int i = 0; i < n; i++) {
		
		if (a[i] < a[i + 1]) {

			min = a[i];
		}
	}

	return min; 

}

void NhapMang() {
	int n = 0;

	int a[20];

	printf("Nhap do lon mang, so n : \n");

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {

		printf("Phan Tu thu i");

		scanf_s("%d", &a[i]);
	}
}

void Xuat() {

	int SoLon = TimSoLonNhat(n, a);

	printf("So Lon Nhat La : %d \n", SoLon);

	int SoNho = TimSoNhoNhat(n, a);

	printf("So Nho Nhat La : %d \n", SoNho);
}
int main()
{
	NhapMang();

	Xuat();
	
    return 0;
}

