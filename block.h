class Block{
public:
    Block();  //初始化随机数   
    void RandBlock(); //随机生成方块
    void TurnBlock();//旋转方块： 顺时针
    int block[4][4];//存储生成方块
    int getColor(); //获取当前颜色 
    void Block_to_block(int BlockType_form_[][4]); // 方块拷贝到block数组	
private:
	int Type; //记录block数组当前所存储的方块的类型（七大类） 
	int Form; //记录block数组当前所存储的方块的旋转状态； 
    int color; // 记录当前颜色 
    
 //-------------------------------------------------------------------------//  
   // 11
    static int BlockType_1form_1[4][4]; //    ■■■■    // 顺时针旋转 form1-4 

    static int BlockType_1form_2[4][4]; //    ■
   							            //    ■
								        //    ■
   								        //    ■
   								        
    static int BlockType_1form_3[4][4]; //    ■■■■    

    static int BlockType_1form_4[4][4]; //    ■
   							            //    ■
								        //    ■
   								        //    ■   								        
//-------------------------------------------------------------------------//  
    //1
    static int BlockType_2form_1[4][4]; //    ■
                                        //    ■■■
                                        
    static int BlockType_2form_2[4][4]; //    ■■
     							        //    ■
  								        //    ■
    
    static int BlockType_2form_3[4][4]; //    ■■■  
                                        //        ■
    
    static int BlockType_2form_4[4][4]; //     ■  
                                        //     ■
                                        //   ■■
                                        
//-------------------------------------------------------------------------// 
    //6
    static int BlockType_3form_1[4][4]; //        ■    
                                        //    ■■■
                                        
    static int BlockType_3form_2[4][4]; //    ■
                                        //    ■
                                        //    ■■
  
    static int BlockType_3form_3[4][4]; //    ■■■
                                        //    ■
                                        
    static int BlockType_3form_4[4][4]; //    ■■    
    							        //      ■
   								        //      ■                       
                                            
//-------------------------------------------------------------------------//        
       //5                   
    static int BlockType_4form_1[4][4]; //      ■
   								        //    ■■■
   								        
    static int BlockType_4form_2[4][4]; //    ■
                                        //    ■■
  								        //    ■   								        
   								 
    static int BlockType_4form_3[4][4]; //    ■■■
                                        //      ■
   								 
    static int BlockType_4form_4[4][4]; //    ■
    							        //  ■■
   							           //     ■
   								 
//-------------------------------------------------------------------------// 								        
    //14
    static int BlockType_5form_1[4][4]; //    ■■
                                        //    ■■
                                        
    static int BlockType_5form_2[4][4]; //    ■■
                                        //    ■■                                        
                                        
    static int BlockType_5form_3[4][4]; //    ■■
                                        //    ■■
                                        
    static int BlockType_5form_4[4][4]; //    ■■
                                        //    ■■                                                                             
    
//-------------------------------------------------------------------------// 
    // 10
    static int BlockType_6form_1[4][4];//      ■■
    							       //    ■■
    
    static int BlockType_6form_2[4][4]; //    ■
   								        //    ■■
   								        //      ■

    static int BlockType_6form_3[4][4];//      ■■
    							       //    ■■
    
    static int BlockType_6form_4[4][4]; //    ■
   								        //    ■■
   								        //      ■
   								        
//-------------------------------------------------------------------------// 
   //4
    static int BlockType_7form_1[4][4]; //    ■■
                                        //      ■■
    
    static int BlockType_7form_2[4][4]; //      ■
    							        //    ■■
    	      					        //    ■
    
    static int BlockType_7form_3[4][4]; //    ■■
                                        //      ■■
    
    static int BlockType_7form_4[4][4]; //      ■
    							        //    ■■
    	      					        //    ■
    
//-------------------------------------------------------------------------//     
    
};

