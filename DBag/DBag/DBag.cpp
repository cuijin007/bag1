// DBag.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<algorithm>
#include <iostream>
#include<cmath>
#include <xutility>
#include "LCS.h"
#include "FullBag.h"
using namespace std;


int W[]={2,1,3,2};
int V[]={3,2,4,2};
int n=4;
int value=0;
int weight=5;
int find(int i,int j)//i�Ƿŵ��ڼ����ˡ�j��ʣ�¶���������
{
	int res;
	if(i==n)
	{
		res=0;
	}
	else if(j<V[i])
	{
		res=find(i+1,j);
	}
	else
	{
		res=max(find(i+1,j),find(i+1,j-W[i])+V[i]);
	}
	cout<<res<<"\r\n";
	return res;
}



int buf[5][6];

int find2()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			buf[i][j]=0;
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(W[i]>j)
			{
				buf[i+1][j]=buf[i][j];
			}
			else
			{
				buf[i+1][j]=max(buf[i][j],buf[i][j-W[i]]+V[i]);
			}
		}
	}

	//cout<<buf[4][4];
	return buf[4][5];
}



int _tmain(int argc, _TCHAR* argv[])
{
	//int finalValue=find(0,weight);
	//int finalValue=find2();
	//cout<<finalValue;
	

	//LCS lcs;
	//lcs.FindLength();

	FullBag fullBag;
	fullBag.FindBag();

	int mm=0;
	cin>>mm;
	return 0;
}


