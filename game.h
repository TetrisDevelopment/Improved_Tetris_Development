#include "player.h"
#include "interface.h"
class Game {
public:
    Game();
    int selectGameType();              // 选择模式
    string setName();           // 设置名字
    void onePlayer(Player player);                   // 单人模式
    void twoPlayers();                  // 双人模式
    void restartGame();                 // 重启游戏
    void gameControl();                // 控制全局
private:
    Interface itfs;
    int speed;
};
// 

