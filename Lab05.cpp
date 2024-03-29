// Lab05.cpp : Defines the entry point for the console application.
//
/**  C++ Program to Implement Max Heap*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void max_heapify(int *a, int i, int n)
{
	int j, temp;
	temp = a[i];
	j = 2 * i;
	while (j <= n)
	{
		if (j < n && a[j+1] > a[j])
			j = j + 1;
		if (temp > a[j])
			break;
		else if (temp <= a[j])
		{
			a[j / 2] = a[j];
			j = 2 * j;
		}
	}
	a[j/2] = temp;
	return;
}

void build_maxheap(int *a,int n)
{
	int i;
	for(i = n/2; i >= 1; i--)
	{
		max_heapify(a,i,n);
	}
}

int main()
{
	int num_elements, i, x = 0, in = 0, j,count=1,u=1;
	num_elements = 6;
	int a[100];              //DO NOT USE THE ARRAY POSITION a[0]!!!
	
	cout << "enter values into the heap, max of 100 (-1 to exit)\n\n" << endl;
	while ((in) != -1)
	{
		x++;
		cin >> in;
		a[x] = in;
	}
	
	build_maxheap(a,(x-1));
	cout<<"Max Heap\n";
	
	for (i = 1; i <= (x-1); i++) //this is where you change for the dash Q
	{
		if ((pow(2, u)) == count)
		{
			u++;
		}
		for (j = 1; j <= u; j++)
		{
			cout << "-";
		}
		cout<<a[i]<<endl;
		count++;
	}
}