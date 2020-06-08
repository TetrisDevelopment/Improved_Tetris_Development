#include "game.h"
#include <iostream>
#include <conio.h>
using namespace std;

Game::Game(){
    itfs.initialWindow();
    speed = 50;
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
     /*int type;
    cin >> type;
    return type;*/
    // ����2
    // ��Ⱦ
    int type=1;
    while(1) {
        if(_kbhit()){
            int key=_getch();
            if(key==72&&type!=1){
                itfs.selectKey1();
                type=1;
            }
            if(key==80&&type!=2){
                itfs.selectKey2();
                type=2;
            }
            if(key==13){
                return type;
            }
        }
    }
}

void Game::onePlayer(Player player) {
    int temptime = speed;
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
            // if(player.detectReductsion()) {
            //     player.detectIsFail();
            //     if(!player.getStatus()) {
            //         // ��Ⱦʧ��ҳ��
            //         return;
            //     }
            // }
            player.detectReductsion();
            // ���map����
            itfs.clearMap1(player.map);
            // ������
            itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
            // ��map
            itfs.printMap1(player.map);
            // ������
            itfs.printPointPlayer1(player.getPoint());
        }
        Sleep(20);
        if(--temptime == 0) {
            if(player.moveDownBlock()) {
                player.detectIsFail();
                if(!player.getStatus()) {
                    // ��Ⱦʧ��ҳ��
                    return;
                }
                player.makeNewBlock();
            }
            player.detectReductsion();
            itfs.clearMap1(player.map);
            itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
            itfs.printMap1(player.map);
            itfs.printPointPlayer1(player.getPoint());
            temptime = speed;
        }
    }
}

string Game::setName() {
    string name;
    cin >> name;
    return name;
}
void Game::twoPlayers(){}
