#include<iostream>
#include "block.h"
class Player {
public:
    Player();//��ʼ�����
    int getPoint();//��ȡ���Ŀǰ����
    void addBlock();//�ײ��������һ�д��ո��
    bool detectCollision(Block block, int x, int y);//�����ײ����������ͷ��飬����ͱ߽�
    void detectReductsion();//������У�Ҫ�мӷֹ���
    void leftMoveBlock();//���Ʒ���
    void rightMoveBlock();//���Ʒ���
    void moveDownBlock();//��������
    void setColor();//������ɫ
    void getMap();//��������map
    void setPlayerName(std::string name);//�����������
private:
    std::string name;//�������
    int point;//�÷�
    Block tempBlock;//��ʱ����
    Block blockNow;//���ڵķ���
    int posX;
    int posY;// x,y����������Ķ�λ��������ϽǷ���
    Block blockNext;//��һ������
    int map[20][10];//��Ϸ����
    bool fail;//�Ƿ�ʧ��
};
