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
    char name[50];//店家名字
    float pri;//价格
    float gra;//评分
    int dis;//距离
    int P;//价格排名
    int G;//评分排名
    int D;//距离排名
    int K;//总评
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

void Menu(){/*主菜单*/
    while(1)
	{
	    char a;//用户可选项
		system("cls");
		cout << "**********************************"<<endl;
		cout << "*   吃货在昌平---化工美食系统！  *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*           请选择分类           *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        1.......外卖快餐        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        2.......火锅烧烤        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        3.......自助美食        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        4.......蛋糕甜点        *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*        0.......退出程序        *"<<endl;
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
			default:printf("错误，请重新选择！\n");
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
		cout << "*            欢迎使用            *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*   吃货在昌平---化工美食系统！  *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "*                                *"<<endl;
		cout << "**********************************"<<endl;
    system("pause");
}

void Menu1(){/*外卖快餐*/
    char b;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           外卖快餐             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......距离从近到远      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......价格从低到高      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......评分从高到低      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......综合排序          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......返回主菜单        *"<<endl;
        cout << "*                                *"<<endl;
        cout << "**********************************"<<endl;
        b=getch();//缓冲回车
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

void Menu2(){/*火锅烧烤*/
    char c;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           火锅烧烤             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......距离从近到远      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......价格从低到高      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......评分从高到低      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......综合排序          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......返回主菜单        *"<<endl;
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

void Menu3(){/*自助美食*/
    char d;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           自助美食             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......距离从近到远      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......价格从低到高      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......评分从高到低      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......综合排序          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......返回主菜单        *"<<endl;
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

void Menu4(){/*蛋糕甜点*/
    char e;
    while(1)
    {
        system("cls");
        cout << "**********************************"<<endl;
        cout << "*           蛋糕甜点             *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      1.......距离从近到远      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      2.......价格从低到高      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      3.......评分从高到低      *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      4.......综合排序          *"<<endl;
        cout << "*                                *"<<endl;
        cout << "*      0.......返回主菜单        *"<<endl;
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

void Sortsnackpri(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = snack[left].pri;
    while(i != j){
        while(i < j && key.pri <= snack[j].pri)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.pri >= snack[i].pri)/*从左向右找第一个大于key的数*/
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
    Sortsnackpri(left,i-1);/*递归调用*/
    Sortsnackpri(i+1,right);
}

void Sortbarbecuepri(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = barbecue[left].pri;
    while(i != j){
        while(i < j && key.pri <= barbecue[j].pri)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.pri >= barbecue[i].pri)/*从左向右找第一个大于key的数*/
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
    Sortbarbecuepri(left,i-1);/*递归调用*/
    Sortbarbecuepri(i+1,right);
}

void Sortselfhelppri(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = selfhelp[left].pri;
    while(i != j){
        while(i < j && key.pri <= selfhelp[j].pri)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.pri >= selfhelp[i].pri)/*从左向右找第一个大于key的数*/
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
    Sortselfhelppri(left,i-1);/*递归调用*/
    Sortselfhelppri(i+1,right);
}

void Sortcakepri(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.pri = cake[left].pri;
    while(i != j){
        while(i < j && key.pri <= cake[j].pri)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.pri >= cake[i].pri)/*从左向右找第一个大于key的数*/
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
    Sortcakepri(left,i-1);/*递归调用*/
    Sortcakepri(i+1,right);
}

void Sortsnackdis(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = snack[left].dis;
    while(i != j){
        while(i < j && key.dis <= snack[j].dis)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.dis >= snack[i].dis)/*从左向右找第一个大于key的数*/
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
    Sortsnackdis(left,i-1);/*递归调用*/
    Sortsnackdis(i+1,right);
}

void Sortbarbecuedis(int left,int right){/*初始时left=0；right=数组长度*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = barbecue[left].dis;
    while(i != j){
        while(i < j && key.dis <= barbecue[j].dis)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.dis >= barbecue[i].dis)/*从左向右找第一个大于key的数*/
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
    Sortbarbecuedis(left,i-1);/*递归调用*/
    Sortbarbecuedis(i+1,right);
}

void Sortselfhelpdis(int left,int right){/*初始时left=0；right=数组长度*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = selfhelp[left].dis;
    while(i != j){
        while(i < j && key.dis <= selfhelp[j].dis)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.dis >= selfhelp[i].dis)/*从左向右找第一个大于key的数*/
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
    Sortselfhelpdis(left,i-1);/*递归调用*/
    Sortselfhelpdis(i+1,right);
}

void Sortcakedis(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.dis = cake[left].dis;
    while(i != j){
        while(i < j && key.dis <= cake[j].dis)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.dis >= cake[i].dis)/*从左向右找第一个大于key的数*/
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
    Sortcakedis(left,i-1);/*递归调用*/
    Sortcakedis(i+1,right);
}

void Sortsnackgra(int left,int right){/*初始时left=0；right=数组长度*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = snack[left].gra;
    while(i != j){
        while(i < j && key.gra >= snack[j].gra)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.gra <= snack[i].gra)/*从左向右找第一个大于key的数*/
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
    Sortsnackgra(left,i-1);/*递归调用*/
    Sortsnackgra(i+1,right);
}

void Sortbarbecuegra(int left,int right){/*初始时left=0；right=数组长度*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = barbecue[left].gra;
    while(i != j){
        while(i < j && key.gra >= barbecue[j].gra)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.gra <= barbecue[i].gra)/*从左向右找第一个大于key的数*/
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
    Sortbarbecuegra(left,i-1);/*递归调用*/
    Sortbarbecuegra(i+1,right);
}

void Sortselfhelpgra(int left,int right){/*初始时left=0；right=数组长度*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = selfhelp[left].gra;
    while(i != j){
        while(i < j && key.gra >= selfhelp[j].gra)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.gra <= selfhelp[i].gra)/*从左向右找第一个大于key的数*/
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
    Sortselfhelpgra(left,i-1);/*递归调用*/
    Sortselfhelpgra(i+1,right);
}

void Sortcakegra(int left,int right){/*初始时left=0；right=数组长度*/
    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.gra = cake[left].gra;
    while(i != j){
        while(i < j && key.gra >= cake[j].gra)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.gra <= cake[i].gra)/*从左向右找第一个大于key的数*/
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
    Sortcakegra(left,i-1);/*递归调用*/
    Sortcakegra(i+1,right);
}

void SortsnackK(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = snack[left].K;
    while(i != j){
        while(i < j && key.K <= snack[j].K)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.K >= snack[i].K)/*从左向右找第一个大于key的数*/
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
    SortsnackK(left,i-1);/*递归调用*/
    SortsnackK(i+1,right);
}

void SortbarbecueK(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = barbecue[left].K;
    while(i != j){
        while(i < j && key.K <= barbecue[j].K)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.K >= barbecue[i].K)/*从左向右找第一个大于key的数*/
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
    SortbarbecueK(left,i-1);/*递归调用*/
    SortbarbecueK(i+1,right);
}

void SortselfhelpK(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = selfhelp[left].K;
    while(i != j){
        while(i < j && key.K <= selfhelp[j].K)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.K >= selfhelp[i].K)/*从左向右找第一个大于key的数*/
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
    SortselfhelpK(left,i-1);/*递归调用*/
    SortselfhelpK(i+1,right);
}

void SortcakeK(int left,int right){/*初始时left=0；right=数组长度*/


    if(left > right) return ;
    int i = left,j = right;
    Rest key;
    Rest t;
    key.K = cake[left].K;
    while(i != j){
        while(i < j && key.K <= cake[j].K)/*从右向左找第一个小于等于key的数*/
            j--;

        while(i < j && key.K >= cake[i].K)/*从左向右找第一个大于key的数*/
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
    SortcakeK(left,i-1);/*递归调用*/
    SortcakeK(i+1,right);
}

void Initialize(){/*初始化*/
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

void read1(){/*读入快餐名字*/
	FILE *fp;
	fp=fopen("快餐名字.txt","r");
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

void read2(){/*读入快餐价格*/
	FILE *fp;
	fp=fopen("快餐价格.txt","r");
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

void read3(){/*读入快餐评分*/
	FILE *fp;
	fp=fopen("快餐评分.txt","r");
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

void read4(){/*读入快餐距离*/
	FILE *fp;
	fp=fopen("快餐距离.txt","r");
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

void read5(){/*读入火锅名字*/
	FILE *fp;
	fp=fopen("火锅名字.txt","r");
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

void read6(){/*读入火锅价格*/
	FILE *fp;
	fp=fopen("火锅价格.txt","r");
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

void read7(){/*读入火锅评分*/
	FILE *fp;
	fp=fopen("火锅评分.txt","r");
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

void read8(){/*读入火锅距离*/
	FILE *fp;
	fp=fopen("火锅距离.txt","r");
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

void read9(){/*读入自助名字*/
	FILE *fp;
	fp=fopen("自助名字.txt","r");
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

void read10(){/*读入自助价格*/
	FILE *fp;
	fp=fopen("自助价格.txt","r");
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

void read11(){/*读入自助评分*/
	FILE *fp;
	fp=fopen("自助评分.txt","r");
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

void read12(){/*读入自助距离*/
	FILE *fp;
	fp=fopen("自助距离.txt","r");
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

void read13(){/*读入蛋糕名字*/
	FILE *fp;
	fp=fopen("蛋糕名字.txt","r");
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

void read14(){/*读入蛋糕价格*/
	FILE *fp;
	fp=fopen("蛋糕价格.txt","r");
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

void read15(){/*读入蛋糕评分*/
	FILE *fp;
	fp=fopen("蛋糕评分.txt","r");
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

void read16(){/*读入蛋糕距离*/
	FILE *fp;
	fp=fopen("蛋糕距离.txt","r");
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

void Read(){/*读入是所有数据*/
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
            printf("店名：");
            for(int j=0;j<50;j++){
                printf("%c",snack[i].name[j]);
                if(snack[i].name[j+1] == '\n')
                    break;
            }
        printf("\n价格：%.2f元 评分：%.2f分 距离：%d米\n\n",snack[i].pri,snack[i].gra,snack[i].dis);
    }
    SetColor(12,0);
    printf("已全部显示！\n");
    SetColor(7,0);//恢复为黑底白字。。
}

void Print2(){
    for(int i=1;i<QT;i++){
        if(i%9==0)
            system("pause");
        printf("店名：");
        for(int j=0;j<50;j++){
            printf("%c",barbecue[i].name[j]);
            if(barbecue[i].name[j+1]=='\n')
                    break;
        }
        printf("\n价格：%.2f元 评分：%.2f分 距离：%d米\n\n",barbecue[i].pri,barbecue[i].gra,barbecue[i].dis);
    }
    SetColor(12,0);
    printf("已全部显示！\n");
    SetColor(7,0);//恢复为黑底白字。。
}

void Print3(){
   for(int i=1;i<ZZ;i++){
         if(i%9==0)
            system("pause");
        printf("店名：");
        for(int j=0;j<50;j++){
            printf("%c",selfhelp[i].name[j]);
            if(selfhelp[i].name[j+1]=='\n')
                    break;
        }
        printf("\n价格：%.2f元 评分：%.2f分 距离：%d米\n\n",selfhelp[i].pri,selfhelp[i].gra,selfhelp[i].dis);
    }
    SetColor(12,0);
    printf("已全部显示！\n");
    SetColor(7,0);//恢复为黑底白字。。
}

void Print4(){
    for(int i=1;i<QT;i++){
        if(i%9==0)
            system("pause");
        printf("店名：");
        for(int j=0;j<50;j++){
            printf("%c",cake[i].name[j]);
            if(cake[i].name[j+1]=='\n')
                    break;
        }
        printf("\n价格：%.2f元 评分：%.2f分 距离：%d米\n\n",cake[i].pri,cake[i].gra,cake[i].dis);
    }
    SetColor(12,0);
    printf("已全部显示！\n");
    SetColor(7,0);//恢复为黑底白字。。
}

void SetColor(unsigned short ForeColor,unsigned short BackGroundColor){/*改变单句话颜色*/
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
