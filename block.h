class Block{
public:
    Block();
    void RandBlock(); //������ɷ���
    void TurnBlock();//��ת���飺��ʱ��
    int block[4][4];//�洢���ɷ���
private:
    int Choose_BlockType_form[10]; //��¼ÿ�ַ���ֱ����ļ���ѡ��״̬
    int BlockType_1form_1[4][4]; // ----
    int BlockType_1form_2[4][4]; //||||
    int BlockType_2form_1[4][4]; // |___
    int BlockType_2form_2[4][4]; // __||
    int BlockType_2form_3[4][4]; // ---|
    int BlockType_2form_4[4][4]; // |||-
    int BlockType_3form_1[4][4]; // ___|
    int BlockType_3form_2[4][4]; // --||
    int BlockType_3form_3[4][4]; // ||--
    int BlockType_3form_4[4][4]; // |||_
    int BlockType_4form_1[4][4]; // _||_
    int BlockType_4form_2[4][4]; // -|||
    int BlockType_4form_3[4][4]; // __|_
    int BlockType_4form_4[4][4]; // ||-|
    int BlockType_5form_1[4][4]; // |+|
    int BlockType_6form_1[4][4]; // _|-
    int BlockType_6form_2[4][4]; // |-_
    int BlockType_7form_1[4][4]; // -|_
    int BlockType_7form_2[4][4]; // _-|
};
