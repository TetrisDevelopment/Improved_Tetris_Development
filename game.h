#include "player.h"
#include "interface.h"
class Game {
public:
    Game();
    int selectGameType();              // ѡ��ģʽ
    string setName();           // ��������
    void onePlayer(Player player);                   // ����ģʽ
    void twoPlayers(Player player1, Player player2);                  // ˫��ģʽ
    void restartGame();                 // ������Ϸ
    void gameControl();                // ����ȫ��
private:
    Interface itfs;
    int speed;
};
// 

