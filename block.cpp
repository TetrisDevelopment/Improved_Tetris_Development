#include "block.h"
#include <cstring>
Block::Block() {
    memset(BlockType_1form_1, 0, sizeof(BlockType_1form_1));
    BlockType_1form_1[1][0]=1;//    ¡ö
    BlockType_1form_1[1][1]=1;//    ¡ö
    BlockType_1form_1[1][2]=1;//    ¡ö
    BlockType_1form_1[1][3]=1;//    ¡ö

    memset(BlockType_1form_2, 0, sizeof(BlockType_1form_2));
    BlockType_1form_2[0][2]=1;//
    BlockType_1form_2[1][2]=1;//
    BlockType_1form_2[2][2]=1;//    ¡ö¡ö¡ö¡ö
    BlockType_1form_2[3][2]=1;//

    memset(BlockType_2form_1, 0, sizeof(BlockType_2form_1));
    BlockType_2form_1[1][0]=1;//
    BlockType_2form_1[2][0]=1;//    ¡ö
    BlockType_2form_1[2][1]=1;//    ¡ö¡ö¡ö
    BlockType_2form_1[2][2]=1;//

    memset(BlockType_2form_2, 0, sizeof(BlockType_2form_2));
    BlockType_2form_2[1][1]=1;//     ¡ö
    BlockType_2form_2[2][1]=1;//     ¡ö
    BlockType_2form_2[3][0]=1;//     ¡ö
    BlockType_2form_2[3][1]=1;//    ¡ö¡ö

    memset(BlockType_2form_3, 0, sizeof(BlockType_2form_3));
    BlockType_2form_3[2][0]=1;//
    BlockType_2form_3[2][1]=1;//    ¡ö¡ö¡ö
    BlockType_2form_3[2][2]=1;//      ¡ö
    BlockType_2form_3[3][2]=1;//

    memset(BlockType_2form_4, 0, sizeof(BlockType_2form_4));
    BlockType_2form_4[1][1]=1;//
    BlockType_2form_4[1][2]=1;//    ¡ö¡ö
    BlockType_2form_4[2][1]=1;//    ¡ö
    BlockType_2form_4[3][1]=1;//    ¡ö

    memset(BlockType_3form_1, 0, sizeof(BlockType_3form_1));
    BlockType_3form_1[2][2]=1;//    
    BlockType_3form_1[3][0]=1;//    
    BlockType_3form_1[3][1]=1;//      ¡ö    
    BlockType_3form_1[3][2]=1;//    ¡ö¡ö¡ö

    memset(BlockType_3form_2, 0, sizeof(BlockType_3form_2));
    BlockType_3form_2[1][0]=1;//    
    BlockType_3form_2[1][1]=1;//    ¡ö¡ö    
    BlockType_3form_2[2][1]=1;//     ¡ö
    BlockType_3form_2[3][1]=1;//     ¡ö

    memset(BlockType_3form_3, 0, sizeof(BlockType_3form_3));
    BlockType_3form_3[2][0]=1;//
    BlockType_3form_3[2][1]=1;//
    BlockType_3form_3[2][2]=1;//    ¡ö¡ö¡ö
    BlockType_3form_3[3][0]=1;//    ¡ö

    memset(BlockType_3form_4, 0, sizeof(BlockType_3form_4));
    BlockType_3form_4[1][1]=1;//    
    BlockType_3form_4[2][1]=1;//    ¡ö
    BlockType_3form_4[3][1]=1;//    ¡ö
    BlockType_3form_4[3][2]=1;//    ¡ö¡ö

    memset(BlockType_4form_1, 0, sizeof(BlockType_4form_1));
    BlockType_4form_1[2][1]=1;//
    BlockType_4form_1[3][0]=1;//
    BlockType_4form_1[3][1]=1;//     ¡ö
    BlockType_4form_1[3][2]=1;//    ¡ö¡ö¡ö

    memset(BlockType_4form_2, 0, sizeof(BlockType_4form_2));
    BlockType_4form_2[1][1]=1;//
    BlockType_4form_2[2][0]=1;//     ¡ö
    BlockType_4form_2[2][1]=1;//    ¡ö¡ö
    BlockType_4form_2[3][1]=1;//     ¡ö

    memset(BlockType_4form_3, 0, sizeof(BlockType_4form_3));
    BlockType_4form_3[2][0]=1;//
    BlockType_4form_3[2][1]=1;//
    BlockType_4form_3[2][2]=1;//    ¡ö¡ö¡ö
    BlockType_4form_3[3][1]=1;//     ¡ö

    memset(BlockType_4form_4, 0, sizeof(BlockType_4form_4));
    BlockType_4form_4[1][1]=1;//
    BlockType_4form_4[2][1]=1;//    ¡ö
    BlockType_4form_4[2][2]=1;//    ¡ö¡ö
    BlockType_4form_4[3][1]=1;//    ¡ö

    memset(BlockType_5form_1, 0, sizeof(BlockType_5form_1));
    BlockType_5form_1[2][0]=1;//
    BlockType_5form_1[2][1]=1;//
    BlockType_5form_1[3][0]=1;//    ¡ö¡ö
    BlockType_5form_1[3][1]=1;//    ¡ö¡ö

    memset(BlockType_6form_1, 0, sizeof(BlockType_6form_1));
    BlockType_6form_1[2][1]=1;//
    BlockType_6form_1[2][2]=1;//
    BlockType_6form_1[3][0]=1;//     ¡ö¡ö
    BlockType_6form_1[3][1]=1;//    ¡ö¡ö

    memset(BlockType_6form_2, 0, sizeof(BlockType_6form_2));
    BlockType_6form_2[1][0]=1;//
    BlockType_6form_2[2][0]=1;//    ¡ö
    BlockType_6form_2[2][1]=1;//    ¡ö¡ö
    BlockType_6form_2[3][1]=1;//     ¡ö

    memset(BlockType_7form_1, 0, sizeof(BlockType_7form_1));
    BlockType_7form_1[2][0]=1;//
    BlockType_7form_1[2][1]=1;//
    BlockType_7form_1[3][1]=1;//    ¡ö¡ö
    BlockType_7form_1[3][2]=1;//     ¡ö¡ö

    memset(BlockType_7form_2, 0, sizeof(BlockType_7form_2));
    BlockType_7form_2[1][2]=1;//
    BlockType_7form_2[2][1]=1;//     ¡ö
    BlockType_7form_2[2][2]=1;//    ¡ö¡ö
    BlockType_7form_2[3][1]=1;//    ¡ö
}
