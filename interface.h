#include <windows.h>
#include<string>
using namespace std;
class Interface {
public:
    Interface(){
       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    }
    void initialWindow();//��ʼ������
    void initialViewOnePlayer();//��ʼ��map
    void initialViewTwoPlayer();//��ʼ��map
    void printPointPlayer1(int point);//��ʾ���1����
    void printPointPlayer2(int point);//��ʾ���2����
    void printNamePlayer1(string name);//��ʾ���1����
    void printNamePlayer2(string name);//��ʾ���2����
    void gotoXY(int x, int y);//��λ���
    void player1Victory();//���ʤ��Ч��
    void player2Victory();//���ʤ��Ч��
    void drawNextBlock1(int block[4][4],int color);//����һ������
    void drawNextBlock2(int block[4][4],int color);
    void drawNowBlock1(int block[4][4],int x,int y,int color);//��������Ϸ���ڵķ���
    void drawNowBlock2(int block[4][4],int x,int y,int color);
    void deleteBlock1(int block[4][4],int x, int y);//����Ϸ�����Ѵ�ӡ��������
    void deleteBlock2(int block[4][4],int x, int y);
    static int vic[6][5];
private:
    HANDLE hOut;
};
//����ģʽ��˫��ģʽplayer1������1ϵ�к���
//˫��ģʽplayer2����2ϵ�к���

