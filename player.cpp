#include "player.h"
#include "block.h"
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

// ��ʼ�����
Player::Player() {
    point = 0;
    fail = false;
    memset(map, 0, sizeof(map));
    blockNow.RandBlock();
    blockNext.RandBlock();
    name = "���";
    posX=-3;
    posY=4;
}

// ��������
void Player::setPlayerName(string name) {
    if(name.size() <= 6) {
        this->name = name;
    }
    else {
        ;
    }
}

//�����ҷ���
int Player::getPoint() {
    return point;
}

// ��ȡ���״̬
bool Player::getStatus() {
    if(fail) {
        return false;
    }
    else {
        return true;
    }
}

//��ȡ�������
string Player::getName() {
    return name;
}

//�����ײ��
bool Player::detectCollision(Block block, int x, int y) {
    //������ײ����false
    //δ��������true
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            // ������鶨λ����map��Χ����block[4][4]��map[4][4]��Ϊ1��˵��������ײ
            if (x + i >= 0 && y + j >= 0 && map[x + i][y + j] == 1 && block.block[i][j] == 1) {
                return false;
            }
        }
    }
    return true;
}

// ��������
void Player::leftMoveBlock() {
    if(detectCollision(blockNow, this->posX, this->posY-1)) {
        this->posY--;
    }
}

// ��������
void Player::rightMoveBlock() {
    if(detectCollision(blockNow, this->posX, this->posY+1)) {
        this->posY++;
    }
}

// ��������
void Player::rightMoveBlock() {
    if(detectCollision(blockNow, this->posX+1, this->posY)) {
        this->posX++;
    }
    else {
        detectReductsion();
    }
}

//��������
int Player::detectReductsion() {
    // ��¼��ȥ������
    int count = 0;
    for(int i = 19; i >= 0; i--) {
        // ��¼���еķ������
        int tempcount = 0;
        for(int j = 0; i < 10; j++) {
            tempcount++;
        }
        if(tempcount == 10) {
            // ���ӷ���
            point+=100;
            // ������������
            count++;
            // �ƶ��������
            for(int k=i;k>=1;k--) {
                for(int j=0;j<10;j++) {
                    map[k][j]=map[k-1][j];
                }
            }
        }
    }
    return count;
}

// ������ת
void Player::turnBlock() {
    tempBlock = blockNow;
    blockNow.TurnBlock();
    if(detectCollision(blockNow, posX, posY)) {
        return; 
    }
    else {
        blockNow = tempBlock;
    }
}

// ��������
void Player::addBlock(int num) {
    for(int i=0;i<num;i++) {
        // ��ⶥ��
        for(int j=0;j<10;j++) { 
            if(map[0][j]==1 && i!=num-1) {
                fail = true;
                return;
            }
        }
        // �ƶ�������
        for(int m=0; m<19; m++) {
            for(int n=0; n<10; n++) {
                map[m][n] = map[m+1][n];
            }
        }
        // �ײ�����
        for(int j=0; j<10; j++) {
            map[19][j] = 0;
        }
        // �ײ��������
        srand((unsigned)time(NULL)); 
        for(int j=0; j<10; j++) {
            map[19][rand()%10]++;
        }
        for(int j=0; j<10; j++) {
            if(map[19][j]) {
                map[19][j]=1;
            }
        }
    }
}