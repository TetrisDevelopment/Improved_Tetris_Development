#include <windows.h>
#include<string>
#include"block.h"
using namespace std;
class Interface {
public:
    Interface(){ //���������
       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    }
    void initialWindow();//��ʼ������
    void initialCovor();//���Ƴ�ʼ����
    void initialViewOnePlayer();//��ʼ��map
    void initialViewTwoPlayer();//��ʼ��map
    void printPointPlayer1(int point);//��ʾ���1����
    void printPointPlayer2(int point);//��ʾ���2����
    void printNamePlayer1(string name);//��ʾ���1����
    void printNamePlayer2(string name);//��ʾ���2����
    void gotoXY(int x, int y);//��λ���
    void player1Victory();//���ʤ��Ч��
    void player2Victory();//���ʤ��Ч��
    void drawNextBlock1(Block t);//����һ������
    void drawNextBlock2(Block t);
    void drawNowBlock1(Block t,int x,int y);//��������Ϸ���ڵķ���
    void drawNowBlock2(Block t,int x,int y);
    /*void deleteBlock1(int block[4][4],int x, int y);//����Ϸ�����Ѵ�ӡ��������
    void deleteBlock2(int block[4][4],int x, int y);*/
    void clearMap1(int map[20][10]);//��map���
    void clearMap2(int map[20][10]);
    void printMap1(int map[20][10]);//��ӡmap
    void printMap2(int map[20][10]);
    void clearVictory1();//����ʤ����־
    void clearVictory2();
    static int vic[6][5];
private:
    HANDLE hOut;
};
//����ģʽ��˫��ģʽplayer1������1ϵ�к���
//˫��ģʽplayer2����2ϵ�к���

