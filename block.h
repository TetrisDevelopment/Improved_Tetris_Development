class Block{
public:
    Block();  //��ʼ�������   
    void RandBlock(); //������ɷ���
    void TurnBlock();//��ת���飺 ˳ʱ��
    int block[4][4];//�洢���ɷ���
    int getColor(); //��ȡ��ǰ��ɫ 
    void Block_to_block(int BlockType_form_[][4]); // ���鿽����block����	
private:
	int Type; //��¼block���鵱ǰ���洢�ķ�������ͣ��ߴ��ࣩ 
	int Form; //��¼block���鵱ǰ���洢�ķ������ת״̬�� 
    int color; // ��¼��ǰ��ɫ 
    
 //-------------------------------------------------------------------------//  
   // 11
    static int BlockType_1form_1[4][4]; //    ��������    // ˳ʱ����ת form1-4 

    static int BlockType_1form_2[4][4]; //    ��
   							            //    ��
								        //    ��
   								        //    ��
   								        
    static int BlockType_1form_3[4][4]; //    ��������    

    static int BlockType_1form_4[4][4]; //    ��
   							            //    ��
								        //    ��
   								        //    ��   								        
//-------------------------------------------------------------------------//  
    //1
    static int BlockType_2form_1[4][4]; //    ��
                                        //    ������
                                        
    static int BlockType_2form_2[4][4]; //    ����
     							        //    ��
  								        //    ��
    
    static int BlockType_2form_3[4][4]; //    ������  
                                        //        ��
    
    static int BlockType_2form_4[4][4]; //     ��  
                                        //     ��
                                        //   ����
                                        
//-------------------------------------------------------------------------// 
    //6
    static int BlockType_3form_1[4][4]; //        ��    
                                        //    ������
                                        
    static int BlockType_3form_2[4][4]; //    ��
                                        //    ��
                                        //    ����
  
    static int BlockType_3form_3[4][4]; //    ������
                                        //    ��
                                        
    static int BlockType_3form_4[4][4]; //    ����    
    							        //      ��
   								        //      ��                       
                                            
//-------------------------------------------------------------------------//        
       //5                   
    static int BlockType_4form_1[4][4]; //      ��
   								        //    ������
   								        
    static int BlockType_4form_2[4][4]; //    ��
                                        //    ����
  								        //    ��   								        
   								 
    static int BlockType_4form_3[4][4]; //    ������
                                        //      ��
   								 
    static int BlockType_4form_4[4][4]; //    ��
    							        //  ����
   							           //     ��
   								 
//-------------------------------------------------------------------------// 								        
    //14
    static int BlockType_5form_1[4][4]; //    ����
                                        //    ����
                                        
    static int BlockType_5form_2[4][4]; //    ����
                                        //    ����                                        
                                        
    static int BlockType_5form_3[4][4]; //    ����
                                        //    ����
                                        
    static int BlockType_5form_4[4][4]; //    ����
                                        //    ����                                                                             
    
//-------------------------------------------------------------------------// 
    // 10
    static int BlockType_6form_1[4][4];//      ����
    							       //    ����
    
    static int BlockType_6form_2[4][4]; //    ��
   								        //    ����
   								        //      ��

    static int BlockType_6form_3[4][4];//      ����
    							       //    ����
    
    static int BlockType_6form_4[4][4]; //    ��
   								        //    ����
   								        //      ��
   								        
//-------------------------------------------------------------------------// 
   //4
    static int BlockType_7form_1[4][4]; //    ����
                                        //      ����
    
    static int BlockType_7form_2[4][4]; //      ��
    							        //    ����
    	      					        //    ��
    
    static int BlockType_7form_3[4][4]; //    ����
                                        //      ����
    
    static int BlockType_7form_4[4][4]; //      ��
    							        //    ����
    	      					        //    ��
    
//-------------------------------------------------------------------------//     
    
};

