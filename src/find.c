/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void chazhao(pp txl[])
{
    char c;
    system("cls");
    printf("\n\t\t||||||||||||||||||| ��ʾ�Ͳ�ѯ��ϵ�� ||||||||||||||||||");
    printf("\n\t\t||      1.�����ʾ����          2.��������ѯ         ||");
    printf("\n\t\t||      3.���绰��ѯ            4.�������˵�         ||");
    printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t ��ѡ��������Ҫ�ķ���");
    c=getch();
    switch (c)
    {
    case '1':
        system("cls");
        xianshi(txl);
        break;
    case '2':
        system("cls");
        chazhao_xingming(txl);
        break;
    case '3':
        system("cls");
        chazhao_dianhua(txl);
        break;
    case '4':
        zhucaidan(txl);
        break;
    }
    getchar();
    zhucaidan();
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
