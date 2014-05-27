#include "StdAfx.h"
#include "LCS.h"
#include <iostream>
#include<cmath>
using namespace std;

LCS::LCS(void)
{
}

LCS::~LCS(void)
{
}


char *S="abcd";
char *T="becd";

void LCS::FindLength()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			buf[i][j]=0;
		}
	}

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(S[i]==T[j])
			{
				buf[i+1][j+1]=buf[i][j]+1;
			}
			else
			{
				buf[i+1][j+1]=max(buf[i][j+1],buf[i+1][j]);
			}
		}
	}


	cout<<buf[4][4];
}