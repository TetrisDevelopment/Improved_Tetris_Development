#include<iostream>

#ifndef _BLOCK
#include "block.h"
#endif

class Player {
public:
    Player();//��ʼ�����
    int getPoint();//��ȡ���Ŀǰ����
    void setPlayerName(std::string name);//�����������
    bool getStatus();// ��ȡ���Ŀǰ״̬
    std::string getName();// ��ȡ�������
    Block getNowBlock();// ��ȡĿǰ����
    Block getNextBlock();// ��ȡ��һ������
    bool addBlock(int num);//�ײ��������һ�д��ո��
    bool detectCollision(Block block, int x, int y);//�����ײ����������ͷ��飬����ͱ߽�
    int detectReductsion();//������У��мӷֹ���
    void detectIsFail();// ��ⶥ���Ƿ��з���
    void leftMoveBlock();//���Ʒ���
    void rightMoveBlock();//���Ʒ���
    bool moveDownBlock();//��������
    void turnBlock();// ������ת
    void setColor();//������ɫ
    void makeNewBlock();
    int map[20][10];//��Ϸ����
    int getX();
    int getY();
    void restartPlayer();
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

// ���÷���
// �������ʵ��ʱ�Զ���ʼ�� PosX��PosY��blockNow������ɷ��顢blockNext���ɷ���
// ��Ϸ����˳��
//     1.��������:������ⷽ���Ƿ���ײ������ײ����false
//     2.��������:������ײ��⣬�޷���ֵ����������ײ����ִ��posY�Ķ�λ
//     3.��������:������ײ��⣬�޷���ֵ����������ײ����ִ��posY�Ķ�λ
//     4.��ת����:������ײ��⣬�޷���ֵ����������ײ�������blockNow.TurnBlock()
//     5.���������䷢����ײ����Ҫ����detectReductsion()�����Զ��ӷ� -> ���Ǽ����Ѷȣ����ӷ�ֵ��ͬ
//     6.��ײ�������·��飬�Զ�������ɵ��·����Ƿ���ײ����������fail����Ϊtrue�������������·������Ҫ����getStatus()���״̬
// ��ҵ���Ϣ���úͻ�ȡ��
//     1.int getPoint()                        :��ȡ���Ŀǰ����
//     2.void setPlayerName(std::string name)  :�����������
//     3.bool getStatus()                      :��ȡ���Ŀǰ״̬
//     4.std::string getName()                 :��ȡ�������
//     5.Block getNowBlock()                   :��ȡĿǰ����
//     6.Block getNextBlock()                  :��ȡ��һ������

