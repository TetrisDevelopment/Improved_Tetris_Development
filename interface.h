#include <windows.h>
#include<string>
using namespace std;
class Interface {
public:
    void initialWindow(HANDLE hOut);//初始化窗口
    void initialViewOnePlayer(HANDLE hOut);//初始化map
    void initialViewTwoPlayer(HANDLE hOut);//初始化map
    void printPointPlayer1(HANDLE hOut,int point);//显示玩家1分数
    void printPointPlayer2(HANDLE hOut,int point);//显示玩家2分数
    void printNamePlayer1(HANDLE hOut,string name);//显示玩家1名字
    void printNamePlayer2(HANDLE hOut,string name);//显示玩家2名字
    void gotoXY(HANDLE hOut, int x, int y);//定位光标
    void player1Victory(HANDLE hOut);//玩家胜利效果
    void player2Victory(HANDLE hOut);//玩家胜利效果
    void drawNextBlock1(HANDLE hOut,int block[4][4],int color);//画下一个方块
    void drawNextBlock2(HANDLE hOut,int block[4][4],int color);
    void drawNowBlock1(HANDLE hOut,int block[4][4],int x,int y,int color);//画现在游戏池内的方块
    void drawNowBlock2(HANDLE hOut,int block[4][4],int x,int y,int color);
    void deleteBlock1(HANDLE hOut,int block[4][4],int x, int y);//将游戏池中已打印方块消除
    void deleteBlock2(HANDLE hOut,int block[4][4],int x, int y);
    static int vic[6][5];
private:

};
//单人模式和双人模式player1均调用1系列函数
//双人模式player2调用2系列函数

