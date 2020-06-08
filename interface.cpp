#include"interface.h"
#include<iostream>
#include <conio.h>                  //┃■
using namespace std;
int Interface::vic[6][5]={ {0,0,1,0,0},
                {0,1,1,1,0},
                {1,1,1,1,1},
                {0,1,0,1,0},
                {0,0,1,0,0},               
                {0,0,1,0,0}};

void Interface::initialWindow(){   
    system("cls");//清屏
    system("mode con cols=100 lines=30"); //设置窗口大小
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};//光标信息
    SetConsoleCursorInfo(hOut, &cursor_info);//设置光标不可见
    system("title 我罗斯"); //设置控制台窗口标题
}
void Interface::gotoXY(int x, int y){
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut, pos);//设置光标位置
}
void Interface::initialCovor(){
    SetConsoleTextAttribute(hOut,3);
    int mark[9][31]={ 0,0,1,1,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,0,0,1,0,
                      0,1,1,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,0,1,1,1,1,1,0,1,0,0,
                      0,0,1,0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,1,1,1,1,
                      1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,0,1,0,1,0,
                      0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,0,1,0,1,0,1,0,
                      0,0,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,1,1,1,0,1,0,1,0,
                      1,1,1,0,0,0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,0,0,0,1,0,1,0,1,0,1,0,
                      0,1,1,0,0,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,1,0,1,0,
                      0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0};
    for(int i=0;i<9;i++){
        gotoXY(18,i+5);
        for(int j=0;j<31;j++){
            if(mark[i][j]==1) cout<<"■";
            else cout<<"  ";
        }
        cout<<endl;
    }
    SetConsoleTextAttribute(hOut,14);
    gotoXY(36,20);
    cout<<"Press any key to start... ";
    gotoXY(36,21);
    system("pause");
}
void Interface::selectPart(){
    gotoXY(36,20);
    cout<<"                          ";
    gotoXY(36,21);
    cout<<"                          ";
    gotoXY(23,20);
    SetConsoleTextAttribute(hOut,14);
    cout<<"请选择游戏模式：";
    gotoXY(23,22);
    cout<<"(上下键选择，回车确定)";
    gotoXY(60,18);
    SetConsoleTextAttribute(hOut,0|16|32|64);//设置字体及背景颜色
    cout<<"单人模式";
    gotoXY(60,24);
    SetConsoleTextAttribute(hOut,15);
    cout<<"双人模式";

}
void Interface::selectKey1(){//键位于单人模式输出
    gotoXY(60,18);
    SetConsoleTextAttribute(hOut,0|16|32|64);//设置字体及背景颜色
    cout<<"单人模式";
    gotoXY(60,24);
    SetConsoleTextAttribute(hOut,15);
    cout<<"双人模式";
}
void Interface::selectKey2(){//键位于双人模式时输出
    gotoXY(60,18);
    SetConsoleTextAttribute(hOut,15);
    cout<<"单人模式";
    gotoXY(60,24);
    SetConsoleTextAttribute(hOut,0|16|32|64);
    cout<<"双人模式";
    //设置字体及背景颜色
}
void Interface::initialViewOnePlayer(){
    SetConsoleTextAttribute(hOut,15);//设置为白色
    for(int i=0;i<20;i++){
        cout<<"                    ■                    ■"<<endl;
    }
    gotoXY(0,20);
    cout<<"                    ■■■■■■■■■■■■"<<endl;
    gotoXY(0,0);
    cout<<"■玩家："<<endl<<endl;
    cout<<"■分数：0"<<endl<<endl;
    cout<<"■下一个方块："<<endl;
    gotoXY(0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"■提示："<<endl<<endl;
    cout<<"W：转换方块朝向"<<endl;
    cout<<"S：加速方块下落"<<endl;
    cout<<"A：控制方块向右移动"<<endl;
    cout<<"D：控制方块向右移动"<<endl;  
    cout<<"[ 空格 ]：暂停游戏"<<endl;
    cout<<"X：重新开始游戏 "<<endl;
    gotoXY(0,23);
    SetConsoleTextAttribute(hOut,12);
    cout<<"■■单人模式■■"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By 余佳硕 吕航 阙嘉毅"<<endl;
}
void Interface::initialViewTwoPlayer(){
    SetConsoleTextAttribute(hOut,15);//设置为白色
    for(int i=0;i<20;i++){
        cout<<"                    ■                    ■                     ■                    ■"<<endl;
    }
    gotoXY(0,20);
    cout<<"                    ■■■■■■■■■■■■                     ■■■■■■■■■■■■"<<endl;
    gotoXY(0,0);
    cout<<"■玩家1："<<endl<<endl;
    cout<<"■分数：0"<<endl<<endl;
    cout<<"■下一个方块："<<endl;
    gotoXY(0,11);
    SetConsoleTextAttribute(hOut,3);
    cout<<"■提示："<<endl<<endl;
    cout<<"W：转换方块朝向"<<endl;
    cout<<"S：加速方块下落"<<endl;
    cout<<"A：控制方块向右移动"<<endl;
    cout<<"D：控制方块向右移动"<<endl;  
    cout<<"[ 空格 ]：暂停游戏"<<endl;
    cout<<"X：重新开始游戏 "<<endl;
    SetConsoleTextAttribute(hOut,15);
    gotoXY(44,0);
    cout<<"■玩家2："<<endl<<endl;
    gotoXY(44,2);
    cout<<"■分数：0"<<endl<<endl;
    gotoXY(44,4);
    cout<<"■下一个方块："<<endl;
    SetConsoleTextAttribute(hOut,14);
    gotoXY(44,11);
    cout<<"■提示：";
    gotoXY(44,13);
    cout<<"↑：转换方块朝向";
    gotoXY(44,14);
    cout<<"↓：加速方块下落";
    gotoXY(44,15);
    cout<<"←：控制方块向右移动";
    gotoXY(44,16);
    cout<<"→：控制方块向右移动";  
    gotoXY(44,17);
    cout<<"[ 空格 ]：暂停游戏";
    gotoXY(44,18);
    cout<<"X：重新开始游戏 "<<endl;
    gotoXY(0,23);
    SetConsoleTextAttribute(hOut,11);
    cout<<"■■双人模式■■"<<endl;
    SetConsoleTextAttribute(hOut,15);
    cout<<"By 余佳硕 吕航 阙嘉毅"<<endl;    
}
void Interface::printNamePlayer1(string name){//显示玩家1名字
    SetConsoleTextAttribute(hOut,15);
    gotoXY(9,0);                        
    cout<<name<<endl;
     
}
void Interface::printNamePlayer2(string name){//显示玩家2名字
    SetConsoleTextAttribute(hOut,15); 
    gotoXY(53,0);                        
    cout<<name<<endl;

}
void Interface::printPointPlayer1(int point){ //显示玩家1分数
    SetConsoleTextAttribute(hOut,15);
    gotoXY(8,2);
    cout<<"   "<<endl; 
    gotoXY(8,2);                                  
    cout<<point<<endl;                         
};
 void Interface::printPointPlayer2(int point){ //显示玩家2分数
    SetConsoleTextAttribute(hOut,15);
    gotoXY(52,2);
    cout<<"   "<<endl; 
    gotoXY(52,2);
    cout<<point<<endl;
 }
void Interface::player1Victory(){
    gotoXY(26,22);
    SetConsoleTextAttribute(hOut,12);
    for(int i=0;i<2;i++){
        gotoXY(26,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"■";
        }
        cout<<endl;
    }
    gotoXY(26,24);
    SetConsoleTextAttribute(hOut,14);
    cout<<"■";
    SetConsoleTextAttribute(hOut,12);
    cout<<"■■■";
    SetConsoleTextAttribute(hOut,14);
    cout<<"■"<<endl;
    for(int i=3;i<6;i++){
        gotoXY(26,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"■";
        }
        cout<<endl;
    }   
}
void Interface::player2Victory(){
    gotoXY(71,22);
    SetConsoleTextAttribute(hOut,12);
    for(int i=0;i<2;i++){
        gotoXY(71,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"■";
        }
        cout<<endl;
    }
    gotoXY(71,24);
    SetConsoleTextAttribute(hOut,14);
    cout<<"■";
    SetConsoleTextAttribute(hOut,12);
    cout<<"■■■";
    SetConsoleTextAttribute(hOut,14);
    cout<<"■"<<endl;
    for(int i=3;i<6;i++){
        gotoXY(71,22+i);
        for(int j=0;j<5;j++){
            if(vic[i][j]==0)cout<<"  ";
            else cout<<"■";
        }
        cout<<endl;
    }   
}
void Interface::drawNextBlock1(Block t){
    for(int i=0;i<4;i++){
        gotoXY(2,6+i);
        for(int j=0;j<4;j++){
            cout<<"  ";
        }
    }
    SetConsoleTextAttribute(hOut,t.getColor());
    for(int i=0;i<4;i++){
        gotoXY(2,6+i);
        for(int j=0;j<4;j++){
            if(t.block[i][j]==1)cout<<"■";
            else cout<<"  ";
        }
    }
};//画下一个方块
void Interface::drawNextBlock2(Block t){
    for(int i=0;i<4;i++){
        gotoXY(46,6+i);
        for(int j=0;j<4;j++){
            cout<<"  ";
        }
    }
    SetConsoleTextAttribute(hOut,t.getColor());
    for(int i=0;i<4;i++){
        gotoXY(46,6+i);
        for(int j=0;j<4;j++){
            if(t.block[i][j]==1)cout<<"■";
            else cout<<"  ";
        }
    }
};
void Interface::drawNowBlock1(Block t,int x,int y){
    SetConsoleTextAttribute(hOut,t.getColor());
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(t.block[i][j]==1&&x+i>=0){ 
                gotoXY(2*(y+j)+22,x+i);
                cout << "■";
            }
        }
    }
};//画现在游戏池内的方块
void Interface::drawNowBlock2(Block t,int x,int y){
    SetConsoleTextAttribute(hOut,t.getColor());
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(t.block[i][j]==1&&x+1>=0){ 
                gotoXY(2*(y+j)+67,x+i);
                cout << "■";
            }
        }
    }
};
/*void Interface::deleteBlock1(int block[4][4],int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1&&x+1>=0){ 
                gotoXY(2*(y+j)+22,x+i);
                cout <<"  ";
            }
        }
    }
};//将游戏池中已打印方块消除
void Interface::deleteBlock2(int block[4][4],int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(block[i][j]==1&&x+1>=0){  
                gotoXY(2*(y+j)+67,x+i);
                cout <<"  ";
            }
        }
    }
};*/
void Interface::printMap1(int map[20][10]){
    SetConsoleTextAttribute(hOut,15);
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++){
            if(map[i][j]==1){ 
                gotoXY(2*j+22,i);
                cout << "■";
            }
        }
    }
}
void Interface::printMap2(int map[20][10]){
    SetConsoleTextAttribute(hOut,15);
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++){
            if(map[i][j]==1){ 
            gotoXY(2*j+67,i);
            cout << "■";
            }
        }
    }
}
void Interface::clearMap1(int map[20][10]){
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++){
            gotoXY(2*j+22,i);
            cout <<"  ";
        }
    }
}
void Interface::clearMap2(int map[20][10]){
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++){
            gotoXY(2*j+67,i);
            cout <<"  ";
        }
    }
}
void Interface::clearVictory1(){
    for(int i=0;i<6;i++){
        gotoXY(26,22+i);
        for(int j=0;j<5;j++){
            cout<<"  ";
        }
    }
    
}
void Interface::clearVictory2(){
    for(int i=0;i<6;i++){
         gotoXY(71,22+i);
        for(int j=0;j<5;j++){
            cout<<"  ";
        }
    }
    
}


