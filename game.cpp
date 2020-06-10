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
    itfs.initialCovor();
    int type = selectGameType();
    if(type == 1) {
        // ����һ����ҵ�����
        Player player;
        // ��Ⱦ
        itfs.getName();
        player.setPlayerName(setName());
        restart1:
        onePlayer(player);
        while(1) {
            if(_kbhit()) {
                int key = _getch();
                if(key == 110) {
                    // �˳�
                    return;
                }
                else if(key == 121) {
                    // ���¿�ʼ
                    player.restartPlayer();
                    system("cls");
                    goto restart1;
                }
            }
        }
    }
    else if(type == 2) {
        // ����������ҵ�����
        Player player1, player2;
        // ��Ⱦ
        itfs.getName();
        player1.setPlayerName(setName());
        // ��Ⱦ
        itfs.getName();
        player2.setPlayerName(setName());
        restart2:
        twoPlayers(player1, player2);
        while(1) {
            if(_kbhit()) {
                int key = _getch();
                if(key == 110) {
                    // �˳�
                    return;
                }
                else if(key == 121) {
                    // ���¿�ʼ
                    player1.restartPlayer();
                    player2.restartPlayer();
                    system("cls");
                    goto restart2;
                }
            }
        }
    }


}

int Game::selectGameType() {
    // ����1
     /*int type;
    cin >> type;
    return type;*/
    // ����2
    // ��Ⱦ
    itfs.selectPart();
    itfs.selectKey1();
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
    system("cls");
    int temptime = speed;
    itfs.initialViewOnePlayer();
    itfs.printNamePlayer1(player.getName());
    itfs.printPointPlayer1(player.getPoint());
    itfs.printMap1(player.map);
    itfs.drawNextBlock1(player.getNextBlock());
    itfs.refreshBlock1(player.getX(), player.getY(), player.getNowBlock());
    while(1) {
        if(_kbhit()) {
            int key=_getch();
            if(key==115) {
                // s
                if(player.moveDownBlock()) {
                player.detectIsFail();
                if(player.getStatus()) {
                    // ��Ⱦʧ��ҳ��
                    itfs.gameResult(player.getName(), player.getPoint(), 1);
                    return;
                }
                player.makeNewBlock();
                itfs.refreshBlock1(player.getX(), player.getY(), player.getNowBlock());
                itfs.drawNextBlock1(player.getNextBlock());
                itfs.printMap1(player.map);
                itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
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
            if(player.detectReductsion()) {
                // ���map����
                itfs.clearMap1(player.map);
                // ������
                itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
                // ��map
                itfs.printMap1(player.map);
                // ������
                itfs.printPointPlayer1(player.getPoint());
            }
            else {
                itfs.deleteBlock1();
                itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
                itfs.refreshBlock1(player.getX(), player.getY(), player.getNowBlock());
            }
        }
        Sleep(20);
        if(--temptime == 0) {
            if(player.moveDownBlock()) {
                player.detectIsFail();
                if(player.getStatus()) {
                    // ��Ⱦʧ��ҳ��
                    itfs.gameResult(player.getName(), player.getPoint(), 1);
                    return;
                }
                player.makeNewBlock();
                itfs.refreshBlock1(player.getX(), player.getY(), player.getNowBlock());
                itfs.drawNextBlock1(player.getNextBlock());
                itfs.printMap1(player.map);
                itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
            }
            if(player.detectReductsion()) {
                // ���map����
                itfs.clearMap1(player.map);
                // ������
                itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
                // ��map
                itfs.printMap1(player.map);
                // ������
                itfs.printPointPlayer1(player.getPoint());
            }
            else {
                itfs.deleteBlock1();
                itfs.drawNowBlock1(player.getNowBlock(), player.getX(), player.getY());
                itfs.refreshBlock1(player.getX(), player.getY(), player.getNowBlock());
            }
            temptime = speed;
        }
    }
}

string Game::setName() {
    string name;
    cin >> name;
    return name;
}
void Game::twoPlayers(Player player1, Player player2) {
    system("cls");
    int temptime = speed;
    itfs.initialViewTwoPlayer();
    itfs.printMap1(player1.map);
    itfs.printMap2(player2.map);
    itfs.printNamePlayer1(player1.getName());
    itfs.printNamePlayer2(player2.getName());
    itfs.printPointPlayer1(player1.getPoint());
    itfs.printPointPlayer2(player2.getPoint());
    itfs.drawNextBlock1(player1.getNextBlock());
    itfs.drawNextBlock2(player2.getNextBlock());
    itfs.refreshBlock1(player1.getX(), player1.getY(), player1.getNowBlock());
    itfs.refreshBlock2(player2.getX(), player2.getY(), player2.getNowBlock());
    while(1) {
        // �������벿��
        if(_kbhit()) {
            int key=_getch();

            // ����
            if(key==115) {
                if(player1.moveDownBlock()) {
                    player1.detectIsFail();
                    if(player1.getStatus()) {
                        // ��Ⱦʧ��ҳ��
                        itfs.gameResult(player1.getName(), player1.getPoint(), 1);
                        return;
                    }
                    player1.makeNewBlock();
                    itfs.refreshBlock1(player1.getX(), player1.getY(), player1.getNowBlock());
                    itfs.drawNextBlock1(player1.getNextBlock());
                    itfs.printMap1(player1.map);
                    itfs.drawNowBlock1(player1.getNowBlock(), player1.getX(), player1.getY());
                    
                }
            }
            else if(key == 80) {
                if(player2.moveDownBlock()) {
                    player2.detectIsFail();
                    if(player2.getStatus()) {
                        // ��Ⱦʧ��ҳ��
                        itfs.gameResult(player2.getName(), player2.getPoint(), 1);
                        return;
                    }
                    player2.makeNewBlock();
                    itfs.refreshBlock2(player2.getX(), player2.getY(), player2.getNowBlock());
                    itfs.drawNextBlock2(player2.getNextBlock());
                    itfs.printMap2(player2.map);
                    itfs.drawNowBlock2(player2.getNowBlock(), player2.getX(), player2.getY());
                    
                }
            }

            // ��ת
            else if(key==119) {
                player1.turnBlock();
            }
            else if(key == 72) {
                player2.turnBlock();
            }

            // ����
            else if(key==97) {
                player1.leftMoveBlock();
            }
            else if(key == 75) {
                player2.leftMoveBlock();
            }

            // ����
            else if(key==100) {
                player1.rightMoveBlock();
            }
            else if(key == 77) {
                player2.rightMoveBlock();
            }
            int add1 = player1.detectReductsion();
            int add2 = player2.detectReductsion();
            // ���������,�����˳���������2�Ƿ�ʧ��
            if(add1) {
                if(!player2.addBlock(add1)) {
                    // ʧ����Ⱦ
                    itfs.gameResult(player1.getName(), player1.getPoint(), 1);
                    return;
                }
                itfs.printPointPlayer1(player1.getPoint());
            } 
            // ���û�У�������Ⱦ���1�ķ���
            else {
                itfs.deleteBlock1();
                itfs.drawNowBlock1(player1.getNowBlock(), player1.getX(), player1.getY());
                itfs.refreshBlock1(player1.getX(), player1.getY(), player1.getNowBlock());
            }
            // ���������,�����˳���������1�Ƿ�ʧ��
            if(add2) {
                if(!player1.addBlock(add2)) {
                    // ʧ����Ⱦ
                    itfs.gameResult(player2.getName(), player2.getPoint(), 1);
                    return;
                }
                itfs.printPointPlayer2(player2.getPoint());
            } 
            // ���û�У�������Ⱦ���2�ķ���
            else {
                itfs.deleteBlock2();
                itfs.drawNowBlock2(player2.getNowBlock(), player2.getX(), player2.getY());
                itfs.refreshBlock2(player2.getX(), player2.getY(), player2.getNowBlock());
            }
            // ����κ�һ���������о�������Ⱦmap
            if(add1 != 0 || add2 != 0) {
                itfs.clearMap1(player1.map);
                itfs.printMap1(player1.map);
                itfs.drawNowBlock1(player1.getNowBlock(), player1.getX(), player1.getY());
                itfs.clearMap2(player2.map);
                itfs.printMap2(player2.map);
                itfs.drawNowBlock2(player2.getNowBlock(), player2.getX(), player2.getY());
            }
        }
        Sleep(20);
        // �ظ�����
        if(--temptime == 0) {
            if(player1.moveDownBlock()) {
                player1.detectIsFail();
                if(player1.getStatus()) {
                    // ��Ⱦʧ��ҳ��
                    itfs.gameResult(player1.getName(), player1.getPoint(), 1);
                    return;
                }
                player1.makeNewBlock();
                itfs.refreshBlock1(player1.getX(), player1.getY(), player1.getNowBlock());
                itfs.drawNextBlock1(player1.getNextBlock());
                itfs.drawNowBlock1(player1.getNowBlock(), player1.getX(), player1.getY());
                itfs.printMap1(player1.map);
            }
            if(player2.moveDownBlock()) {
                player2.detectIsFail();
                if(player2.getStatus()) {
                    // ��Ⱦʧ��ҳ��
                    itfs.gameResult(player2.getName(), player2.getPoint(), 1);
                    return;
                }
                player2.makeNewBlock();
                itfs.refreshBlock2(player2.getX(), player2.getY(), player2.getNowBlock());
                itfs.drawNextBlock2(player2.getNextBlock());
                itfs.printMap2(player2.map);
                itfs.drawNowBlock2(player2.getNowBlock(), player2.getX(), player2.getY());
                
            }
            int add1 = player1.detectReductsion();
            int add2 = player2.detectReductsion();
            if(add1) {
                if(!player2.addBlock(add1)) {
                    // ��Ⱦʧ��
                    itfs.gameResult(player1.getName(), player1.getPoint(), 1);
                    return;
                }
                itfs.printPointPlayer1(player1.getPoint());
            } 
            else {
                itfs.deleteBlock1();
                itfs.drawNowBlock1(player1.getNowBlock(), player1.getX(), player1.getY());
                itfs.refreshBlock1(player1.getX(), player1.getY(), player1.getNowBlock());
            }
            if(add2) {
                if(player1.addBlock(add2)) {
                    // ��Ⱦʧ��
                    itfs.gameResult(player2.getName(), player2.getPoint(), 1);
                    return;
                }
                itfs.printPointPlayer2(player2.getPoint());
            } 
            else {
                itfs.deleteBlock2();
                itfs.drawNowBlock2(player2.getNowBlock(), player2.getX(), player2.getY());
                itfs.refreshBlock2(player2.getX(), player2.getY(), player2.getNowBlock());
            }
            if(add1 != 0 || add2 != 0) {
                itfs.clearMap1(player1.map);
                itfs.printMap1(player1.map);
                itfs.drawNowBlock1(player1.getNowBlock(), player1.getX(), player1.getY());
                itfs.clearMap2(player2.map);
                itfs.printMap2(player2.map);
                itfs.drawNowBlock2(player2.getNowBlock(), player2.getX(), player2.getY());
            }
            temptime = speed;
        }
    }
}
