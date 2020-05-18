#include"interface.h"
#include<iostream>
#include <conio.h>                  //┃■
using namespace std;
void initialWindow(HANDLE hOut)
{
    COORD size = {100, 30};
    SetConsoleScreenBufferSize(hOut, size);//更改指定缓冲区大小
    SMALL_RECT rect = {0, 0, 99, 29};
    SetConsoleWindowInfo(hOut, true, &rect);//设置控制台窗口信息
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};//光标信息
    SetConsoleCursorInfo(hOut, &cursor_info);//设置光标不可见
    SetConsoleTitle("我罗斯");//设置控制台窗口标题
}
void gotoXY(HANDLE hOut, int x, int y){
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut, pos);//设置光标位置
}
void initialViewOnePlayer(HANDLE hOut){
    SetConsoleTextAttribute(hOut,15);//设置为白色
    for(int i=0;i<20;i++){
        cout<<"                    ■                    ■"<<endl;
    }
    gotoXY(hOut,0,20);
    cout<<"                    ■■■■■■■■■■■■"<<endl;
    gotoXY(hOut,0,0);
    cout<<"■玩家："<<endl<<endl;
    cout<<"■等级："<<endl<<endl;
    cout<<"■下一个方块："<<endl;
    gotoXY(hOut,0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"■提示："<<endl<<endl;
    cout<<"W：转换方块朝向"<<endl;
    cout<<"S：加速方块下落"<<endl;
    cout<<"A：控制方块向右移动"<<endl;
    cout<<"D：控制方块向右移动"<<endl;  
    cout<<"[ 空格 ]：暂停游戏"<<endl;
    cout<<"X：重新开始游戏 "<<endl;
    gotoXY(hOut,0,23);
    SetConsoleTextAttribute(hOut,12);
    cout<<"■■单人模式■■"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By 余佳硕 吕航 阙嘉毅"<<endl;
}
void initialViewTwoPlayer(HANDLE hOut){
    SetConsoleTextAttribute(hOut,15);//设置为白色
    for(int i=0;i<20;i++){
        cout<<"                    ■                    ■                     ■                    ■"<<endl;
    }
    gotoXY(hOut,0,20);
    cout<<"                    ■■■■■■■■■■■■                     ■■■■■■■■■■■■"<<endl;
    gotoXY(hOut,0,0);
    cout<<"■玩家1："<<endl<<endl;
    cout<<"■等级："<<endl<<endl;
    cout<<"■下一个方块："<<endl;
    gotoXY(hOut,0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"■提示："<<endl<<endl;
    cout<<"W：转换方块朝向"<<endl;
    cout<<"S：加速方块下落"<<endl;
    cout<<"A：控制方块向右移动"<<endl;
    cout<<"D：控制方块向右移动"<<endl;  
    cout<<"[ 空格 ]：暂停游戏"<<endl;
    cout<<"X：重新开始游戏 "<<endl;
    SetConsoleTextAttribute(hOut,15);
    gotoXY(hOut,44,0);
    cout<<"■玩家2："<<endl<<endl;
    gotoXY(hOut,44,2);
    cout<<"■等级："<<endl<<endl;
    gotoXY(hOut,44,4);
    cout<<"■下一个方块："<<endl;
    SetConsoleTextAttribute(hOut,14);
    gotoXY(hOut,44,11);
    cout<<"■提示：";
    gotoXY(hOut,44,13);
    cout<<"↑：转换方块朝向";
    gotoXY(hOut,44,14);
    cout<<"↓：加速方块下落";
    gotoXY(hOut,44,15);
    cout<<"←：控制方块向右移动";
    gotoXY(hOut,44,16);
    cout<<"→：控制方块向右移动";  
    gotoXY(hOut,44,17);
    cout<<"[ 空格 ]：暂停游戏";
    gotoXY(hOut,44,18);
    cout<<"X：重新开始游戏 "<<endl;
    gotoXY(hOut,0,23);
    SetConsoleTextAttribute(hOut,12);
    cout<<"■■双人模式■■"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By 余佳硕 吕航 阙嘉毅"<<endl;    
}

void drawBlock(HANDLE hOut, int block[4][4], int x, int y){}


