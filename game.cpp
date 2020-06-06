#include "game.h"
#include "interface.h"
#include <iostream>
#include <conio.h>
using namespace std;

Game::Game() {
    itfs.initialWindow();
}

void Game::gameControl() {
    // ѡ��ģʽ
    int type = selectGameType();
    if(type == 1) {
        // ����һ����ҵ�����
        Player player;
        // ��Ⱦ
        player.setPlayerName(setName());
        onePlayer(player);
    }
    else if(type == 2) {
        // ����������ҵ�����
        Player player1, player2;
        // ��Ⱦ
        player1.setPlayerName(setName());
        // ��Ⱦ
        player2.setPlayerName(setName());
        twoPlayers();
    }


}

int Game::selectGameType() {
    // ����1
    int type;
    cin >> type;
    return type;

    // ����2
    // ��Ⱦ
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
                        // ��Ⱦʧ��ҳ��
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
            // �����ײ���Ƿ�ʧ��
            if(player.detectReductsion()) {
                player.detectIsFail();
                if(!player.getStatus()) {
                    // ��Ⱦʧ��ҳ��
                    return;
                }
            }
            // ���map����
            itfs.clearMap1(player.map);
            // ������
            itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
            // ��map
            itfs.printMap1(player.map);
            // ������
            itfs.printPointPlayer1(player.getPoint());
        }
    }
}

string Game::setName() {
    string name;
    cin >> name;
    return name;
}

