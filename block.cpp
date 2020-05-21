#include "block.h"
#include <cstring>
#include <windows.h>
#include <cstdlib>
#include <time.h> 
Block::Block() { //��ʼ�������飨7���������� +������ת״̬�� 
    memset(BlockType_1form_1, 0, sizeof(BlockType_1form_1));
    BlockType_1form_1[1][0]=1;//    ��������
    BlockType_1form_1[1][1]=1;//    
    BlockType_1form_1[1][2]=1;//    
    BlockType_1form_1[1][3]=1;//    

    memset(BlockType_1form_2, 0, sizeof(BlockType_1form_2));
    BlockType_1form_2[0][2]=1;//    ��
    BlockType_1form_2[1][2]=1;//    ��
    BlockType_1form_2[2][2]=1;//    ��
    BlockType_1form_2[3][2]=1;//    ��

    memset(BlockType_2form_1, 0, sizeof(BlockType_2form_1));
    BlockType_2form_1[1][0]=1;//
    BlockType_2form_1[2][0]=1;//    ��
    BlockType_2form_1[2][1]=1;//    ������
    BlockType_2form_1[2][2]=1;//

    memset(BlockType_2form_2, 0, sizeof(BlockType_2form_2)); 
    BlockType_2form_2[1][1]=1;//     ��
    BlockType_2form_2[2][1]=1;//     ��
    BlockType_2form_2[3][0]=1;//   ����
    BlockType_2form_2[3][1]=1;

    memset(BlockType_2form_3, 0, sizeof(BlockType_2form_3)); 
    BlockType_2form_3[2][0]=1;//
    BlockType_2form_3[2][1]=1;//    ������
    BlockType_2form_3[2][2]=1;//        ��
    BlockType_2form_3[3][2]=1;//

    memset(BlockType_2form_4, 0, sizeof(BlockType_2form_4));
    BlockType_2form_4[1][1]=1;//
    BlockType_2form_4[1][2]=1;//    ����
    BlockType_2form_4[2][1]=1;//    ��
    BlockType_2form_4[3][1]=1;//    ��

    memset(BlockType_3form_1, 0, sizeof(BlockType_3form_1));
    BlockType_3form_1[2][2]=1;//    
    BlockType_3form_1[3][0]=1;//    
    BlockType_3form_1[3][1]=1;//        ��    
    BlockType_3form_1[3][2]=1;//    ������

    memset(BlockType_3form_2, 0, sizeof(BlockType_3form_2));
    BlockType_3form_2[1][0]=1;//    
    BlockType_3form_2[1][1]=1;//    ����    
    BlockType_3form_2[2][1]=1;//      ��
    BlockType_3form_2[3][1]=1;//      ��

    memset(BlockType_3form_3, 0, sizeof(BlockType_3form_3));
    BlockType_3form_3[2][0]=1;//
    BlockType_3form_3[2][1]=1;//
    BlockType_3form_3[2][2]=1;//    ������
    BlockType_3form_3[3][0]=1;//    ��

    memset(BlockType_3form_4, 0, sizeof(BlockType_3form_4));
    BlockType_3form_4[1][1]=1;//    
    BlockType_3form_4[2][1]=1;//    ��
    BlockType_3form_4[3][1]=1;//    ��
    BlockType_3form_4[3][2]=1;//    ����

    memset(BlockType_4form_1, 0, sizeof(BlockType_4form_1));
    BlockType_4form_1[2][1]=1;//
    BlockType_4form_1[3][0]=1;//
    BlockType_4form_1[3][1]=1;//      ��
    BlockType_4form_1[3][2]=1;//    ������

    memset(BlockType_4form_2, 0, sizeof(BlockType_4form_2));
    BlockType_4form_2[1][1]=1;//
    BlockType_4form_2[2][0]=1;//     ��
    BlockType_4form_2[2][1]=1;//   ����
    BlockType_4form_2[3][1]=1;//     ��

    memset(BlockType_4form_3, 0, sizeof(BlockType_4form_3));
    BlockType_4form_3[2][0]=1;//
    BlockType_4form_3[2][1]=1;//
    BlockType_4form_3[2][2]=1;//    ������
    BlockType_4form_3[3][1]=1;//      ��

    memset(BlockType_4form_4, 0, sizeof(BlockType_4form_4));
    BlockType_4form_4[1][1]=1;//
    BlockType_4form_4[2][1]=1;//    ��
    BlockType_4form_4[2][2]=1;//    ����
    BlockType_4form_4[3][1]=1;//    ��

    memset(BlockType_5form_1, 0, sizeof(BlockType_5form_1));
    BlockType_5form_1[2][0]=1;//
    BlockType_5form_1[2][1]=1;//
    BlockType_5form_1[3][0]=1;//    ����
    BlockType_5form_1[3][1]=1;//    ����

    memset(BlockType_6form_1, 0, sizeof(BlockType_6form_1));
    BlockType_6form_1[2][1]=1;//
    BlockType_6form_1[2][2]=1;//
    BlockType_6form_1[3][0]=1;//      ����
    BlockType_6form_1[3][1]=1;//    ����

    memset(BlockType_6form_2, 0, sizeof(BlockType_6form_2));
    BlockType_6form_2[1][0]=1;//
    BlockType_6form_2[2][0]=1;//    ��
    BlockType_6form_2[2][1]=1;//    ����
    BlockType_6form_2[3][1]=1;//      ��

    memset(BlockType_7form_1, 0, sizeof(BlockType_7form_1));
    BlockType_7form_1[2][0]=1;//
    BlockType_7form_1[2][1]=1;//
    BlockType_7form_1[3][1]=1;//    ����
    BlockType_7form_1[3][2]=1;//      ����

    memset(BlockType_7form_2, 0, sizeof(BlockType_7form_2));
    BlockType_7form_2[1][2]=1;//
    BlockType_7form_2[2][1]=1;//      ��
    BlockType_7form_2[2][2]=1;//    ����
    BlockType_7form_2[3][1]=1;//    ��
    
    //���ʱ������0����������ո񣩣��ո񣩡���������1�� ����� ���� 
    //���� cout << endl; 
}
void Block:: Record_BlockType_form(){ //��ʼ������ Choose_BlockType_form
	Choose_BlockType_form[1]=2;//    ��������
	
	Choose_BlockType_form[2]=4;//    ��
  							   //    ������
  							   
	Choose_BlockType_form[3]=4;//        ��    
                               //    ������
                               
	Choose_BlockType_form[4]=4;//      ��
   							   //    ������
	
	Choose_BlockType_form[5]=1;//    ����
                               //    ����
	
	Choose_BlockType_form[6]=2;//      ����
    						   //    ����
	
	Choose_BlockType_form[7]=2;//    ����
    						   //      ����
		
}
void Block::color(int c) { //���������ɫ���ݶ��������һ�����͵ķ���̶�һ����ɫ 
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
    //SetConsoleTextAttribute()������һ��API����������ɫ�ͱ���ɫ�ĺ���
}
void Block::RandBlock(){   //������ɷ���
    srand((unsigned)time(NULL));  //��ʼ�������
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
	
	   //֮���дһ�����������forѭ���Ĺ��� 
}
void Block::TurnBlock(){//��ת���飺��ʱ��  (�ݶ����˷����Ͼ��鷳)
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

//�ο����룺https://blog.csdn.net/weixin_44171004/article/details/86680351
//https://www.cnblogs.com/yonggandefeng/p/6322561.html
//https://blog.csdn.net/qq_33974741/article/details/84485054?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-42.nonecase&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-42.nonecase
//https://blog.csdn.net/weixin_43735348/article/details/101003927
//�ѵ�1����ôȥ���ó�ʼ���õĸ������� (switch + rand())
//�ѵ�2�������ת���� :��ν�block�����д洢�ķ���ת��form���ݶ�����Block���У�����Type��Form��������������ɷ��麯���У�
//����ͬʱ��¼�µ�ǰblock�����еķ������������ת״̬��switch+if��
//�������⣺ 
//      1.  RandBlock()�� TurnBlock()������������߳� ��  
//         ������� дһ���������forѭ����ֵ���ܣ� 
//      2. ����switch��֧��Щ�鷳���ɷ����òο�������: ��ת�㷨����7�ֻ�����״�任��ʣ���21��
//       ����취��blocks[base][space_z + 1].space[i][j] = tem[4 - j - 1][i]; //����һ�����겻�䣬��һ��Ϊ4 - i - 1��
//        Ȼ�������л������������Ա�֤�Ĵ���ת��ͬ������������л��������ᵼ��ֻ��������ת״̬
//      3.�ڿ��ǳ�ʼ�����鲿��Ҫ��Ҫֻ��ʼ�����ֻ������ͷ���
//       �������Ļ�RandBlock()������switch����case������18������8������ܶ�
//       TurnBlock()������Ҳֻ���block���������洢�����ݽ������л����Ϳ����ˡ�
//      4.Xcode�������� 
//      5.rand()�����������srand((unsigned)time(NULL))��ʼ������� 