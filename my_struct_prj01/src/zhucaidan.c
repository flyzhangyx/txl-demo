#include"../include/main.h"
void zhucaidan()
{
    system("cls");
    char c;
    system("cls");
    printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t||        1.�����ϵ��    2.��ѯ����ʾ��ϵ��    ||");
    printf("\n\t\t||        3.ɾ����ϵ��    4.�޸���ϵ��          ||");
    printf("\n\t\t||        5.���沢�˳�    0.�����沢�˳�        ||");
    printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t ��ѡ����ѡ�");
    c=getch();
    switch (c)
    {
    case '1':
        zengjia(txl);
        break;
    case '2':
        chazhao(txl);
        break;
    case '3':
        shanchu(txl);
        break;
    case '4':
        xiugai(txl);
        break;
    case '5':
        writefile(txl);
        break;
    case '0':
        exit(0);
    default:
        zhucaidan(txl);
    }
}
