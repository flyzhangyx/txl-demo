/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void chazhao_dianhua(pp txl[])
{
    system("cls");
    int mark=0;
    int i;
    char phone[15];
    printf("\n\t\t||||||||||||||||||| ���绰���� ||||||||||||||||||||||||||");
    printf("\n\t\t ������绰����:");
    scanf("%s",phone);
    for(i=0; i<n; i++)
    {
        if (strcmp(txl[i].dianhua,phone)==0)
        {
            printf("\n\t\t||||||||||||| �����������ҵ�ѧ����Ϣ |||||||||||||||||");
            printf("\n\t\t||������ %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||�绰�� %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||��ַ�� %30s             ||",txl[i].dizhi);
            printf("\n\t\t||��˾�� %30s             ||",txl[i].com);
            printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            mark++;
            getch();
            return;
        }
    }
    if (mark==0)
    {
        printf("\n\t\t û���ҵ���ϵ�˵���Ϣ");
        printf("\n\t\t ��������������˵�");
        getch();
        return;
    }
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
