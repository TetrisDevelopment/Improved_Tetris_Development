#include<iostream>
#include "block.h"
class Player {
public:
    Player();//��ʼ�����
    int getPoint();//��ȡ���Ŀǰ����
    void setPlayerName(std::string name);//�����������
    bool getStatus();// ��ȡ���Ŀǰ״̬
    std::string getName();// ��ȡ�������
    void addBlock(int num);//�ײ��������һ�д��ո��
    bool detectCollision(Block block, int x, int y);//�����ײ����������ͷ��飬����ͱ߽�
    int detectReductsion();//������У�Ҫ�мӷֹ���
    void leftMoveBlock();//���Ʒ���
    void rightMoveBlock();//���Ʒ���
    void moveDownBlock();//��������
    void turnBlock();// ������ת
    void setColor();//������ɫ
    
    int map[20][10];//��Ϸ����
private:
    std::string name;//�������
    int point;//�÷�
    Block tempBlock;//��ʱ����
    Block blockNow;//���ڵķ���
    int posX;
    int posY;// x,y����������Ķ�λ��������ϽǷ���
    Block blockNext;//��һ������
    bool fail;//�Ƿ�ʧ��
};
