#include <windows.h>
class Interface {
public:
    void initialWindow(HANDLE hOut);//��ʼ������
    void initialViewOnePlayer(HANDLE hOut);//��ʼ��map
    void initialViewTwoPlayer(HANDLE hOut);//��ʼ��map
    void drawBlock();//�����飺���뷽������Ͻ�����ͷ���4*4������ʵ�ֻ�����,ֻҪû����ײ������Ϳ��Ի�
    void printPointPlayer1(HANDLE hOut,int point);//��ʾ���1����
    void printPointPlayer2(HANDLE hOut,int point);//��ʾ���2����
    void gotoXY(HANDLE hOut, int x, int y);//��λ���
    void playerVictory();//���ʤ��Ч��
private:

};


