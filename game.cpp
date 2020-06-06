#include "game.h"
#include "interface.h"
#include <iostream>
#include <conio.h>
using namespace std;

Game::Game() {
    itfs.initialWindow();
}

void Game::gameControl() {
    // 选择模式
    int type = selectGameType();
    if(type == 1) {
        // 输入一个玩家的名字
        Player player;
        // 渲染
        player.setPlayerName(setName());
        onePlayer(player);
    }
    else if(type == 2) {
        // 输入两个玩家的名字
        Player player1, player2;
        // 渲染
        player1.setPlayerName(setName());
        // 渲染
        player2.setPlayerName(setName());
        twoPlayers();
    }


}

int Game::selectGameType() {
    // 方案1
    int type;
    cin >> type;
    return type;

    // 方案2
    // 渲染
    while(1) {
        if(_kbhit()) {
            int key=_getch();
            if(key == 115) {
                type = 1;
            }
            else if(key == 119) {
                type = 2;
            }
            else if(key == 13) {
                return type;
            }
        }
    }
}

void Game::onePlayer(Player player) {
    itfs.initialViewOnePlayer();
    itfs.printNamePlayer1(player.getName());
    itfs.printPointPlayer1(player.getPoint());
    itfs.printMap1(player.map);
    while(1) {
        if(_kbhit()) {
            int key=_getch();
            if(key==115) {
                // s
                if(player.moveDownBlock()) {
                    player.detectIsFail();
                    if(!player.getStatus()) {
                        // 渲染失败页面
                        return;
                    }
                    player.makeNewBlock();
                }
            }
            else if(key==119) {
                // w
                player.turnBlock();
            }
            else if(key==97) {
                // a
                player.leftMoveBlock();
            }
            else if(key==100) {
                // d
                player.rightMoveBlock();
            }
            // 检测碰撞和是否失败
            if(player.detectReductsion()) {
                player.detectIsFail();
                if(!player.getStatus()) {
                    // 渲染失败页面
                    return;
                }
            }
            // 清除map区域
            itfs.clearMap1(player.map);
            // 画方块
            itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
            // 画map
            itfs.printMap1(player.map);
            // 画分数
            itfs.printPointPlayer1(player.getPoint());
        }
    }
}

string Game::setName() {
    string name;
    cin >> name;
    return name;
}

