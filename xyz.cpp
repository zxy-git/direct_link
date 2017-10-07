#include <iostream>  
#define N 10
using namespace std;


char apassword[3][10][7];//密码记录
char ausername[3][10][7]; //用户名记录
char n[6];

char m[6];
char a0username[10][6];
char a1username[10][6];
char a2username[10][6];
char a0password[10][6];
char a1password[10][6];
char a2password[10][6];





class driver
{
public:
	int id; char name[6]; char sex[5]; char username[6]; char behaviour[20]; int score;
	void print()
	{
		cout << id << " " << name << "  " << sex << "  " << username << "  " << behaviour << "  " << score << endl;
	}

};
class police
{
public:
	int id; char name[6]; char sex[5];
	void print()
	{
		cout << id << " " << name << "  " << sex << endl;
	}
};





driver obj[N] = { { 1,"张一","男","bb","超速",9 },{ 2,"张二","女","ccc","高速逆行",5 },{ 3,"df","s","15678","超速",12 } };
police obs[N] = { { 1,"李一","男" },{ 2,"李二","女" },{ 3,"李三","男" } };

void changepolice();
void changedriver();
void change(int);
void SQL(int, int);
int AD();
void commenmanu(int);
void mainmanu(int, int);



void main0()
{
	for (int i = 0; i<6; i++)

	{
		a1username[1][i] = i;
		a1password[1][i] = i;
	}
	int z, y;
	while (1) {
	cout << "选择身份类型0管理员1交警2司机";
		cin >> z;//身份类型

		cout << "输入编号（1到9）";
		cin >> y;//编号


		cout << "输入用户名";
		cin.getline(m, 6);
		//cin.getline(m, 6);
		cout << "输入密码";
		cin.getline(n, 6);

		if (z == 0)
		{
			if (m == a0username[y] && n == a0password[y])
			{
				cout << "登录成功";
				mainmanu(y, z);
			}
			else
			{
				cout << "用户名或密码错误";
				//goto loop;
				continue;
			}
		}


		if (z == 1)
		{
			if (m == a1username[y] && n == a1password[y])
			{
				cout << "登录成功";
				mainmanu(y, z);
			}
			else
			{
				cout << "用户名或密码错误";
				//goto loop;
				continue;
			}

		}




		if (z == 2)
		{
			if (m == a2username[y] && n == a2password[y])
			{
				cout << "登录成功";
				mainmanu(y, z);
			}
			else
			{
				cout << "用户名或密码错误";
				//goto loop;
				continue;
			}


		}
	}
}






void SQL(int no1, int right)
{
	int no2, no3, no4;
	switch (right)
	{
	case 2:
		obj[no1].print(); break;
	case 1:
		cout << "请输入想查询的司机编号" << endl;
		cin >> no2;
		obj[no2].print(); break;
	default:
		cout << "请选择想查询司机或者交警，想查询交警请输入1,想查询司机请输入2," << endl;
		cin >> no3;
		cout << "请输入想查询的人的编号" << endl;
		cin >> no4;
		if (no3)
			obs[no4].print();
		else
			obj[no4].print();
	}
}




int AD()
{
	int i = 0, t = 0;
	for (i; i<N; i++)
		if (!obj[i].id)
		{
			t = i; break;
		}return t;
}


void ADD(int t)
{

	cout << "请输入一个新的数据" << endl;
	cin >> obj[t].id;
	cin >> obj[t].name;
	cin >> obj[t].sex;
	cin >> obj[t].username;
	cin >> obj[t].behaviour;
	cin >> obj[t].score;
}







void changedriver()
{
	int no1, no2;
	cout << "请输入想修改的司机的编号" << endl;
	cin >> no1;
	cout << "请输入想修改的部分,如果想修改id,请输入0;如果想修改name,请输入1;如果想修改性别,请输入2，如果想修改行为，请输入3，如果想修改分数，请输入4" << endl;
	cin >> no2;
	cout << "请输入修改内容" << endl;
	switch (no2)
	{
	case 0:
		cin >> obj[no1].id; break;
	case 1:
		cin >> obj[no1].name; break;
	case 2:
		cin >> obj[no1].sex; break;
	case 3:
		cin >> obj[no1].behaviour; break;
	case 4:
		cin >> obj[no1].score;
	}
}

void changepolice()
{
	int no11, no21;
	cout << "请输入想要修改的交警的编号" << endl;
	cin >> no11;
	cout << "请输入想要修改的内容,想修改编号，请输入0，想修改名字，请输入1，想修改性别，请输入2" << endl;
	cin >> no21;
	switch (no21)
	{
	case 0:
		cin >> obs[no11].id; break;
	case 1:
		cin >> obs[no21].name; break;
	case 2:
		cin >> obs[no21].sex;
	}
}

void change(int right)
{
	int no1;
	switch (right)
	{
	case 1:
		changedriver(); break;
	case 2:
	{cout << "请输入想修改的人，2表示修改司机，1表示修改交警" << endl;
	cin >> no1;
	switch (no1)
	{
	case 2:
		changedriver(); break;
	case 1:
		changepolice();
	}
	}
	}
}


void commenmanu(int right)
{
	int no51, t;
	cout << "请输入想进行的操作,，1代表查询，2代表增添，3代表修改，" << endl;
	cin >> no51;


	if (no51 == 1)
		SQL(1, right);
	else if (no51 == 2)
	{
		t = AD();
		ADD(t);
	}
	else
		change(right);
}

void f1()
{
	int k; int l; int v, u, w;
	cout << "请输入需要更改的对象  1交警 2司机";
	cin >> k;


	cout << "输入编号";
	cin >> u;

	cout << "输入需要操作的类型  1增加删减用户  2更改用户名或密码";
	cin >> l;
	if (l == 2)
	{
		cout << "选择用户名和密码 1用户名 2密码";
		cin >> v;
		if (v == 1)
		{
			cout << "输入六位新用户名";
			cin >> ausername[k][u][6];
		}
		else
		{
			cout << "输入六位密码";
			cin >> apassword[k][u][6];
		}
	}
	else
	{
		cout << "选择操作 1删减 2增加";
		cin >> w;
		if (w == 1)
		{
			ausername[k][u][6] = '\0';
			apassword[k][u][6] = '\0';
		}
		else
		{
			int w1=0;
			while (ausername[k][w1][6] != '\0')
			{
				w1++;
			}
			cout << "输入用户名";
			cin >> ausername[k][w1][6];
			cout << "输入密码";
			cin >> apassword[k][w1][6];
		}
	}
}


void mainmanu(int no, int right)
{
	int no1, no3;

	if (right == 2)
	{
		cout << "请输入想进行的操作,0代表想退出,1代表查询" << endl;
		cin >> no1;
		if (no1)
			SQL(no, 2);
	}

	else if (right == 1)
		commenmanu(1);
	else

		cout << "请选择操作,0代表管理员,交警共有权限,1代表管理员特有权限(用户密码管理)" << endl;
	cin >> no3;
	if (no3)
		commenmanu(0);
	else
		f1();
}












