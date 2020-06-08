#include <windows.h>
#include<string>
#include"block.h"
using namespace std;
class Interface {
public:
    Interface(){ //获得输出句柄
       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    }
    void initialWindow();//初始化窗口
    void initialCovor();//绘制初始封面
    void initialViewOnePlayer();//初始化map
    void initialViewTwoPlayer();//初始化map
    void printPointPlayer1(int point);//显示玩家1分数
    void printPointPlayer2(int point);//显示玩家2分数
    void printNamePlayer1(string name);//显示玩家1名字
    void printNamePlayer2(string name);//显示玩家2名字
    void gotoXY(int x, int y);//定位光标
    void player1Victory();//玩家胜利效果
    void player2Victory();//玩家胜利效果
    void drawNextBlock1(Block t);//画下一个方块
    void drawNextBlock2(Block t);
    void drawNowBlock1(Block t,int x,int y);//画现在游戏池内的方块
    void drawNowBlock2(Block t,int x,int y);
    /*void deleteBlock1(int block[4][4],int x, int y);//将游戏池中已打印方块消除
    void deleteBlock2(int block[4][4],int x, int y);*/
    void clearMap1(int map[20][10]);//将map清空
    void clearMap2(int map[20][10]);
    void printMap1(int map[20][10]);//打印map
    void printMap2(int map[20][10]);
    void clearVictory1();//消除胜利标志
    void clearVictory2();
    static int vic[6][5];
private:
    HANDLE hOut;
};
//单人模式和双人模式player1均调用1系列函数
//双人模式player2调用2系列函数

