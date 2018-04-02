// lianbiao.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//
//例子:
//
//给定 num1= [1, 2, 2, 1], nums2 = [2, 2], 返回 [2].
//
//提示:
//
//每个在结果中的元素必定是唯一的。
//	我们可以不考虑输出结果的顺序

//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	//2012vs  不支持直接初始化vector用大括号，所有还是用数组吧
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
//			inmap[*iter1]=0;     //更新map 这一点简直了
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

