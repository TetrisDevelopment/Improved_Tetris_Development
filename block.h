
class Block{
public:
    Block(); //��ʼ�������飨7���������� +������ת״̬�� 
    void RandBlock(); //������ɷ���
    void TurnBlock();//��ת���飺��ʱ��
    void Record_BlockType_form();//��ʼ������ Choose_BlockType_form (����ֱ�Ӷ�������ݳ�Ա��ʼ��)
    int block[4][4];//�洢���ɷ���
    void color(int c);  //���������ɫ
	// void color();
		
private:
	int Type; //��¼block���鵱ǰ���洢�ķ�������ͣ��ߴ��ࣩ 
	int Form; //��¼ block���鵱ǰ���洢�ķ������ת״̬�� 
    int Choose_BlockType_form[10]; //��¼ÿ�ַ���ֱ����ļ���ѡ��״̬
    int BlockType_1form_1[4][4]; //    �� �� �� ��    // ��ʱ����ת form1-4 

    int BlockType_1form_2[4][4]; //    ��
   							     //    ��
								 //    ��
   								 //    ��
    
    int BlockType_2form_1[4][4]; //    ��
  								 //    �� �� ��
    
    int BlockType_2form_2[4][4]; //     ��  
                                 //     ��
                                 //   �� ��
    
    int BlockType_2form_3[4][4]; //    �� �� ��  
                                 //        ��
    
    int BlockType_2form_4[4][4]; //    �� ��
     							 //    ��
  								 //    ��
    
    int BlockType_3form_1[4][4]; //        ��    
                                 //    �� �� ��
                                 
    int BlockType_3form_2[4][4]; //    �� ��    
    							 //      ��
   								 //      ��
   								 
    int BlockType_3form_3[4][4]; //    �� �� ��
                                 //    ��
                                 
    int BlockType_3form_4[4][4]; //    ��
                                 //    ��
                                 //    �� ��
                                 
    int BlockType_4form_1[4][4]; //      ��
   								 //    �� �� ��
   								 
    int BlockType_4form_2[4][4]; //     ��
    							 //   �� ��
   								 //     ��
   								 
    int BlockType_4form_3[4][4]; //    �� �� ��
   								 //      ��
   								 
    int BlockType_4form_4[4][4]; //    ��
                                 //    �� ��
  								 //    ��
    
    int BlockType_5form_1[4][4]; //    �� ��
                                 //    �� ��
    
    int BlockType_6form_1[4][4];//      �� ��
    							//    �� ��
    
    int BlockType_6form_2[4][4]; //    ��
   								 //    �� ��
   								 //      ��
    
    int BlockType_7form_1[4][4]; //    �� ��
    							 //      �� ��
    
    int BlockType_7form_2[4][4]; //      ��
    							 //    �� ��
    	      					 //    ��
    
    
     
    
};

