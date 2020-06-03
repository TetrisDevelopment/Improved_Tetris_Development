#include"interface.h"
#include<iostream>
#include <conio.h>                  //����
using namespace std;
int Interface::vic[6][5]={ {0,0,1,0,0},
                {0,1,1,1,0},
                {1,1,1,1,1},
                {0,1,0,1,0},
                {0,0,1,0,0},
                {0,0,1,0,0}};
void Interface::initialWindow()
{
    COORD size = {100, 30};
    SetConsoleScreenBufferSize(hOut, size);//����ָ����������С
    SMALL_RECT rect = {0, 0, 99, 29};
    SetConsoleWindowInfo(hOut, true, &rect);//���ÿ���̨������Ϣ
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};//�����Ϣ
    SetConsoleCursorInfo(hOut, &cursor_info);//���ù�겻�ɼ�
    SetConsoleTitle("����˹");//���ÿ���̨���ڱ���
}
void Interface::gotoXY(int x, int y){
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut, pos);//���ù��λ��
}
void Interface::initialViewOnePlayer(){
    SetConsoleTextAttribute(hOut,15);//����Ϊ��ɫ
    for(int i=0;i<20;i++){
        cout<<"                    ��                    ��"<<endl;
    }
    gotoXY(0,20);
    cout<<"                    ������������������������"<<endl;
    gotoXY(0,0);
    cout<<"����ң�"<<endl<<endl;
    cout<<"��������"<<endl<<endl;
    cout<<"����һ�����飺"<<endl;
    gotoXY(0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"����ʾ��"<<endl<<endl;
    cout<<"W��ת�����鳯��"<<endl;
    cout<<"S�����ٷ�������"<<endl;
    cout<<"A�����Ʒ��������ƶ�"<<endl;
    cout<<"D�����Ʒ��������ƶ�"<<endl;  
    cout<<"[ �ո� ]����ͣ��Ϸ"<<endl;
    cout<<"X�����¿�ʼ��Ϸ "<<endl;
    gotoXY(0,23);
    SetConsoleTextAttribute(hOut,12);
    cout<<"��������ģʽ����"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By ���˶ ���� �ڼ���"<<endl;
}
void Interface::initialViewTwoPlayer(){
    SetConsoleTextAttribute(hOut,15);//����Ϊ��ɫ
    for(int i=0;i<20;i++){
        cout<<"                    ��                    ��                     ��                    ��"<<endl;
    }
    gotoXY(0,20);
    cout<<"                    ������������������������                     ������������������������"<<endl;
    gotoXY(0,0);
    cout<<"�����1��"<<endl<<endl;
    cout<<"��������"<<endl<<endl;
    cout<<"����һ�����飺"<<endl;
    gotoXY(0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"����ʾ��"<<endl<<endl;
    cout<<"W��ת�����鳯��"<<endl;
    cout<<"S�����ٷ�������"<<endl;
    cout<<"A�����Ʒ��������ƶ�"<<endl;
    cout<<"D�����Ʒ��������ƶ�"<<endl;  
    cout<<"[ �ո� ]����ͣ��Ϸ"<<endl;
    cout<<"X�����¿�ʼ��Ϸ "<<endl;
    SetConsoleTextAttribute(hOut,15);
    gotoXY(44,0);
    cout<<"�����2��"<<endl<<endl;
    gotoXY(44,2);
    cout<<"��������"<<endl<<endl;
    gotoXY(44,4);
    cout<<"����һ�����飺"<<endl;
    SetConsoleTextAttribute(hOut,14);
    gotoXY(44,11);
    cout<<"����ʾ��";
    gotoXY(44,13);
    cout<<"����ת�����鳯��";
    gotoXY(44,14);
    cout<<"�������ٷ�������";
    gotoXY(44,15);
    cout<<"�������Ʒ��������ƶ�";
    gotoXY(44,16);
    cout<<"�������Ʒ��������ƶ�";  
    gotoXY(44,17);
    cout<<"[ �ո� ]����ͣ��Ϸ";
    gotoXY(44,18);
    cout<<"X�����¿�ʼ��Ϸ "<<endl;
    gotoXY(0,23);
    SetConsoleTextAttribute(hOut,11);
    cout<<"����˫��ģʽ����"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By ���˶ ���� �ڼ���"<<endl;    
}
void Interface::printNamePlayer1(string name){//��ʾ���1����
    SetConsoleTextAttribute(hOut,15);
    gotoXY(9,0);                        
    cout<<name<<endl;
     
}
void Interface::printNamePlayer2(string name){//��ʾ���2����
    SetConsoleTextAttribute(hOut,15); 
    gotoXY(53,0);                        
    cout<<name<<endl;

}
void Interface::printPointPlayer1(int point){ //��ʾ���1����
    SetConsoleTextAttribute(hOut,15);
    gotoXY(8,2);
    cout<<"   "<<endl; 
    gotoXY(8,2);                                  
    cout<<point<<endl;                         
};
 void Interface::printPointPlayer2(int point){ //��ʾ���2����
    SetConsoleTextAttribute(hOut,15);
    gotoXY(52,2);
    cout<<"   "<<endl; 
    gotoXY(52,2);
    cout<<point<<endl;
 }
void Interface::player1Victory(){
    gotoXY(26,22);
    SetConsoleTextAttribute(hOut,12);
    for(int i=0;i<2;i++){
        gotoXY(26,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }
    gotoXY(26,24);
    SetConsoleTextAttribute(hOut,14);
    cout<<"��";
    SetConsoleTextAttribute(hOut,12);
    cout<<"������";
    SetConsoleTextAttribute(hOut,14);
    cout<<"��"<<endl;
    for(int i=3;i<6;i++){
        gotoXY(26,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }   
}
void Interface::player2Victory(){
    gotoXY(71,22);
    SetConsoleTextAttribute(hOut,12);
    for(int i=0;i<2;i++){
        gotoXY(71,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }
    gotoXY(71,24);
    SetConsoleTextAttribute(hOut,14);
    cout<<"��";
    SetConsoleTextAttribute(hOut,12);
    cout<<"������";
    SetConsoleTextAttribute(hOut,14);
    cout<<"��"<<endl;
    for(int i=3;i<6;i++){
        gotoXY(71,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"��";
        }
        cout<<endl;
    }   
}
void Interface::drawNextBlock1(int block[4][4],int color){
    for(int i=0;i<4;i++){
        gotoXY(2,6+i);
        for(int j=0;j<4;j++){
            cout<<"  ";
        }
    }
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        gotoXY(2,6+i);
        for(int j=0;j<4;j++){
            if(block[i][j]==1)cout<<"��";
            else cout<<"  ";
        }
    }
};//����һ������
void Interface::drawNextBlock2(int block[4][4],int color){
    for(int i=0;i<4;i++){
        gotoXY(46,6+i);
        for(int j=0;j<4;j++){
            cout<<"  ";
        }
    }
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        gotoXY(46,6+i);
        for(int j=0;j<4;j++){
            if(block[i][j]==1)cout<<"��";
            else cout<<"  ";
        }
    }
};
void Interface::drawNowBlock1(int block[4][4],int x,int y,int color){
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(2*(y+j)+22,x+i);
            cout << "��";
            }
        }
    }
};//��������Ϸ���ڵķ���
void Interface::drawNowBlock2(int block[4][4],int x,int y,int color){
    SetConsoleTextAttribute(hOut,color);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(2*(y+j)+67,x+i);
            cout << "��";
            }
        }
    }
};
void Interface::deleteBlock1(int block[4][4],int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(2*(y+j)+22,x+i);
            cout <<"  ";
            }
        }
    }
};//����Ϸ�����Ѵ�ӡ��������
void Interface::deleteBlock2(int block[4][4],int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1){ 
            gotoXY(2*(y+j)+67,x+i);
            cout <<"  ";
            }
        }
    }
};


