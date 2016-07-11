#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <windows.h>


#define error -1
#define ok 0

const int MAXV = 100;
const int ZZ = 45;
const int QT = 80;
using namespace std;

typedef struct restaurant{
    char name[50];//�������
    float pri;//�۸�
    float gra;//����
    int dis;//����
    int P;//�۸�����
    int G;//��������
    int D;//��������
    int K;//����
}Rest;

Rest snack[MAXV];
Rest barbecue[MAXV];
Rest selfhelp[MAXV];
Rest cake[MAXV];


void Initialize();
void SetColor(unsigned short ForeColor,unsigned short BackGroundColor);
void Menu();
void Menu0();
void Menu1();
void Menu2();
void Menu3();
void Menu4();
void Sortsnackpri(int left,int right);
void Sortbarbecuepri(int left,int right);
void Sortselfhelppri(int left,int right);
void Sortcakepri(int left,int right);
void Sortsnackdis(int left,int right);
void Sortbarbecuedis(int left,int right);
void Sortselfhelpdis(int left,int right);
void Sortcakedis(int left,int right);
void Sortsnackgra(int left,int right);
void Sortbarbecuegra(int left,int right);
void Sortselfhelpgra(int left,int right);
void Sortcakegra(int left,int right);
void SortsnackK(int left,int right);
void SortbarbecueK(int left,int right);
void SortselfhelpK(int left,int right);
void SortcakeK(int left,int right);
void read1();
void read2();
void read3();
void read4();
void read5();
void read6();
void read7();
void read8();
void read9();
void read10();
void read11();
void read12();
void read13();
void read14();
void read15();
void read16();
void Read();
void Print1();
void Print2();
void Print3();
void Print4();

void Menu(){/*���˵�*/
    while(1)
	{
	    char a;//�û���ѡ��
		system("cls");
		cout << "**********************************"<<endl;
		cout << "*   �Ի��ڲ�ƽ---������ʳϵͳ��  *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*           ��ѡ�����           *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        1.......�������        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        2.......����տ�        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        3.......������ʳ        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        4.......�������        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        0.......�˳�����        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "**********************************"<<endl;
		a=getch();
		system("cls");
		switch(a)
		{
			case '1':
                Menu1();
				break;
			case '2':
                Menu2();
				break;
			case '3':
                Menu3();
				break;
            case '4':
                Menu4();
				break;
            case '0':
				exit(0);
			default:printf("����������ѡ��\n");
                    Sleep(30);
			    continue;
		}
	}
}

void Menu0(){
        cout << "**********************************"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*            ��ӭʹ��            *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*   �Ի��ڲ�ƽ---������ʳϵͳ��  *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "**********************************"<<endl;
    system("pause");
}

void Menu1(){/*�������*/
    char b;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           �������             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......����ӽ���Զ      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......�۸�ӵ͵���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......���ִӸߵ���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......�ۺ�����          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......�������˵�        *"<<endl;
        cout << "*                                *"<<endl;
        cout << "**********************************"<<endl;
        b=getch();//����س�
        system("cls");
        switch(b)
        {
            case '1':
                Sortsnackdis(0,QT-1);
                Print1();
                system("pause");
                break;
            case '2':
                Sortsnackpri(0,QT-1);
                Print1();
                system("pause");
                break;
            case '3':
                Sortsnackgra(0,QT-1);
                Print1();
                system("pause");
                break;
            case '4':
                Sortsnackdis(0,QT-1);
                for(int i=0;i<QT;i++)
                    snack[i].D = i;
                Sortsnackpri(0,QT-1);
                for(int i=0;i<QT;i++)
                    snack[i].P = i;
                Sortsnackgra(0,QT-1);
                for(int i=0;i<QT;i++)
                    snack[i].G = i;
                for(int i=0;i<QT;i++)
                    snack[i].K = snack[i].D + snack[i].P + snack[i].G;
                SortsnackK(0,QT-1);
                Print1();
                system("pause");
                break;
            case '0':
                Menu();
                break;
            default:continue;
        }
    }
}

void Menu2(){/*����տ�*/
    char c;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           ����տ�             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......����ӽ���Զ      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......�۸�ӵ͵���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......���ִӸߵ���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......�ۺ�����          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......�������˵�        *"<<endl;
        cout << "*                                *"<<endl;
        cout << "**********************************"<<endl;
        c=getch();
        system("cls");
        switch(c)
        {
            case '1':
                Sortbarbecuedis(0,QT-1);
                Print2();
                system("pause");
                break;
            case '2':
                Sortbarbecuepri(0,QT-1);
                Print2();
                system("pause");
                break;
            case '3':
                Sortbarbecuegra(0,QT-1);
                Print2();
                system("pause");
                break;
            case '4':
                Sortbarbecuedis(0,QT-1);
                for(int i=0;i<QT;i++)
                    barbecue[i].D = i;
                 Sortbarbecuepri(0,QT-1);
                for(int i=0;i<QT;i++)
                    barbecue[i].P = i;
                 Sortbarbecuegra(0,QT-1);
                for(int i=0;i<QT;i++)
                    barbecue[i].G = i;
                for(int i=0;i<QT;i++)
                    barbecue[i].K = barbecue[i].D +  barbecue[i].P + barbecue[i].G;
                SortbarbecueK(0,QT-1);
                Print2();
                system("pause");
                break;
            case '0':
                Menu();
                break;
            default:continue;
        }
    }
}

void Menu3(){/*������ʳ*/
    char d;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           ������ʳ             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......����ӽ���Զ      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......�۸�ӵ͵���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......���ִӸߵ���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......�ۺ�����          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......�������˵�        *"<<endl;
        cout << "*                                *"<<endl;
        cout << "**********************************"<<endl;
        d=getch();
        system("cls");
        switch(d)
        {
            case '1':
                Sortselfhelpdis(0,ZZ-1);
                Print3();
                system("pause");
                break;
            case '2':
                Sortselfhelppri(0,ZZ-1);
                Print3();
                system("pause");
                break;
            case '3':
                Sortselfhelpgra(0,ZZ-1);
                Print3();
                system("pause");
                break;
            case '4':
                Sortselfhelpdis(0,ZZ-1);
                for(int i=0;i<ZZ;i++)
                    selfhelp[i].D = i;
                Sortselfhelppri(0,ZZ-1);
                for(int i=0;i<ZZ;i++)
                    selfhelp[i].P = i;
                Sortselfhelpgra(0,ZZ-1);
                for(int i=0;i<ZZ;i++)
                    selfhelp[i].G = i;
                for(int i=0;i<ZZ;i++)
                    selfhelp[i].K = selfhelp[i].D + selfhelp[i].P + selfhelp[i].G;
                SortselfhelpK(0,ZZ-1);
                Print3();
                system("pause");
                break;
            case '0':
                Menu();
                break;
            default:continue;
            }
    }
}

void Menu4(){/*�������*/
    char e;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           �������             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......����ӽ���Զ      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......�۸�ӵ͵���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......���ִӸߵ���      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......�ۺ�����          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......�������˵�        *"<<endl;
        cout << "*                                *"<<endl;
        cout << "**********************************"<<endl;
        e=getch();
        system("cls");
        switch(e)
        {
            case '1':
                Sortcakedis(0,QT-1);
                Print4();
                system("pause");
                break;
            case '2':
                Sortcakepri(0,QT-1);
                Print4();
                system("pause");
                break;
            case '3':
                Sortcakegra(0,QT-1);
                Print4();
                system("pause");
                break;
            case '4':
                 Sortcakedis(0,QT-1);
                for(int i=0;i<ZZ;i++)
                    cake[i].D = i;
                Sortcakepri(0,QT-1);
                for(int i=0;i<ZZ;i++)
                    cake[i].P = i;
                Sortcakegra(0,QT-1);
                for(int i=0;i<ZZ;i++)
                    cake[i].G = i;
                for(int i=0;i<QT;i++)
                    cake[i].K = cake[i].D + cake[i].P + cake[i].G;
                SortcakeK(0,QT-1);
                Print4();
                system("pause");
                break;
            case '0':
                Menu();
                break;
            default:continue;
        }
    }
}

void Sortsnackpri(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = snack[left].pri;
    while(i != j){
        while(i < j && key.pri <= snack[j].pri)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.pri >= snack[i].pri)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = snack[i];
                snack[i] = snack[j];
                snack[j]=t;

            }
    }
    snack[left].pri = snack[i].pri;
    snack[i].pri = key.pri;
    Sortsnackpri(left,i-1);/*�ݹ����*/
    Sortsnackpri(i+1,right);
}

void Sortbarbecuepri(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = barbecue[left].pri;
    while(i != j){
        while(i < j && key.pri <= barbecue[j].pri)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.pri >= barbecue[i].pri)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = barbecue[i];
                barbecue[i] = barbecue[j];
                barbecue[j]=t;

            }
    }
    barbecue[left].pri = barbecue[i].pri;
    barbecue[i].pri = key.pri;
    Sortbarbecuepri(left,i-1);/*�ݹ����*/
    Sortbarbecuepri(i+1,right);
}

void Sortselfhelppri(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = selfhelp[left].pri;
    while(i != j){
        while(i < j && key.pri <= selfhelp[j].pri)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.pri >= selfhelp[i].pri)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = selfhelp[i];
                selfhelp[i] = selfhelp[j];
                selfhelp[j]=t;

            }
    }
    selfhelp[left].pri = selfhelp[i].pri;
    selfhelp[i].pri = key.pri;
    Sortselfhelppri(left,i-1);/*�ݹ����*/
    Sortselfhelppri(i+1,right);
}

void Sortcakepri(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = cake[left].pri;
    while(i != j){
        while(i < j && key.pri <= cake[j].pri)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.pri >= cake[i].pri)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = cake[i];
                cake[i] = cake[j];
                cake[j]=t;

            }
    }
    cake[left].pri = cake[i].pri;
    cake[i].pri = key.pri;
    Sortcakepri(left,i-1);/*�ݹ����*/
    Sortcakepri(i+1,right);
}

void Sortsnackdis(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = snack[left].dis;
    while(i != j){
        while(i < j && key.dis <= snack[j].dis)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.dis >= snack[i].dis)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = snack[i];
                snack[i] = snack[j];
                snack[j]=t;

            }
    }
    snack[left].dis = snack[i].dis;
    snack[i].dis = key.dis;
    Sortsnackdis(left,i-1);/*�ݹ����*/
    Sortsnackdis(i+1,right);
}

void Sortbarbecuedis(int left,int right){/*��ʼʱleft=0��right=���鳤��*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = barbecue[left].dis;
    while(i != j){
        while(i < j && key.dis <= barbecue[j].dis)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.dis >= barbecue[i].dis)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = barbecue[i];
                barbecue[i] = barbecue[j];
                barbecue[j] = t;

            }
    }
    barbecue[left].dis = barbecue[i].dis;
    barbecue[i].dis = key.dis;
    Sortbarbecuedis(left,i-1);/*�ݹ����*/
    Sortbarbecuedis(i+1,right);
}

void Sortselfhelpdis(int left,int right){/*��ʼʱleft=0��right=���鳤��*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = selfhelp[left].dis;
    while(i != j){
        while(i < j && key.dis <= selfhelp[j].dis)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.dis >= selfhelp[i].dis)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = selfhelp[i];
                selfhelp[i] = selfhelp[j];
                selfhelp[j] = t;

            }
    }
    selfhelp[left].dis = selfhelp[i].dis;
    selfhelp[i].dis = key.dis;
    Sortselfhelpdis(left,i-1);/*�ݹ����*/
    Sortselfhelpdis(i+1,right);
}

void Sortcakedis(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = cake[left].dis;
    while(i != j){
        while(i < j && key.dis <= cake[j].dis)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.dis >= cake[i].dis)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = cake[i];
                cake[i] = cake[j];
                cake[j]=t;

            }
    }
    cake[left].dis = cake[i].dis;
    cake[i].dis = key.dis;
    Sortcakedis(left,i-1);/*�ݹ����*/
    Sortcakedis(i+1,right);
}

void Sortsnackgra(int left,int right){/*��ʼʱleft=0��right=���鳤��*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = snack[left].gra;
    while(i != j){
        while(i < j && key.gra >= snack[j].gra)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.gra <= snack[i].gra)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = snack[i];
                snack[i] = snack[j];
                snack[j] = t;

            }
    }
    snack[left].gra = snack[i].gra;
    snack[i].gra = key.gra;
    Sortsnackgra(left,i-1);/*�ݹ����*/
    Sortsnackgra(i+1,right);
}

void Sortbarbecuegra(int left,int right){/*��ʼʱleft=0��right=���鳤��*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = barbecue[left].gra;
    while(i != j){
        while(i < j && key.gra >= barbecue[j].gra)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.gra <= barbecue[i].gra)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = barbecue[i];
                barbecue[i] = barbecue[j];
                barbecue[j] = t;
            }
    }
    barbecue[left].gra = barbecue[i].gra;
    barbecue[i].gra = key.gra;
    Sortbarbecuegra(left,i-1);/*�ݹ����*/
    Sortbarbecuegra(i+1,right);
}

void Sortselfhelpgra(int left,int right){/*��ʼʱleft=0��right=���鳤��*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = selfhelp[left].gra;
    while(i != j){
        while(i < j && key.gra >= selfhelp[j].gra)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.gra <= selfhelp[i].gra)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = selfhelp[i];
                selfhelp[i] = selfhelp[j];
                selfhelp[j] = t;

            }
    }
    selfhelp[left].gra = selfhelp[i].gra;
    selfhelp[i].gra = key.gra;
    Sortselfhelpgra(left,i-1);/*�ݹ����*/
    Sortselfhelpgra(i+1,right);
}

void Sortcakegra(int left,int right){/*��ʼʱleft=0��right=���鳤��*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = cake[left].gra;
    while(i != j){
        while(i < j && key.gra >= cake[j].gra)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.gra <= cake[i].gra)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = cake[i];
                cake[i] = cake[j];
                cake[j] = t;
            }
    }
    cake[left].gra = cake[i].gra;
    cake[i].gra = key.gra;
    Sortcakegra(left,i-1);/*�ݹ����*/
    Sortcakegra(i+1,right);
}

void SortsnackK(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = snack[left].K;
    while(i != j){
        while(i < j && key.K <= snack[j].K)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.K >= snack[i].K)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = snack[i];
                snack[i] = snack[j];
                snack[j]=t;

            }
    }
    snack[left].K = snack[i].K;
    snack[i].K = key.K;
    SortsnackK(left,i-1);/*�ݹ����*/
    SortsnackK(i+1,right);
}

void SortbarbecueK(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = barbecue[left].K;
    while(i != j){
        while(i < j && key.K <= barbecue[j].K)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.K >= barbecue[i].K)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = barbecue[i];
                barbecue[i] = barbecue[j];
                barbecue[j]=t;

            }
    }
    barbecue[left].K = barbecue[i].K;
    barbecue[i].K = key.K;
    SortbarbecueK(left,i-1);/*�ݹ����*/
    SortbarbecueK(i+1,right);
}

void SortselfhelpK(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = selfhelp[left].K;
    while(i != j){
        while(i < j && key.K <= selfhelp[j].K)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.K >= selfhelp[i].K)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = selfhelp[i];
                selfhelp[i] = selfhelp[j];
                selfhelp[j]=t;

            }
    }
    selfhelp[left].K = selfhelp[i].K;
    selfhelp[i].K = key.K;
    SortselfhelpK(left,i-1);/*�ݹ����*/
    SortselfhelpK(i+1,right);
}

void SortcakeK(int left,int right){/*��ʼʱleft=0��right=���鳤��*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = cake[left].K;
    while(i != j){
        while(i < j && key.K <= cake[j].K)/*���������ҵ�һ��С�ڵ���key����*/
            j--;

        while(i < j && key.K >= cake[i].K)/*���������ҵ�һ������key����*/
            i++;

        if(i < j)
            {
                t = cake[i];
                cake[i] = cake[j];
                cake[j]=t;

            }
    }
    cake[left].K = cake[i].K;
    cake[i].K = key.K;
    SortcakeK(left,i-1);/*�ݹ����*/
    SortcakeK(i+1,right);
}

void Initialize(){/*��ʼ��*/
    for(int i = 0;i<MAXV;i++){
            for(int j=0;j<50;j++){
                snack[i].name[j] = '/0';
                barbecue[i].name[j] = '/0';
                selfhelp[i].name[j] = '/0';
                cake[i].name[j] = '/0';
            }

        snack[i].gra = -1.0;
        snack[i].pri = -1.0;
        snack[i].dis = 0;
        snack[i].P = 0;
        snack[i].G = 0;
        snack[i].D = 0;
        snack[i].K = 0;

        barbecue[i].gra = -1.0;
        barbecue[i].pri = -1.0;
        barbecue[i].dis = 0;
        barbecue[i].P = 0;
        barbecue[i].G = 0;
        barbecue[i].D = 0;
        barbecue[i].K = 0;

        selfhelp[i].gra = -1.0;
        selfhelp[i].pri = -1.0;
        selfhelp[i].dis = 0;
        selfhelp[i].P = 0;
        selfhelp[i].G = 0;
        selfhelp[i].D = 0;
        selfhelp[i].K = 0;

        cake[i].gra = -1.0;
        cake[i].pri = -1.0;
        cake[i].dis = 0;
        cake[i].P = 0;
        cake[i].G = 0;
        cake[i].D = 0;
        cake[i].K = 0;
    }

}

void read1(){/*����������*/
	FILE *fp;
	fp=fopen("�������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
	    for(int j=0;j<50;j++){
            fscanf(fp,"%c",&snack[i].name[j]);
            if(snack[i].name[j]=='\n')
                break;
	    }
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read2(){/*�����ͼ۸�*/
	FILE *fp;
	fp=fopen("��ͼ۸�.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&snack[i].pri);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read3(){/*����������*/
	FILE *fp;
	fp=fopen("�������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&snack[i].gra);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read4(){/*�����;���*/
	FILE *fp;
	fp=fopen("��;���.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<QT;i++){
        fscanf(fp,"%d",&snack[i].dis);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read5(){/*����������*/
	FILE *fp;
	fp=fopen("�������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
	    for(int j=0;j<50;j++){
            fscanf(fp,"%c",&barbecue[i].name[j]);
            if(barbecue[i].name[j]=='\n')
                break;
	    }
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read6(){/*�������۸�*/
	FILE *fp;
	fp=fopen("����۸�.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&barbecue[i].pri);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read7(){/*����������*/
	FILE *fp;
	fp=fopen("�������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&barbecue[i].gra);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read8(){/*����������*/
	FILE *fp;
	fp=fopen("�������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%d",&barbecue[i].dis);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read9(){/*������������*/
	FILE *fp;
	fp=fopen("��������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
	    for(int j=0;j<50;j++){
            fscanf(fp,"%c",&selfhelp[i].name[j]);
            if(selfhelp[i].name[j]=='\n')
                break;
	    }
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read10(){/*���������۸�*/
	FILE *fp;
	fp=fopen("�����۸�.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&selfhelp[i].pri);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read11(){/*������������*/
	FILE *fp;
	fp=fopen("��������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&selfhelp[i].gra);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read12(){/*������������*/
	FILE *fp;
	fp=fopen("��������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%d",&selfhelp[i].dis);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read13(){/*���뵰������*/
	FILE *fp;
	fp=fopen("��������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
	    for(int j=0;j<50;j++){
            fscanf(fp,"%c",&cake[i].name[j]);
            if(cake[i].name[j]=='\n')
                break;
	    }
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read14(){/*���뵰��۸�*/
	FILE *fp;
	fp=fopen("����۸�.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&cake[i].pri);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read15(){/*���뵰������*/
	FILE *fp;
	fp=fopen("��������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%f",&cake[i].gra);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void read16(){/*���뵰�����*/
	FILE *fp;
	fp=fopen("�������.txt","r");
	if(fp==NULL){
		printf("cannot open file");
		exit(1);
	}

    for(int i=0;i<MAXV;i++){
        fscanf(fp,"%d",&cake[i].dis);
	    if(feof(fp))
            break;
	}
	fclose(fp);
}

void Read(){/*��������������*/
    read1();
    read2();
    read3();
    read4();
    read5();
    read6();
    read7();
    read8();
    read9();
    read10();
    read11();
    read12();
    read13();
    read14();
    read15();
    read16();
}

void Print1(){
    for(int i=1;i<QT;i++){
            if(i%9==0)
                system("pause");
            printf("������");
            for(int j=0;j<50;j++){
                printf("%c",snack[i].name[j]);
                if(snack[i].name[j+1] == '\n')
                    break;
            }
        printf("\n�۸�%.2fԪ ���֣�%.2f�� ���룺%d��\n\n",snack[i].pri,snack[i].gra,snack[i].dis);
    }
    SetColor(12,0);
    printf("��ȫ����ʾ��\n");
    SetColor(7,0);//�ָ�Ϊ�ڵװ��֡���
}

void Print2(){
    for(int i=1;i<QT;i++){
        if(i%9==0)
            system("pause");
        printf("������");
        for(int j=0;j<50;j++){
            printf("%c",barbecue[i].name[j]);
            if(barbecue[i].name[j+1]=='\n')
                    break;
        }
        printf("\n�۸�%.2fԪ ���֣�%.2f�� ���룺%d��\n\n",barbecue[i].pri,barbecue[i].gra,barbecue[i].dis);
    }
    SetColor(12,0);
    printf("��ȫ����ʾ��\n");
    SetColor(7,0);//�ָ�Ϊ�ڵװ��֡���
}

void Print3(){
   for(int i=1;i<ZZ;i++){
         if(i%9==0)
            system("pause");
        printf("������");
        for(int j=0;j<50;j++){
            printf("%c",selfhelp[i].name[j]);
            if(selfhelp[i].name[j+1]=='\n')
                    break;
        }
        printf("\n�۸�%.2fԪ ���֣�%.2f�� ���룺%d��\n\n",selfhelp[i].pri,selfhelp[i].gra,selfhelp[i].dis);
    }
    SetColor(12,0);
    printf("��ȫ����ʾ��\n");
    SetColor(7,0);//�ָ�Ϊ�ڵװ��֡���
}

void Print4(){
    for(int i=1;i<QT;i++){
        if(i%9==0)
            system("pause");
        printf("������");
        for(int j=0;j<50;j++){
            printf("%c",cake[i].name[j]);
            if(cake[i].name[j+1]=='\n')
                    break;
        }
        printf("\n�۸�%.2fԪ ���֣�%.2f�� ���룺%d��\n\n",cake[i].pri,cake[i].gra,cake[i].dis);
    }
    SetColor(12,0);
    printf("��ȫ����ʾ��\n");
    SetColor(7,0);//�ָ�Ϊ�ڵװ��֡���
}

void SetColor(unsigned short ForeColor,unsigned short BackGroundColor){/*�ı䵥�仰��ɫ*/
    HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,(ForeColor%16)|(BackGroundColor%16*16));
}

int main(){
    Initialize();
    Read();
    Menu0();
    Menu();
    return ok;
}
