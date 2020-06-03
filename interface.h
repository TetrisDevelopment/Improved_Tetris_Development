#include <windows.h>
#include<string>
using namespace std;
class Interface {
public:
    Interface(){
       hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    }
    void initialWindow();//初始化窗口
    void initialViewOnePlayer();//初始化map
    void initialViewTwoPlayer();//初始化map
    void printPointPlayer1(int point);//显示玩家1分数
    void printPointPlayer2(int point);//显示玩家2分数
    void printNamePlayer1(string name);//显示玩家1名字
    void printNamePlayer2(string name);//显示玩家2名字
    void gotoXY(int x, int y);//定位光标
    void player1Victory();//玩家胜利效果
    void player2Victory();//玩家胜利效果
    void drawNextBlock1(int block[4][4],int color);//画下一个方块
    void drawNextBlock2(int block[4][4],int color);
    void drawNowBlock1(int block[4][4],int x,int y,int color);//画现在游戏池内的方块
    void drawNowBlock2(int block[4][4],int x,int y,int color);
    void deleteBlock1(int block[4][4],int x, int y);//将游戏池中已打印方块消除
    void deleteBlock2(int block[4][4],int x, int y);
    static int vic[6][5];
private:
    HANDLE hOut;
};
//单人模式和双人模式player1均调用1系列函数
//双人模式player2调用2系列函数

