/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void shanchu(pp txl[])
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
    printf("\n\t\t|||||||||||||||||| ɾ���˵� ||||||||||||||||||||");
    printf("\n\t\t||          1-ɾ������ 2-ɾ������             ||");
    printf("\n\t\t||          3-�������˵�                      ||");
    printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t ��ѡ��������Ҫ�ķ���");
    c=getch();
    switch(c)
    {
    case '1':
        shanchu_quanbu();
        break;
    case '2':
        shanchu_dange(txl);
        break;
    case '3':
        zhucaidan(txl);
        break;
    default:
        zhucaidan(txl);
        break;
    }
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
