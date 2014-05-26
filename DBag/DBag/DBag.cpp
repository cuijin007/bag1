// DBag.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<algorithm>
#include <iostream>
#include<cmath>
#include <xutility>
using namespace std;


int W[]={2,1,3,2};
int V[]={3,2,4,2};
int n=4;
int value=0;
int weight=5;
int find(int i,int j)//i是放到第几个了。j是剩下多少重量，
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



int buf[5][5];

int find2()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			buf[i][j]=0;
		}
	}

	for(int i=0;i<n;i++)
	{
		
	}
}



int _tmain(int argc, _TCHAR* argv[])
{
	int finalValue=find(0,weight);
	cout<<finalValue;
	int mm=0;
	cin>>mm;
	return 0;
}

