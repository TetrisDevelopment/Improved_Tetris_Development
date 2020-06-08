#include <windows.h>
#include<string>
#ifndef _BLOCK
#include"block.h"
#endif
using namespace std;
class Interface {
public:
    Interface(){ //获得输出句柄
       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    }
    void initialWindow();//初始化窗口
    void initialCovor();//绘制初始封面
    void selectPart();//模式选择静态部分
    void selectKey1();//键位于单人模式输出
    void selectKey2();//键位于双人模式时输出
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
    void deleteBlock1();//将游戏池中已打印方块消除
    void deleteBlock2();
    void refreshBlock(int x,int y,Block temp);//更新移动前方块信息
    void clearMap1(int map[20][10]);//将map清空
    void clearMap2(int map[20][10]);
    void printMap1(int map[20][10]);//打印map
    void printMap2(int map[20][10]);
    void clearVictory1();//消除胜利标志
    void clearVictory2();
    static int vic[6][5];
private:
    HANDLE hOut;
    Block tempBlock;
    int x,y;
};
//单人模式和双人模式player1均调用1系列函数
//双人模式player2调用2系列函数

