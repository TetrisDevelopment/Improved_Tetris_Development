#include "player.h"
#include "block.h"
#include <cstring>
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
    if(name.size()<=6) {
        this->name=name;
    }
    else {
        ;
    }
}

//�����ҷ���
int Player::getPoint() {
    return point;
}

//�����ײ��
bool Player::detectCollision(Block block, int x, int y) {
    //������ײ����false
    //δ��������true
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
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