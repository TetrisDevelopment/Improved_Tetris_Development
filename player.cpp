#include "player.h"
#include <cstring>
#include <cstdlib>
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
    if(name.size() <= 6) {
        this->name = name;
    }
    else {
        ;
    }
}

//获得玩家分数
int Player::getPoint() {
    return point;
}

// 获取玩家状态
bool Player::getStatus() {
    if(fail) {
        return false;
    }
    else {
        return true;
    }
}

//获取玩家名字
string Player::getName() {
    return name;
}

//获取目前方块
Block Player::getNowBlock() {
    return blockNow;
}

//获取下一个方块
Block Player::getNextBlock() {
    return blockNext;
}

//检测碰撞
bool Player::detectCollision(Block block, int x, int y) {
    //发生碰撞返回false
    //未发生返回true
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            // 如果检测到block中该位置为1的话
            // 先检测这个位置是否越界
            // 再检测这个位置对应的map位置是否也为1
            if(block.block[i][j]==1) {
                if(x + i >= 20 || y + j < 0 || y + j >= 10) {
                    return false;
                }
                else if(map[x+i][y+j]==1) {
                    return false;
                }
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
// 如发生碰撞就填充map
// 返回值：true代表发生碰撞
//       false代表未发生碰撞
bool Player::moveDownBlock() {
    if(detectCollision(blockNow, this->posX+1, this->posY)) {
        this->posX++;
        return false;
    }
    else {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                if(posX + i >= 0 && posY + j >= 0 && posX + i < 20 && posY + j < 20 && blockNow.block[i][j] == 1) {
                    map[posX+i][posY+j]=1;
                }
            }
        }
        return true;
    }
}

//消除方块
int Player::detectReductsion() {
    // 记录消去的行数
    int count = 0;
    for(int i = 19; i >= 0; i--) {
        // 记录单行的方块个数
        int tempcount = 0;
        for(int j = 0; j < 10; j++) {
            if(map[i][j]==1) {
                tempcount++;
            }
        }
        if(tempcount == 10) {
            // 增加分数
            point+=100;
            // 增加消除行数
            count++;
            // 移动上面的行
            for(int k=i;k>=1;k--) {
                for(int j=0;j<10;j++) {
                    map[k][j]=map[k-1][j];
                }
            }
        }
    }
    return count;
}

// 方块旋转
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

// 方块增加
void Player::addBlock(int num) {
    for(int i=0;i<num;i++) {
        // 检测顶部
        for(int j=0;j<10;j++) { 
            if(map[0][j]==1 && i!=num-1) {
                fail = true;
                return;
            }
        }
        // 移动下面行
        for(int m=0; m<19; m++) {
            for(int n=0; n<10; n++) {
                map[m][n] = map[m+1][n];
            }
        }
        // 底部清零
        for(int j=0; j<10; j++) {
            map[19][j] = 0;
        }
        // 底部随机增加
         
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

// 生成新方块方块
void Player::makeNewBlock() {
    // 确定posX和posY
    // 新方块的赋值
    // 下一个方块的生成
    posX=-3;
    posY=4;
    blockNow = blockNext;
    blockNext.RandBlock();
    if(detectCollision(blockNow, posX, posY)) {
        fail = true;
    }
}

int Player::getX() {
    return posX;
}


int Player::getY() {
    return posY;
}