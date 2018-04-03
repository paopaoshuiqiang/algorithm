//// lianbiao.cpp : 定义控制台应用程序的入口点。
////
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <windows.h>
#include <ctime>
//using namespace std;
//
//
//int _tmain(int argc,_TCHAR* argv)
//{
//	
//	int a[] = {4,0,2,5,7,4,3};
//	vector<int> v1(a,a+7);
//
//	DWORD starttime = GetTickCount();
//	clock_t  btime,etime;
//	btime = clock();
//	size_t sz = v1.size();
//	if (sz<2)
//	{
//		cout<<"false"<<endl ;
//		return -1;
//	}
//
//	sort(v1.begin(),v1.end());
//	/*for (vector<int>::iterator iter=v1.begin();iter!=v1.end();iter++)
//	{
//	if ()
//	{
//	}
//	}*/
//
//	for (int i=1;i<v1.size();i++)
//	{
//		if (v1[i]==v1[i-1])
//		{
//			cout<<"true"<<endl;
//			//getchar();
//			//return 1;
//
//		}
//	}
//	DWORD endtime = GetTickCount();
//	etime=clock();
//	cout<<fixed<<setprecision(4)<<(endtime-starttime)<<"ms"<<endl;
//	cout<<(btime-etime)<<"ms"<<endl;
//	cout<<(btime-etime)/CLK_TCK<<endl;
//	system("pause");
//	getchar();
//
//	
//