#include"../include/main.h"
void xiugai_xingming(pp txl[])
{
    system("cls");
    char c;
    int i,mark=0;
    char name[20];
    printf("\n\t\t ������Ҫ�޸ĵ���ϵ��������");
    scanf("%s",name);
    if(n==0)
    {
        printf("\n\t\t �ļ������κ���ϵ��");
        printf("\n\t\t ��������������˵�");
        getch();
        mark++;
        return;
    }
    for(i=0; i<n; i++)
    {
        if(strcmp(txl[i].xingming,name)==0)
        {
            printf("\n\t\t ��������Ҫ�޸ĵ���ϵ����Ϣ");
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||������ %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||�绰�� %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||��ַ�� %30s             ||",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t �Ƿ��޸�(y/n)");
            if(getch()=='y')
            {
                printf("\n\t|||||||||||||��ѡ���޸���Ϣ||||||||||||||||");
                printf("\n\t||        1.�޸�����     2.�޸ĵ绰      ||");
                printf("\n\t||              3.�޸ĵ�ַ               ||");
                printf("\n\t|||||||||||||||||||||||||||||||||||||||||||");
                printf("\n\t ��ѡ��������Ҫ�ķ���");
                scanf("%s",&c);
                switch(c)
                {
                case 1:
                    printf("\n\t ��������������");
                    scanf("%s",txl[i].xingming);
                    break;
                case 2:
                    printf("\n\t �������µ绰��");
                    scanf("%s",txl[i].dianhua);
                    break;
                case 3:
                    printf("\n\t �������µ�ַ: ");
                    scanf("%s",txl[i].dizhi);
                    break;
                }
            }
        }
    }
    if(mark==0)
    {
        printf("\n\t\t û���ҵ���ϵ����Ϣ");
        printf("\n\t �Ƿ�����޸ģ�(Y/N):");
        if(getch()=='y')
            xiugai_xingming(txl);
        return;
    }
}
