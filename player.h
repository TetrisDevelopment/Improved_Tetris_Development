#include<iostream>

#ifndef _BLOCK
#include "block.h"
#endif

class Player {
public:
    Player();//初始化玩家
    int getPoint();//获取玩家目前分数
    void setPlayerName(std::string name);//设置玩家名字
    bool getStatus();// 获取玩家目前状态
    std::string getName();// 获取玩家名字
    Block getNowBlock();// 获取目前方块
    Block getNextBlock();// 获取下一个方块
    bool addBlock(int num);//底部随机增加一行带空格的
    bool detectCollision(Block block, int x, int y);//检测碰撞：包含方块和方块，方块和边界
    int detectReductsion();//检测消行：有加分功能
    void detectIsFail();// 检测顶部是否有方块
    void leftMoveBlock();//左移方块
    void rightMoveBlock();//右移方块
    bool moveDownBlock();//方块下落
    void turnBlock();// 方块旋转
    void setColor();//设置颜色
    void makeNewBlock();
    int map[20][10];//游戏区域
    int getX();
    int getY();
    void restartPlayer();
private:
    std::string name;//玩家名字
    int point;//得分
    Block tempBlock;//临时方块
    Block blockNow;//现在的方块
    int posX;
    int posY;// x,y用于做方块的定位，标记左上角方块
    Block blockNext;//下一个方块
    bool fail;//是否失败
};

// 调用方法
// 定义玩家实例时自动初始化 PosX、PosY、blockNow随机生成方块、blockNext生成方块
// 游戏进行顺序：
//     1.方块下落:包含检测方块是否碰撞，如碰撞返回false
//     2.方块左移:包含碰撞检测，无返回值，即发生碰撞不会执行posY的定位
//     3.方块右移:包含碰撞检测，无返回值，即发生碰撞不会执行posY的定位
//     4.旋转方块:包含碰撞检测，无返回值，即发生碰撞不会调用blockNow.TurnBlock()
//     5.若方块下落发生碰撞，需要调用detectReductsion()，会自动加分 -> 考虑加入难度，增加分值不同
//     6.碰撞后生成新方块，自动检测生成的新方块是否碰撞，若发生则将fail设置为true，所以在生成新方块后需要调用getStatus()检测状态
// 玩家的信息设置和获取：
//     1.int getPoint()                        :获取玩家目前分数
//     2.void setPlayerName(std::string name)  :设置玩家名字
//     3.bool getStatus()                      :获取玩家目前状态
//     4.std::string getName()                 :获取玩家名字
//     5.Block getNowBlock()                   :获取目前方块
//     6.Block getNextBlock()                  :获取下一个方块

