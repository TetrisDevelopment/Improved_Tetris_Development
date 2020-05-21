#include "block.h"
#include <cstring>
#include <windows.h>
#include <cstdlib>
#include <time.h> 
Block::Block() { //初始化各方块（7个基础方块 +几种旋转状态） 
    memset(BlockType_1form_1, 0, sizeof(BlockType_1form_1));
    BlockType_1form_1[1][0]=1;//    ■■■■
    BlockType_1form_1[1][1]=1;//    
    BlockType_1form_1[1][2]=1;//    
    BlockType_1form_1[1][3]=1;//    

    memset(BlockType_1form_2, 0, sizeof(BlockType_1form_2));
    BlockType_1form_2[0][2]=1;//    ■
    BlockType_1form_2[1][2]=1;//    ■
    BlockType_1form_2[2][2]=1;//    ■
    BlockType_1form_2[3][2]=1;//    ■

    memset(BlockType_2form_1, 0, sizeof(BlockType_2form_1));
    BlockType_2form_1[1][0]=1;//
    BlockType_2form_1[2][0]=1;//    ■
    BlockType_2form_1[2][1]=1;//    ■■■
    BlockType_2form_1[2][2]=1;//

    memset(BlockType_2form_2, 0, sizeof(BlockType_2form_2)); 
    BlockType_2form_2[1][1]=1;//     ■
    BlockType_2form_2[2][1]=1;//     ■
    BlockType_2form_2[3][0]=1;//   ■■
    BlockType_2form_2[3][1]=1;

    memset(BlockType_2form_3, 0, sizeof(BlockType_2form_3)); 
    BlockType_2form_3[2][0]=1;//
    BlockType_2form_3[2][1]=1;//    ■■■
    BlockType_2form_3[2][2]=1;//        ■
    BlockType_2form_3[3][2]=1;//

    memset(BlockType_2form_4, 0, sizeof(BlockType_2form_4));
    BlockType_2form_4[1][1]=1;//
    BlockType_2form_4[1][2]=1;//    ■■
    BlockType_2form_4[2][1]=1;//    ■
    BlockType_2form_4[3][1]=1;//    ■

    memset(BlockType_3form_1, 0, sizeof(BlockType_3form_1));
    BlockType_3form_1[2][2]=1;//    
    BlockType_3form_1[3][0]=1;//    
    BlockType_3form_1[3][1]=1;//        ■    
    BlockType_3form_1[3][2]=1;//    ■■■

    memset(BlockType_3form_2, 0, sizeof(BlockType_3form_2));
    BlockType_3form_2[1][0]=1;//    
    BlockType_3form_2[1][1]=1;//    ■■    
    BlockType_3form_2[2][1]=1;//      ■
    BlockType_3form_2[3][1]=1;//      ■

    memset(BlockType_3form_3, 0, sizeof(BlockType_3form_3));
    BlockType_3form_3[2][0]=1;//
    BlockType_3form_3[2][1]=1;//
    BlockType_3form_3[2][2]=1;//    ■■■
    BlockType_3form_3[3][0]=1;//    ■

    memset(BlockType_3form_4, 0, sizeof(BlockType_3form_4));
    BlockType_3form_4[1][1]=1;//    
    BlockType_3form_4[2][1]=1;//    ■
    BlockType_3form_4[3][1]=1;//    ■
    BlockType_3form_4[3][2]=1;//    ■■

    memset(BlockType_4form_1, 0, sizeof(BlockType_4form_1));
    BlockType_4form_1[2][1]=1;//
    BlockType_4form_1[3][0]=1;//
    BlockType_4form_1[3][1]=1;//      ■
    BlockType_4form_1[3][2]=1;//    ■■■

    memset(BlockType_4form_2, 0, sizeof(BlockType_4form_2));
    BlockType_4form_2[1][1]=1;//
    BlockType_4form_2[2][0]=1;//     ■
    BlockType_4form_2[2][1]=1;//   ■■
    BlockType_4form_2[3][1]=1;//     ■

    memset(BlockType_4form_3, 0, sizeof(BlockType_4form_3));
    BlockType_4form_3[2][0]=1;//
    BlockType_4form_3[2][1]=1;//
    BlockType_4form_3[2][2]=1;//    ■■■
    BlockType_4form_3[3][1]=1;//      ■

    memset(BlockType_4form_4, 0, sizeof(BlockType_4form_4));
    BlockType_4form_4[1][1]=1;//
    BlockType_4form_4[2][1]=1;//    ■
    BlockType_4form_4[2][2]=1;//    ■■
    BlockType_4form_4[3][1]=1;//    ■

    memset(BlockType_5form_1, 0, sizeof(BlockType_5form_1));
    BlockType_5form_1[2][0]=1;//
    BlockType_5form_1[2][1]=1;//
    BlockType_5form_1[3][0]=1;//    ■■
    BlockType_5form_1[3][1]=1;//    ■■

    memset(BlockType_6form_1, 0, sizeof(BlockType_6form_1));
    BlockType_6form_1[2][1]=1;//
    BlockType_6form_1[2][2]=1;//
    BlockType_6form_1[3][0]=1;//      ■■
    BlockType_6form_1[3][1]=1;//    ■■

    memset(BlockType_6form_2, 0, sizeof(BlockType_6form_2));
    BlockType_6form_2[1][0]=1;//
    BlockType_6form_2[2][0]=1;//    ■
    BlockType_6form_2[2][1]=1;//    ■■
    BlockType_6form_2[3][1]=1;//      ■

    memset(BlockType_7form_1, 0, sizeof(BlockType_7form_1));
    BlockType_7form_1[2][0]=1;//
    BlockType_7form_1[2][1]=1;//
    BlockType_7form_1[3][1]=1;//    ■■
    BlockType_7form_1[3][2]=1;//      ■■

    memset(BlockType_7form_2, 0, sizeof(BlockType_7form_2));
    BlockType_7form_2[1][2]=1;//
    BlockType_7form_2[2][1]=1;//      ■
    BlockType_7form_2[2][2]=1;//    ■■
    BlockType_7form_2[3][1]=1;//    ■
    
    //输出时遇到‘0’输出“（空格）（空格）”。遇到‘1’ 输出“ ■” 
    //换行 cout << endl; 
}
void Block:: Record_BlockType_form(){ //初始化数组 Choose_BlockType_form
	Choose_BlockType_form[1]=2;//    ■■■■
	
	Choose_BlockType_form[2]=4;//    ■
  							   //    ■■■
  							   
	Choose_BlockType_form[3]=4;//        ■    
                               //    ■■■
                               
	Choose_BlockType_form[4]=4;//      ■
   							   //    ■■■
	
	Choose_BlockType_form[5]=1;//    ■■
                               //    ■■
	
	Choose_BlockType_form[6]=2;//      ■■
    						   //    ■■
	
	Choose_BlockType_form[7]=2;//    ■■
    						   //      ■■
		
}
void Block::color(int c) { //设置随机颜色（暂定）或采用一种类型的方块固定一种颜色 
	switch (c) //c= rand()%7;
	{
	case 0: c = 9; break;
	case 1:
	case 2: c = 12; break;
	case 3:
	case 4: c = 14; break;
	case 5: c = 10; break;
	case 6: c = 13; break;
	default: c = 7; break;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    //SetConsoleTextAttribute()函数是一个API设置字体颜色和背景色的函数
}
void Block::RandBlock(){   //随机生成方块
    srand((unsigned)time(NULL));  //初始化随机数
	switch (rand()%19){
	case 0:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_1form_1[i][j];
			}
		}
		Type = 1;
		Form = 1;
		break;
	}
	case 1:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_1form_2[i][j];
			}
		}	
		Type = 1;
		Form = 2;	
		break;
	}
	case 2:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_2form_1[i][j];
			}
		}
		Type = 2;
		Form = 1;
		break;
	}
	case 3:	{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_2form_2[i][j];
			}
		}
		Type = 2;
		Form = 2;
		break;
	}	
	case 4:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_2form_3[i][j];
			}
		}
		Type = 2;
		Form = 3;
		break;
	}
	case 5:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_2form_4[i][j];
			}
		}
		Type = 2;
		Form = 4;
		break;
	}
	case 6:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_3form_1[i][j];
			}
		}
		Type = 3;
		Form = 1;
		break;
	}
	case 7:	{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_3form_2[i][j];
			}
		}
		Type = 3;
		Form = 2;
		break;
	}
	case 8:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_3form_3[i][j];
			}
		}
		Type = 3;
		Form = 3;
		break;
	}
	case 9:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_3form_4[i][j];
			}
		}
		Type = 3;
		Form = 4;
		break;
	}
	case 10:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_4form_1[i][j];
			}
		}
		Type = 4;
		Form = 1;
		break;
	}
	case 11:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_4form_2[i][j];
			}
		}
		Type = 4;
		Form = 2;		
		break;
	}		
	case 12:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_4form_3[i][j];
			}
		}
		Type = 4;
		Form = 3;
		break;
	}
	case 13:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_4form_4[i][j];
			}
		}
		Type = 4;
		Form = 4;
		break;
	}
	case 14:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_5form_1[i][j];
			}
		}
		Type = 5;
		Form = 1;
		break;
	}
	case 15:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_6form_1[i][j];
			}
		}
		Type = 6;
		Form = 1;
		break;
	}			
	case 16:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_6form_2[i][j];
			}
		}
		Type = 6;
		Form = 2;
		break;
	}
	case 17:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_7form_1[i][j];
			}
		}
		Type = 7;
		Form = 1;
		break;
	}
	case 18:{
		for(int i=0; i<4 ; i++){
			for(int j=0; j<4 ; j++){
				 block[i][j] =  BlockType_7form_2[i][j];
			}
		}
		Type = 7;
		Form = 2;
		break;
	}
	default: break;		
	}
	
	   //之后会写一个函数来替代for循环的功能 
}
void Block::TurnBlock(){//旋转方块：逆时针  (暂定：此方法毕竟麻烦)
	switch(Type){
		case 1:{
		    if(Form == 1){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_1form_2[i][j];
					}
				}
				Form = 2;	
			} 
			else if(Form == 2){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_1form_1[i][j];
					}
				}
				Form = 1;		
			} 
			break;
		}
			
		case 2:{
			if(Form == 1){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_2form_2[i][j];
					}
				}
				Form = 2;	
			} 
			else if(Form == 2){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_2form_3[i][j];
					}
				}
				Form = 3;		
			} 
			else if(Form == 3){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_2form_4[i][j];
					}
				}
				Form = 4;		
			} 
			else if(Form == 4){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_2form_1[i][j];
					}
				}
				Form = 1;		
			} 
			break;
		}
		case 3:{
			if(Form == 1){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_3form_2[i][j];
					}
				}
				Form = 2;	
			} 
			else if(Form == 2){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_3form_3[i][j];
					}
				}
				Form = 3;		
			} 
			else if(Form == 3){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_3form_4[i][j];
					}
				}
				Form = 4;		
			} 
			else if(Form == 4){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_3form_1[i][j];
					}
				}
				Form = 1;		
			} 
			break;
		}
		case 4:{
			if(Form == 1){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_4form_2[i][j];
					}
				}
				Form = 2;	
			} 
			else if(Form == 2){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_4form_3[i][j];
					}
				}
				Form = 3;		
			} 
			else if(Form == 3){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_4form_4[i][j];
					}
				}
				Form = 4;		
			} 
			else if(Form == 4){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_4form_1[i][j];
					}
				}
				Form = 1;		
			} 
			break;
		}
		case 5:{	
			break;
		}
		case 6:{
			if(Form == 1){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_6form_2[i][j];
					}
				}
				Form = 2;	
			} 
			else if(Form == 2){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_6form_1[i][j];
					}
				}
				Form = 1;		
			} 
			break;
		}
		case 7:{
			if(Form == 1){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_7form_2[i][j];
					}
				}
				Form = 2;	
			} 
			else if(Form == 2){
				for(int i=0; i<4 ; i++){
					for(int j=0; j<4 ; j++){
						 block[i][j] =  BlockType_7form_1[i][j];
					}
				}
				Form = 1;		
			} 
			break;
		}
		default: break;
		
	}
	
	
}

//参考代码：https://blog.csdn.net/weixin_44171004/article/details/86680351
//https://www.cnblogs.com/yonggandefeng/p/6322561.html
//https://blog.csdn.net/qq_33974741/article/details/84485054?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-42.nonecase&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-42.nonecase
//https://blog.csdn.net/weixin_43735348/article/details/101003927
//难点1：怎么去调用初始化好的各个方块 (switch + rand())
//难点2：解决旋转方块 :如何将block数组中存储的方块转换form？暂定（在Block类中，新增Type和Form变量，在随机生成方块函数中，
//生成同时记录下当前block数组中的方块的类型与旋转状态，switch+if）
//存在问题： 
//      1.  RandBlock()与 TurnBlock()函数代码过于冗长 ：  
//         待解决： 写一个函数替代for循环赋值功能； 
//      2. 利用switch分支有些麻烦，可否利用参考代码中: 旋转算法，让7种基础形状变换出剩余的21种
//       解决办法：blocks[base][space_z + 1].space[i][j] = tem[4 - j - 1][i]; //控制一边坐标不变，另一边为4 - i - 1，
//        然后再行列互换，这样可以保证四次旋转不同，如果仅仅行列互换，将会导致只有两种旋转状态
//      3.在考虑初始化方块部分要不要只初始化七种基本类型方块
//       这样做的话RandBlock()函数中switch语句的case情况会从18减化至8，方便很多
//       TurnBlock()函数中也只需对block数组中所存储的数据进行行列互换就可以了。
//      4.Xcode问题与解决 
//      5.rand()产生随机数和srand((unsigned)time(NULL))初始化随机数 