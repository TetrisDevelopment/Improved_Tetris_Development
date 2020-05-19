#include <windows.h>
class Interface {
public:
    void initialWindow(HANDLE hOut);//初始化窗口
    void initialViewOnePlayer(HANDLE hOut);//初始化map
    void initialViewTwoPlayer(HANDLE hOut);//初始化map
    void drawBlock();//画方块：传入方块的左上角坐标和方块4*4数组来实现画方块,只要没有碰撞，方块就可以画
    void printPointPlayer1(HANDLE hOut,int point);//显示玩家1分数
    void printPointPlayer2(HANDLE hOut,int point);//显示玩家2分数
    void gotoXY(HANDLE hOut, int x, int y);//定位光标
    void playerVictory();//玩家胜利效果
private:

};


