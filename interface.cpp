#include"interface.h"
#include<iostream>
#include <conio.h>                  //����
using namespace std;
int vic[6][5]={ {0,0,1,0,0},
                {0,1,1,1,0},
                {1,1,1,1,1},
                {0,1,0,1,0},
                {0,0,1,0,0},
                {0,0,1,0,0}};
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
    cout<<"��������"<<endl<<endl;
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
    cout<<"��������"<<endl<<endl;
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
    cout<<"��������"<<endl<<endl;
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
    SetConsoleTextAttribute(hOut,11);
    cout<<"����˫��ģʽ����"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By ���˶ ���� �ڼ���"<<endl;    
}
void printName1(HANDLE hOut,string name){//��ʾ���1����
    SetConsoleTextAttribute(hOut,15);
    gotoXY(hOut,9,0);                        
    cout<<name<<endl;
     
}
void printName2(HANDLE hOut,string name){//��ʾ���2����
    SetConsoleTextAttribute(hOut,15); 
    gotoXY(hOut,53,0);                        
    cout<<name<<endl;

}
void printPointPlayer1(HANDLE hOut,int point){ //��ʾ���1����
    SetConsoleTextAttribute(hOut,15);
    gotoXY(hOut,8,2);
    cout<<"   "<<endl; 
    gotoXY(hOut,8,2);                                  
    cout<<point<<endl;                         
};
 void printPointPlayer2(HANDLE hOut,int point){ //��ʾ���2����
    SetConsoleTextAttribute(hOut,15);
    gotoXY(hOut,52,2);
    cout<<"   "<<endl; 
    gotoXY(hOut,52,2);
    cout<<point<<endl;
 }
void player1Victory(HANDLE hOut){
    gotoXY(hOut,26,22);
    SetConsoleTextAttribute(hOut,12);
    for(int i=0;i<2;i++){
        gotoXY(hOut,26,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }
    gotoXY(hOut,26,24);
    SetConsoleTextAttribute(hOut,14);
    cout<<"��";
    SetConsoleTextAttribute(hOut,12);
    cout<<"������";
    SetConsoleTextAttribute(hOut,14);
    cout<<"��"<<endl;
    for(int i=3;i<6;i++){
        gotoXY(hOut,26,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }   
}
void player2Victory(HANDLE hOut){
    gotoXY(hOut,71,22);
    SetConsoleTextAttribute(hOut,12);
    for(int i=0;i<2;i++){
        gotoXY(hOut,71,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }
    gotoXY(hOut,71,24);
    SetConsoleTextAttribute(hOut,14);
    cout<<"��";
    SetConsoleTextAttribute(hOut,12);
    cout<<"������";
    SetConsoleTextAttribute(hOut,14);
    cout<<"��"<<endl;
    for(int i=3;i<6;i++){
        gotoXY(hOut,71,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }   
}
void drawNextBlock1(HANDLE hOut,int block[4][4],int color){
    for(int i=0;i<4;i++){
        gotoXY(hOut,2,6+i);
        for(int j=0;j<4;j++){
            cout<<"  ";
        }
    }
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        gotoXY(hOut,2,6+i);
        for(int j=0;j<4;j++){
            if(block[i][j]==1)cout<<"��";
            else cout<<"  ";
        }
    }
};//����һ������
void drawNextBlock2(HANDLE hOut,int block[4][4],int color){
    for(int i=0;i<4;i++){
        gotoXY(hOut,46,6+i);
        for(int j=0;j<4;j++){
            cout<<"  ";
        }
    }
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        gotoXY(hOut,46,6+i);
        for(int j=0;j<4;j++){
            if(block[i][j]==1)cout<<"��";
            else cout<<"  ";
        }
    }
};
void drawNowBlock1(HANDLE hOut,int block[4][4],int x,int y,int color){
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(hOut,2*(y+j)+22,x+i);
            cout << "��";
            }
        }
    }
};//��������Ϸ���ڵķ���
void drawNowBlock2(HANDLE hOut,int block[4][4],int x,int y,int color){
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(hOut,2*(y+j)+67,x+i);
            cout << "��";
            }
        }
    }
};
void deleteBlock1(HANDLE hOut,int block[4][4],int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(hOut,2*(y+j)+22,x+i);
            cout <<"  ";
            }
        }
    }
};//����Ϸ�����Ѵ�ӡ��������
void deleteBlock2(HANDLE hOut,int block[4][4],int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(hOut,2*(y+j)+67,x+i);
            cout <<"  ";
            }
        }
    }
};


