/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void shanchu_xingming(pp txl[])
{
    system("cls");
    int i,m,mark=0,a=0;
    char name[20];
    printf("\n\t\t ������Ҫɾ����ϵ��������");
    scanf("%s",name);
    for (i=a; i<n; i++)
    {
        if (strcmp(txl[i].xingming,name) == 0)
        {
            printf("\n\t\t ��������Ҫɾ������ϵ�˼�¼��");
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||������ %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||�绰�� %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||��ַ�� %30s             ||",txl[i].dizhi);
            printf("\n\t\t||��˾�� %30s             ||",txl[i].com);
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
                    shanchu_xingming(txl);
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
            shanchu_xingming(txl);
        return;
    }
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
