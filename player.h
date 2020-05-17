#include<iostream>
#include "block.h"
class Player {
public:
    Player();//初始化玩家
    int getPoint();//获取玩家目前分数
    void addBlock();//底部随机增加一行带空格的
    bool detectCollision(Block block, int x, int y);//检测碰撞：包含方块和方块，方块和边界
    void detectReductsion();//检测消行：要有加分功能
    void leftMoveBlock();//左移方块
    void rightMoveBlock();//右移方块
    void moveDownBlock();//方块下落
    void setColor();//设置颜色
    void getMap();//其它类获得map
    void setPlayerName(std::string name);//设置玩家名字
private:
    std::string name;//玩家名字
    int point;//得分
    Block tempBlock;//临时方块
    Block blockNow;//现在的方块
    int posX;
    int posY;// x,y用于做方块的定位，标记左上角方块
    Block blockNext;//下一个方块
    int map[20][10];//游戏区域
    bool fail;//是否失败
};
