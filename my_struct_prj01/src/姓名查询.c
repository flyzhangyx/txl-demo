#include"../include/main.h"
void chazhao_xingming(pp txl[])
{
    system("cls");
    int mark=0;
    int i,c;
    char name[20];
    printf("\n\t\t||||||||||||||||����������|||||||||||||||||||||");
    printf("\n\t\t ��������Ҫ���ҵ�����:");
    scanf("%s",name);
    for(i=0; i<n; i++)
    {
        if (strcmp(txl[i].xingming,name)==0)
        {
            printf("\n\t\t||||||||||||||�����������ҵ���ϵ����Ϣ||||||||||||||||");
            printf("\n\t\t||������ %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||�绰�� %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||��ַ�� %30s              |",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            mark++;
            getch();
            return;
        }
    }
    if (mark==0)
    {
        printf("\n\t\t û���ҵ���ϵ�˵���Ϣ");
        printf("\n\t\t ���������������˵�����2�������ң�");
        c=getch();
        switch(c)
        {
        case '2':
            chazhao_xingming(txl);
            break;
        default:
            return;
            break;
        }
    }
}

