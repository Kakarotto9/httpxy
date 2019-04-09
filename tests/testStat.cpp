/*************************************************************************
	> File Name: tests/testStat.cpp
	> Author: lihengfeng
	> Mail: 18554239115@163.com 
	> Created Time: Wed Nov 22 22:22:49 2018
 ************************************************************************/

#include <sys/stat.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	struct stat st;
	string path="host/index.html";
	if(stat(path.c_str(),&st)==-1){
		cout<<"文件不存在"<<endl;
	}
}
