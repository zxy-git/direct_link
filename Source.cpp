#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#include<dos.h> 
#include<stdlib.h>
#include <string>
#include <windows.h>
#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include <algorithm>
using namespace std;

#if 1//170728

class zxy {
	
public :
	zxy() {
		printf("constructor invoked\n");
		//system("pause");
	}
	~zxy() {
		a = 0;
	}
	void foo() {
		d = 30;
	}
	int d = 32;
	int e = 48;
	int a=5;
	
	uint64_t b=60;
	//string s;
	
};
class zxy1 :public zxy {
public:
	int c = 9;
	//int a = 15;
};
class zxy2 :public zxy {
private:
	char *str;
public:
	uint64_t f = 1048576ull;
};
class testclass {
public:
	int c;
	testclass() {
		printf("testclass!\n");
	}
	
};
class exc{
public:
	int s = 0;
	exc() {
		s = 3;
	}
	exc(exc &e) {
		s = 5;
	}
};
exc ex;
int func() throw (exception){
	int a = 0;
	if (a == 0) {
		throw &ex;
		//throw exception("hiuegveguvy");
	}
}
int main() {
	int aa=5, bb=7;
	if (aa != (aa = bb)) {
		printf("aa!=bb!! %d %d\n", aa, bb);
	}
	printf("aa==bb!! %d %d\n", aa, bb);

	char sss[524288];
	zxy1 *z1=new zxy1();
	z1->a = 20;
	zxy *z = z1;
	printf("%d  %d\n", z1->a, z->a);
	printf("%p  %p\n", &z1->a, &z->a);
	void *tmp = malloc(sizeof(zxy1));
	//zxy1 *zz1 = new(tmp)zxy1;
	zxy1*zz1 = (zxy1*)tmp;
	zz1->zxy1::zxy1();
	printf("%d  %p\n", zz1->a, &zz1->a);
	zxy2 *zz2 = (zxy2*)tmp;
	printf("%d  %p\n", zz2->a, &zz2->a);
	uint64_t *i64 = new uint64_t;
	*i64 = 0;
	char *p = (char *)i64;
	p++;
	int *i32 = (int *)p;
	*i32 = 1048570;
	printf("%d,%p\n", *i32,i32);
	scanf("%llu", i32);
	printf("%u\n", *i32);
	try {
		func();
	}
	catch (exc a) {
		
		printf("catched exception%d\n",a.s);
	}
	system("pause");
}
#endif
