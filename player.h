class Player {
public:
    Player();//初始化玩家
    getPoint();//获取玩家目前分数
    addBlock();//底部随机增加一行带空格的
    detectCollision();//检测碰撞：包含方块和方块，方块和边界
    detectReductsion();//检测消行：要有加分功能
    leftMoveBlock();//左移方块
    rightMoveBlock();//右移方块
    moveDownBlock();//方块下落
    setColor();//设置颜色
private:
    string name;//玩家名字
    int point;//得分
    int tempBlock[4][4];//临时方块
    int blockNow[4][4];//现在的方块
    int blockNext[4][4];//下一个方块
    int map[20][10];//游戏区域
    bool fail;//是否失败
};
