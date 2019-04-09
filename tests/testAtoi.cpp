/*************************************************************************
	> File Name: tests/testAtoi.cpp
	> Author: lihengfeng
	> Mail: 18554239115@163.com 
	> Created Time: Thu Nov 23 15:29:29 2018
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char buf[128]="asdzxc 9\r\n\r\n";
	buf[6]='\0';
	if(!strcasecmp("asdzxc",buf)){  
		cout<<"buf=asdzxc"<<endl;
	}
	int len=atoi(&buf[7]);
	cout<<len<<endl;

}
