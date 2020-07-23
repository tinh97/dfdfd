#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

void Init(int a[], int &n)
{
	cout << "Nhap n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a[i];
	}
}
void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int key = left;
	int pivot = arr[key];
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

void Show(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int a[100];
	int  n;
	Init(a, n);
	cout << "\nMang chua sap xep " << endl;
	Show(a, n);
	quickSort(a, 0, n - 1);
	cout << "\nMang da sap xep " << endl;
	Show(a, n);
	system("pause");
	return 0;
}