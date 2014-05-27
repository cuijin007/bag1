#include "StdAfx.h"
#include "FullBag.h"
#include <iostream>
#include<cmath>

using namespace std;



FullBag::FullBag(void)
{
}

FullBag::~FullBag(void)
{
}


int buf2[4][8];
int W2[]={3,4,2};
int V2[]={4,5,3};
void FullBag::FindBag()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<8;j++)
		{
			buf2[i][j]=0;
		}
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<8;j++)
		{
			for(int k=0;k*W2[i]<=j;k++)
			{
				if(j<W2[i])
				{
					buf2[i+1][j]=buf2[i][j];
				}
				else
				{
					buf2[i+1][j]=max(buf2[i+1][j],buf2[i][j-k*W2[i]]+k*V2[i]);//找这个位置是哪个最大..
				}
			
			}
		}
	}

	cout<<buf2[3][7];
}