#include"../include/main.h"
void shanchu_dianhua(pp txl[])
{
    system("cls");
    int i,m,mark=0;
    char phone[20];
    printf("\n\t\t ������Ҫɾ����ϵ�˵绰���룺");
    scanf("%s",phone);
    if(n==0)
    {
        printf("\n\t\t �Բ����ļ������κμ�¼");
        printf("\n\t\t ��������������˵�");
        getch();
        return;
    }
    for (i=0; i<n; i++)
    {
        if (strcmp(txl[i].dianhua,phone)==0)
        {
            printf("\n\t\t||||||||||||| ��������Ҫɾ������ϵ����Ϣ ||||||||||||");
            printf("\n\t\t||������ %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||�绰�� %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||��ַ�� %30s              |",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t �Ƿ�ɾ��?(y/n)");
            if (getch()=='y')
            {
                for (m=i; m<n-1; m++)
                    txl[m]=txl[m+1];
                n--;
                mark++;
                printf("\n\t\t ɾ���ɹ�");
                printf("\n\t\t �Ƿ����ɾ��?(y/n)");
                if (getch()=='y')
                    shanchu_dianhua(txl);
                return;
            }
            else
                return;
        }
        continue;
    }
    if (mark==0)
    {
        printf("\n\t\t û�и���ϵ�˵ļ�¼");
        printf("\n\t\t �Ƿ����ɾ��?(y/n)");
        if (getch()=='y')
            return ;
    }
}
