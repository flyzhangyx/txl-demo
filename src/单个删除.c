/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void shanchu_dange(pp txl[])
{
    system("cls");
    char c;
    printf("\n\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t||           1.������ɾ��    2.���绰ɾ��               ||");
    printf("\n\t||                                                      ||");
    printf("\n\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    c=getch();
    switch (c)
    {
    case '1':
        shanchu_xingming(txl);
        break;
    case '2':
        shanchu_dianhua(txl);
        break;
    }
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
