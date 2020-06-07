#include "block.h"
#include <cstring>
#include <windows.h>
#include <cstdlib>
#include <time.h> 

//初始化各方块（7个基础方块 +4种旋转状态） 
 //-------------------------------------------------------------------------//      
int Block::BlockType_1form_1[4][4]={{0,0,0,0},{1,1,1,1},{0,0,0,0},{0,0,0,0}}; // ■■■■

int Block::BlockType_1form_2[4][4]={{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}}; //    ■
                                                                              //    ■
								                                              //    ■
   								                                              //    ■

int Block::BlockType_1form_3[4][4]={{0,0,0,0},{1,1,1,1},{0,0,0,0},{0,0,0,0}}; // ■■■■

int Block::BlockType_1form_4[4][4]={{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}}; //    ■
                                                                              //    ■
								                                              //    ■
   								                                              //    ■
   								                                              
 //-------------------------------------------------------------------------//   
 
int Block::BlockType_2form_1[4][4]={{0,0,0,0},{1,0,0,0},{1,1,1,0},{0,0,0,0}}; //    ■
                                                                              //    ■ ■ ■
                                                                             
int Block::BlockType_2form_2[4][4]={{0,0,0,0},{0,1,1,0},{0,1,0,0},{0,1,0,0}}; //    ■ ■
     							                                              //    ■
  								                                              //    ■
    
int Block::BlockType_2form_3[4][4]={{0,0,0,0},{0,0,0,0},{1,1,1,0},{0,0,1,0}}; //    ■ ■ ■  
                                                                              //        ■ 
                                                                               
int Block::BlockType_2form_4[4][4]={{0,0,0,0},{0,1,0,0},{0,1,0,0},{1,1,0,0}}; //     ■  
                                                                              //     ■
                                                                              //   ■ ■
                                                                              
 //-------------------------------------------------------------------------// 
 
int Block::BlockType_3form_1[4][4]={{0,0,0,0},{0,0,0,0},{0,0,1,0},{1,1,1,0}}; //        ■    
                                                                              //    ■ ■ ■
                                                                             
int Block::BlockType_3form_2[4][4]={{0,0,0,0},{0,1,0,0},{0,1,0,0},{0,1,1,0}}; //    ■
                                                                              //    ■
                                                                              //    ■ ■
                                                                             
int Block::BlockType_3form_3[4][4]={{0,0,0,0},{0,0,0,0},{1,1,1,0},{1,0,0,0}}; //    ■ ■ ■
                                                                              //    ■
                                                                             
int Block::BlockType_3form_4[4][4]={{0,0,0,0},{1,1,0,0},{0,1,0,0},{0,1,0,0}}; //    ■ ■    
    							                                              //      ■
   								                                              //      ■  
   								                                             
 //-------------------------------------------------------------------------// 
 
int Block::BlockType_4form_1[4][4]={{0,0,0,0},{0,0,0,0},{0,1,0,0},{1,1,1,0}}; //      ■
                                                                              //    ■ ■ ■
                                                                              
int Block::BlockType_4form_2[4][4]={{0,0,0,0},{0,1,0,0},{0,1,1,0},{0,1,0,0}}; //    ■
                                                                              //    ■ ■
  								                                              //    ■ 

int Block::BlockType_4form_3[4][4]={{0,0,0,0},{0,0,0,0},{1,1,1,0},{0,1,0,0}}; //    ■ ■ ■
                                                                              //      ■
 
int Block::BlockType_4form_4[4][4]={{0,0,0,0},{0,1,0,0},{1,1,0,0},{0,1,0,0}}; //    ■
    							                                              //  ■ ■
							                                                  //    ■
  
 //-------------------------------------------------------------------------// 
 
int Block::BlockType_5form_1[4][4]={{0,0,0,0},{0,0,0,0},{1,1,0,0},{1,1,0,0}}; //    ■ ■
                                                                              //    ■ ■
                                                                             
int Block::BlockType_5form_2[4][4]={{0,0,0,0},{0,0,0,0},{1,1,0,0},{1,1,0,0}}; //    ■ ■
                                                                              //    ■ ■
                                                                             
int Block::BlockType_5form_3[4][4]={{0,0,0,0},{0,0,0,0},{1,1,0,0},{1,1,0,0}}; //    ■ ■
                                                                              //    ■ ■
                                                                             
int Block::BlockType_5form_4[4][4]={{0,0,0,0},{0,0,0,0},{1,1,0,0},{1,1,0,0}}; //    ■ ■
                                                                              //    ■ ■
 
 //-------------------------------------------------------------------------// 
   
int Block::BlockType_6form_1[4][4]={{0,0,0,0},{0,0,0,0},{0,1,1,0},{1,1,0,0}}; //      ■ ■
    							                                              //    ■ ■
    							                                             
int Block::BlockType_6form_2[4][4]={{0,0,0,0},{1,0,0,0},{1,1,0,0},{0,1,0,0}}; //    ■
   								                                              //    ■ ■
   								                                              //      ■
   								                                             
int Block::BlockType_6form_3[4][4]={{0,0,0,0},{0,0,0,0},{0,1,1,0},{1,1,0,0}}; //      ■ ■
    							                                              //    ■ ■
    							                                             
int Block::BlockType_6form_4[4][4]={{0,0,0,0},{1,0,0,0},{1,1,0,0},{0,1,0,0}}; //    ■
   								                                              //    ■ ■
   								                                              //      ■
 
 //-------------------------------------------------------------------------// 
int Block::BlockType_7form_1[4][4]={{0,0,0,0},{0,0,0,0},{1,1,0,0},{0,1,1,0}}; //      ■ ■
    							                                              //    ■ ■
    							                                              
int Block::BlockType_7form_2[4][4]={{0,0,0,0},{0,0,1,0},{0,1,1,0},{0,1,0,0}}; //    ■
   								                                              //    ■ ■
   								                                              //      ■
   								                                              
int Block::BlockType_7form_3[4][4]={{0,0,0,0},{0,0,0,0},{1,1,0,0},{0,1,1,0}}; //      ■ ■
    							                                              //    ■ ■
    							                                              
int Block::BlockType_7form_4[4][4]={{0,0,0,0},{0,0,1,0},{0,1,1,0},{0,1,0,0}}; //    ■
   								                                              //    ■ ■
   								                                              //      ■
 
 //-------------------------------------------------------------------------// 
Block::Block() { 
    srand((int)time(0));   //初始化随机数        
}
int Block::getColor(){
    return color;
}
void Block::Block_to_block(int BlockType_form_[][4]){// 方块拷贝到block数组
     for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_form_[i][j];
			}
		}
}
void Block::RandBlock(){   //随机生成方块+颜色
	switch (rand()%28){
	case 0:{
        Block_to_block(BlockType_1form_1);
		Type = 1;
		Form = 1;
		color = 11;
		break;
	}
	case 1:{
		Block_to_block(BlockType_1form_2);	
		Type = 1;
		Form = 2;
        color = 11;	
		break;
	}
	case 2:{
		Block_to_block(BlockType_1form_3);	
		Type = 1;
		Form = 3;
        color = 11;	
		break;
	}
	case 3:{
		Block_to_block(BlockType_1form_4);	
		Type = 1;
		Form = 4;
        color = 11;	
		break;
	}
	case 4:{
        Block_to_block(BlockType_2form_1);
		Type = 2;
		Form = 1;
		color = 1;	
		break;
	}
	case 5:	{
	    Block_to_block(BlockType_2form_2);
		Type = 2;
		Form = 2;
		color = 1;
		break;
	}	
	case 6:{
		Block_to_block(BlockType_2form_3);
		Type = 2;
		Form = 3;
		color = 1;
		break;
	}
	case 7:{
		Block_to_block(BlockType_2form_4);
		Type = 2;
		Form = 4;
		color = 1;
		break;
	}
	case 8:{
        Block_to_block(BlockType_3form_1);
		Type = 3;
		Form = 1;
		color = 6;
		break;
	}
	case 9:	{
        Block_to_block(BlockType_3form_2);
		Type = 3;
		Form = 2;
		color = 6;
		break;
	}
	case 10:{
        Block_to_block(BlockType_3form_3);
		Type = 3;
		Form = 3;
		color = 6;
		break;
	}
	case 11:{
		Block_to_block(BlockType_3form_4);
		Type = 3;
		Form = 4;
		color = 6;
		break;
	}
	case 12:{
		Block_to_block(BlockType_4form_1);
		Type = 4;
		Form = 1;
		color = 5;
		break;
	}
	case 13:{
		Block_to_block(BlockType_4form_2);
		Type = 4;
		Form = 2;	
		color = 5;	
		break;
	}		
	case 14:{
		Block_to_block(BlockType_4form_3);
		Type = 4;
		Form = 3;
		color = 5;
		break;
	}
	case 15:{
		Block_to_block(BlockType_4form_4);
		Type = 4;
		Form = 4;
		color = 5;
		break;
	}
	case 16:{
		Block_to_block(BlockType_5form_1);
		Type = 5;
		Form = 1;
		color = 14;
		break;
	}
	case 17:{
		Block_to_block(BlockType_5form_2);
		Type = 5;
		Form = 2;
		color = 14;
		break;
	}	
    case 18:{
		Block_to_block(BlockType_5form_3);
		Type = 5;
		Form = 3;
		color = 14;
		break;
	}	
	case 19:{
		Block_to_block(BlockType_5form_4);
		Type = 5;
		Form = 4;
		color = 14;
		break;
	}
	case 20:{
		Block_to_block(BlockType_6form_1);
		Type = 6;
		Form = 1;
		color = 10;
		break;
	}			
	case 21:{
		Block_to_block(BlockType_6form_2);
		Type = 6;
		Form = 2;
		color = 10;
		break;
	}
	case 22:{
		Block_to_block(BlockType_6form_3);
		Type = 6;
		Form = 3;
		color = 10;
		break;
	}			
	case 23:{
		Block_to_block(BlockType_6form_4);
		Type = 6;
		Form = 4;
		color = 10;
		break;
	}
	case 24:{
		Block_to_block(BlockType_7form_1);
		Type = 7;
		Form = 1;
		color = 4;
		break;
	}
	case 25:{
		Block_to_block(BlockType_7form_2);
		Type = 7;
		Form = 2;
		color = 4;
		break;
	}
	case 26:{
		Block_to_block(BlockType_7form_3);
		Type = 7;
		Form = 3;
		color = 4;
		break;
	}
	case 27:{
		Block_to_block(BlockType_7form_4);
		Type = 7;
		Form = 4;
		color = 4;
		break;
	}
	default: break;		
	}
}
void Block::ChangeBlock(int BlockType_form_1[][4],int BlockType_form_2[][4],
    int BlockType_form_3[][4],int BlockType_form_4[][4]){  //配合TurnBlock()，进行方块的旋转
    if(Form == 1){
            Block_to_block(BlockType_form_2);
                Form = 2;
        }
    else if(Form == 2){
            Block_to_block(BlockType_form_3);
                Form = 3;
        }
    else if(Form == 3){
            Block_to_block(BlockType_form_4);
                Form = 4;
        }
    else if(Form == 4){
            Block_to_block(BlockType_form_1);
                Form = 1;
        }
}
void Block::TurnBlock(){//旋转方块：顺时针 
	switch(Type){
		case 1:{
		   ChangeBlock(BlockType_1form_1[][4],BlockType_1form_2[][4],
    BlockType_1form_3[][4],BlockType_1form_4[][4]);
			break;
		}
			
		case 2:{
			ChangeBlock(BlockType_2form_1[][4],BlockType_2form_2[][4],
    BlockType_2form_3[][4],BlockType_2form_4[][4]);
			break;
		}
		case 3:{
		ChangeBlock(BlockType_3form_1[][4],BlockType_3form_2[][4],
    BlockType_3form_3[][4],BlockType_3form_4[][4]);
			break;
		}
		case 4:{
			ChangeBlock(BlockType_4form_1[][4],BlockType_4form_2[][4],
    BlockType_4form_3[][4],BlockType_4form_4[][4]);
			break;
		}
		case 5:{	
			ChangeBlock(BlockType_5form_1[][4],BlockType_5form_2[][4],
    BlockType_5form_3[][4],BlockType_5form_4[][4]);
			break;
		}
		case 6:{
		ChangeBlock(BlockType_6form_1[][4],BlockType_6form_2[][4],
    BlockType_6form_3[][4],BlockType_6form_4[][4]);
			break;
		}
		case 7:{
			ChangeBlock(BlockType_7form_1[][4],BlockType_7form_2[][4],
    BlockType_7form_3[][4],BlockType_7form_4[][4]);
			break;
		}
		default: break;
		
	}
	
	
}


