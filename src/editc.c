/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void xiugai(pp txl[])
{
    system("cls");
    char c;
    if(n==0)
    {
        printf("\n\t\t �Բ����ļ������κμ�¼");
        printf("\n\t\t ��������������˵�");
        getch();
        return;
    }
    system("cls");
    printf("\n\t\t|||||||||||||||||�޸���ϵ�˲˵�||||||||||||||||||||||||");
    printf("\n\t\t||         1.�������޸�    2.���绰�޸�              ||");
    printf("\n\t\t||              ��������������˵�                   ||");
    printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    c=getch();
    switch(c)
    {
    case '1':
        xiugai_xingming(txl);
        break;
    case '2':
        xiugai_dianhua(txl);
        break;
    default:
        zhucaidan(txl);
        break;
    }
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
