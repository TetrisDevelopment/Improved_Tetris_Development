
class Block{
public:
    Block(); //初始化各方块（7个基础方块 +几种旋转状态） 
    void RandBlock(); //随机生成方块
    void TurnBlock();//旋转方块：逆时针
    void Record_BlockType_form();//初始化数组 Choose_BlockType_form (不能直接对类的数据成员初始化)
    int block[4][4];//存储生成方块
    void color(int c);  //设置随机颜色
	// void color();
		
private:
	int Type; //记录block数组当前所存储的方块的类型（七大类） 
	int Form; //记录 block数组当前所存储的方块的旋转状态； 
    int Choose_BlockType_form[10]; //记录每种方块分别有哪几种选择状态
    int BlockType_1form_1[4][4]; //    ■ ■ ■ ■    // 逆时针旋转 form1-4 

    int BlockType_1form_2[4][4]; //    ■
   							     //    ■
								 //    ■
   								 //    ■
    
    int BlockType_2form_1[4][4]; //    ■
  								 //    ■ ■ ■
    
    int BlockType_2form_2[4][4]; //     ■  
                                 //     ■
                                 //   ■ ■
    
    int BlockType_2form_3[4][4]; //    ■ ■ ■  
                                 //        ■
    
    int BlockType_2form_4[4][4]; //    ■ ■
     							 //    ■
  								 //    ■
    
    int BlockType_3form_1[4][4]; //        ■    
                                 //    ■ ■ ■
                                 
    int BlockType_3form_2[4][4]; //    ■ ■    
    							 //      ■
   								 //      ■
   								 
    int BlockType_3form_3[4][4]; //    ■ ■ ■
                                 //    ■
                                 
    int BlockType_3form_4[4][4]; //    ■
                                 //    ■
                                 //    ■ ■
                                 
    int BlockType_4form_1[4][4]; //      ■
   								 //    ■ ■ ■
   								 
    int BlockType_4form_2[4][4]; //     ■
    							 //   ■ ■
   								 //     ■
   								 
    int BlockType_4form_3[4][4]; //    ■ ■ ■
   								 //      ■
   								 
    int BlockType_4form_4[4][4]; //    ■
                                 //    ■ ■
  								 //    ■
    
    int BlockType_5form_1[4][4]; //    ■ ■
                                 //    ■ ■
    
    int BlockType_6form_1[4][4];//      ■ ■
    							//    ■ ■
    
    int BlockType_6form_2[4][4]; //    ■
   								 //    ■ ■
   								 //      ■
    
    int BlockType_7form_1[4][4]; //    ■ ■
    							 //      ■ ■
    
    int BlockType_7form_2[4][4]; //      ■
    							 //    ■ ■
    	      					 //    ■
    
    
     
    
};

