#include <iostream>  
#define N 10
using namespace std;


char apassword[3][10][7];//�����¼
char ausername[3][10][7]; //�û�����¼
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





driver obj[N] = { { 1,"��һ","��","bb","����",9 },{ 2,"�Ŷ�","Ů","ccc","��������",5 },{ 3,"df","s","15678","����",12 } };
police obs[N] = { { 1,"��һ","��" },{ 2,"���","Ů" },{ 3,"����","��" } };

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
	cout << "ѡ���������0����Ա1����2˾��";
		cin >> z;//�������

		cout << "�����ţ�1��9��";
		cin >> y;//���


		cout << "�����û���";
		cin.getline(m, 6);
		//cin.getline(m, 6);
		cout << "��������";
		cin.getline(n, 6);

		if (z == 0)
		{
			if (m == a0username[y] && n == a0password[y])
			{
				cout << "��¼�ɹ�";
				mainmanu(y, z);
			}
			else
			{
				cout << "�û������������";
				//goto loop;
				continue;
			}
		}


		if (z == 1)
		{
			if (m == a1username[y] && n == a1password[y])
			{
				cout << "��¼�ɹ�";
				mainmanu(y, z);
			}
			else
			{
				cout << "�û������������";
				//goto loop;
				continue;
			}

		}




		if (z == 2)
		{
			if (m == a2username[y] && n == a2password[y])
			{
				cout << "��¼�ɹ�";
				mainmanu(y, z);
			}
			else
			{
				cout << "�û������������";
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
		cout << "���������ѯ��˾�����" << endl;
		cin >> no2;
		obj[no2].print(); break;
	default:
		cout << "��ѡ�����ѯ˾�����߽��������ѯ����������1,���ѯ˾��������2," << endl;
		cin >> no3;
		cout << "���������ѯ���˵ı��" << endl;
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

	cout << "������һ���µ�����" << endl;
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
	cout << "���������޸ĵ�˾���ı��" << endl;
	cin >> no1;
	cout << "���������޸ĵĲ���,������޸�id,������0;������޸�name,������1;������޸��Ա�,������2��������޸���Ϊ��������3��������޸ķ�����������4" << endl;
	cin >> no2;
	cout << "�������޸�����" << endl;
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
	cout << "��������Ҫ�޸ĵĽ����ı��" << endl;
	cin >> no11;
	cout << "��������Ҫ�޸ĵ�����,���޸ı�ţ�������0�����޸����֣�������1�����޸��Ա�������2" << endl;
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
	{cout << "���������޸ĵ��ˣ�2��ʾ�޸�˾����1��ʾ�޸Ľ���" << endl;
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
	cout << "����������еĲ���,��1�����ѯ��2��������3�����޸ģ�" << endl;
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
	cout << "��������Ҫ���ĵĶ���  1���� 2˾��";
	cin >> k;


	cout << "������";
	cin >> u;

	cout << "������Ҫ����������  1����ɾ���û�  2�����û���������";
	cin >> l;
	if (l == 2)
	{
		cout << "ѡ���û��������� 1�û��� 2����";
		cin >> v;
		if (v == 1)
		{
			cout << "������λ���û���";
			cin >> ausername[k][u][6];
		}
		else
		{
			cout << "������λ����";
			cin >> apassword[k][u][6];
		}
	}
	else
	{
		cout << "ѡ����� 1ɾ�� 2����";
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
			cout << "�����û���";
			cin >> ausername[k][w1][6];
			cout << "��������";
			cin >> apassword[k][w1][6];
		}
	}
}


void mainmanu(int no, int right)
{
	int no1, no3;

	if (right == 2)
	{
		cout << "����������еĲ���,0�������˳�,1�����ѯ" << endl;
		cin >> no1;
		if (no1)
			SQL(no, 2);
	}

	else if (right == 1)
		commenmanu(1);
	else

		cout << "��ѡ�����,0�������Ա,��������Ȩ��,1�������Ա����Ȩ��(�û��������)" << endl;
	cin >> no3;
	if (no3)
		commenmanu(0);
	else
		f1();
}












