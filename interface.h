class Interface {
public:
    initialWindow();//初始化窗口：设置句柄什么的
    initialViewOnePlayer();//初始化map
    initialViewTwoPlayer();//初始化map
    drawBlock();//画方块：传入方块的左上角坐标和方块4*4数组来实现画方块,只要没有碰撞，方块就可以画
    printPoint();//显示当前分数
    gotoXY();//定位光标
    playerVictory();//玩家胜利效果
private:

};

