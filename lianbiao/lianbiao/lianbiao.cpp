// lianbiao.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//
//����:
//
//���� num1= [1, 2, 2, 1], nums2 = [2, 2], ���� [2].
//
//��ʾ:
//
//ÿ���ڽ���е�Ԫ�رض���Ψһ�ġ�
//	���ǿ��Բ�������������˳��

//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	//2012vs  ��֧��ֱ�ӳ�ʼ��vector�ô����ţ����л����������
//	int v1[] = {1,2,2,1};
//	vector<int> v11(v1,v1+4);
//	int v2[] = {2,2};
//	vector<int> v22(v2,v2+4);
//
//	unordered_map<int,int> inmap;
//	vector<int> reVec;
//	for (vector<int>::iterator iter=v11.begin();iter!=v11.end();iter++)
//	{
//		inmap[*iter]++;
//
//	}
//	for (vector<int>::iterator iter1=v22.begin();iter1!=v22.end();iter1++)
//	{
//		if (inmap[*iter1])
//		{
//			reVec.push_back(*iter1);
//			inmap[*iter1]=0;     //����map ��һ���ֱ��
//
//		}
//
//	}
//	
//	//return reVec;
//	for (auto c:reVec)
//	{
//		cout<<c<<endl;
//	}
//	getchar();
//}

