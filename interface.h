#include <windows.h>
#include<string>
using namespace std;
class Interface {
public:
    void initialWindow(HANDLE hOut);//��ʼ������
    void initialViewOnePlayer(HANDLE hOut);//��ʼ��map
    void initialViewTwoPlayer(HANDLE hOut);//��ʼ��map
    void printPointPlayer1(HANDLE hOut,int point);//��ʾ���1����
    void printPointPlayer2(HANDLE hOut,int point);//��ʾ���2����
    void printNamePlayer1(HANDLE hOut,string name);//��ʾ���1����
    void printNamePlayer2(HANDLE hOut,string name);//��ʾ���2����
    void gotoXY(HANDLE hOut, int x, int y);//��λ���
    void player1Victory(HANDLE hOut);//���ʤ��Ч��
    void player2Victory(HANDLE hOut);//���ʤ��Ч��
    void drawNextBlock1(HANDLE hOut,int block[4][4],int color);//����һ������
    void drawNextBlock2(HANDLE hOut,int block[4][4],int color);
    void drawNowBlock1(HANDLE hOut,int block[4][4],int x,int y,int color);//��������Ϸ���ڵķ���
    void drawNowBlock2(HANDLE hOut,int block[4][4],int x,int y,int color);
    void deleteBlock1(HANDLE hOut,int block[4][4],int x, int y);//����Ϸ�����Ѵ�ӡ��������
    void deleteBlock2(HANDLE hOut,int block[4][4],int x, int y);
    static int vic[6][5];
private:

};
//����ģʽ��˫��ģʽplayer1������1ϵ�к���
//˫��ģʽplayer2����2ϵ�к���

