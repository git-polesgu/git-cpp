// 2.1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10];
	int* pntr_arr=arr;
	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		*(pntr_arr + i)=i;
		std::cout<<*(pntr_arr+i)<<" ";
	}

	int max;
	int max2;
	if(*pntr_arr>*(pntr_arr+1))
	{
		max=*pntr_arr;
		max2=*(pntr_arr+1);
	}
	int n;

	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		if(*(pntr_arr+i)>max) 
		{
			max2=max;
			max=*(pntr_arr+i);
		}
	}

	std::cout << "Maximum is " << max <<" and second maximum is " << max2 << std::endl;
	std::cin>>n;
	return 0;
}

