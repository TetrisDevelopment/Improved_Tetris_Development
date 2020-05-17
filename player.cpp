#include "player.h"
#include "block.h"
#include <cstring>
using namespace std;

// 初始化玩家
Player::Player() {
    point = 0;
    fail = false;
    memset(map, 0, sizeof(map));
    blockNow.RandBlock();
    blockNext.RandBlock();
    name = "玩家";
    posX=-3;
    posY=4;
}

// 设置名字
void Player::setPlayerName(string name) {
    if(name.size()<=6) {
        this->name=name;
    }
    else {
        ;
    }
}

//获得玩家分数
int Player::getPoint() {
    return point;
}

//检测碰撞：
bool Player::detectCollision(Block block, int x, int y) {
    //发生碰撞返回false
    //未发生返回true
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            // 如果方块定位点在map范围内且block[4][4]和map[4][4]都为1，说明发生碰撞
            if (x + i >= 0 && y + j >= 0 && map[x + i][y + j] == 1 && block.block[i][j] == 1) {
                return false;
            }
        }
    }
    return true;
}

// 方块左移
void Player::leftMoveBlock() {
    if(detectCollision(blockNow, this->posX, this->posY-1)) {
        this->posY--;
    }
}

// 方块右移
void Player::rightMoveBlock() {
    if(detectCollision(blockNow, this->posX, this->posY+1)) {
        this->posY++;
    }
}

// 方块下移
void Player::rightMoveBlock() {
    if(detectCollision(blockNow, this->posX+1, this->posY)) {
        this->posX++;
    }
    else {
        detectReductsion();
    }
}