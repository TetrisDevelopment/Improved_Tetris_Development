#include"interface.h"
#include<iostream>
#include <conio.h>                  //����
using namespace std;
void initialWindow(HANDLE hOut)
{
    COORD size = {100, 30};
    SetConsoleScreenBufferSize(hOut, size);//����ָ����������С
    SMALL_RECT rect = {0, 0, 99, 29};
    SetConsoleWindowInfo(hOut, true, &rect);//���ÿ���̨������Ϣ
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};//�����Ϣ
    SetConsoleCursorInfo(hOut, &cursor_info);//���ù�겻�ɼ�
    SetConsoleTitle("����˹");//���ÿ���̨���ڱ���
}
void gotoXY(HANDLE hOut, int x, int y){
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut, pos);//���ù��λ��
}
void initialViewOnePlayer(HANDLE hOut){
    SetConsoleTextAttribute(hOut,15);//����Ϊ��ɫ
    for(int i=0;i<20;i++){
        cout<<"                    ��                    ��"<<endl;
    }
    gotoXY(hOut,0,20);
    cout<<"                    ������������������������"<<endl;
    gotoXY(hOut,0,0);
    cout<<"����ң�"<<endl<<endl;
    cout<<"���ȼ���"<<endl<<endl;
    cout<<"����һ�����飺"<<endl;
    gotoXY(hOut,0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"����ʾ��"<<endl<<endl;
    cout<<"W��ת�����鳯��"<<endl;
    cout<<"S�����ٷ�������"<<endl;
    cout<<"A�����Ʒ��������ƶ�"<<endl;
    cout<<"D�����Ʒ��������ƶ�"<<endl;  
    cout<<"[ �ո� ]����ͣ��Ϸ"<<endl;
    cout<<"X�����¿�ʼ��Ϸ "<<endl;
    gotoXY(hOut,0,23);
    SetConsoleTextAttribute(hOut,12);
    cout<<"��������ģʽ����"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By ���˶ ���� �ڼ���"<<endl;
}
void initialViewTwoPlayer(HANDLE hOut){
    SetConsoleTextAttribute(hOut,15);//����Ϊ��ɫ
    for(int i=0;i<20;i++){
        cout<<"                    ��                    ��                     ��                    ��"<<endl;
    }
    gotoXY(hOut,0,20);
    cout<<"                    ������������������������                     ������������������������"<<endl;
    gotoXY(hOut,0,0);
    cout<<"�����1��"<<endl<<endl;
    cout<<"���ȼ���"<<endl<<endl;
    cout<<"����һ�����飺"<<endl;
    gotoXY(hOut,0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"����ʾ��"<<endl<<endl;
    cout<<"W��ת�����鳯��"<<endl;
    cout<<"S�����ٷ�������"<<endl;
    cout<<"A�����Ʒ��������ƶ�"<<endl;
    cout<<"D�����Ʒ��������ƶ�"<<endl;  
    cout<<"[ �ո� ]����ͣ��Ϸ"<<endl;
    cout<<"X�����¿�ʼ��Ϸ "<<endl;
    SetConsoleTextAttribute(hOut,15);
    gotoXY(hOut,44,0);
    cout<<"�����2��"<<endl<<endl;
    gotoXY(hOut,44,2);
    cout<<"���ȼ���"<<endl<<endl;
    gotoXY(hOut,44,4);
    cout<<"����һ�����飺"<<endl;
    SetConsoleTextAttribute(hOut,14);
    gotoXY(hOut,44,11);
    cout<<"����ʾ��";
    gotoXY(hOut,44,13);
    cout<<"����ת�����鳯��";
    gotoXY(hOut,44,14);
    cout<<"�������ٷ�������";
    gotoXY(hOut,44,15);
    cout<<"�������Ʒ��������ƶ�";
    gotoXY(hOut,44,16);
    cout<<"�������Ʒ��������ƶ�";  
    gotoXY(hOut,44,17);
    cout<<"[ �ո� ]����ͣ��Ϸ";
    gotoXY(hOut,44,18);
    cout<<"X�����¿�ʼ��Ϸ "<<endl;
    gotoXY(hOut,0,23);
    SetConsoleTextAttribute(hOut,12);
    cout<<"����˫��ģʽ����"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By ���˶ ���� �ڼ���"<<endl;    
}

void drawBlock(HANDLE hOut, int block[4][4], int x, int y){}


