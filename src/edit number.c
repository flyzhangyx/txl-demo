/*������������ ѧ��2017210415 ���15 �༶01141709*/
#include"../include/main.h"
void xiugai_dianhua(pp txl[])
{
    system("cls");
    char c,phone[15];
    int i,mark=0;
    printf("\n\t\t ������Ҫ�޸���ϵ�˵ĺ��룺");
    scanf("%s",phone);
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
        if(strcmp(txl[i].dianhua,phone)==0)
        {
            printf("\n\t\t ��������Ҫ�޸ĵ���ϵ����Ϣ");
            printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||������ %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||�绰�� %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||��ַ�� %30s             ||",txl[i].dizhi);
            printf("\n\t\t||��˾�� %30s             ||",txl[i].com);
            printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t �Ƿ��޸�(y/n)");
            if(getch()=='y')
            {
                system("cls");
                printf("\n\t|||||||||||||��ѡ���޸���Ϣ||||||||||||||||");
                printf("\n\t||     1-�޸�����     2-�޸ĵ绰         ||");
                printf("\n\t||             3-�޸ĵ�ַ                ||");
                printf("\n\t|||||||||||||||||||||||||||||||||||||||||||");
                printf("\n\t ��ѡ��������Ҫ�ķ���");
                c=getch();
                switch(c)
                {
                case'1':
                    printf("\n\t �������������� ");
                    scanf("%s",txl[i].xingming);
                    break;
                case'2':
                    printf("\n\t �������µ绰�� ");
                    scanf("%s",txl[i].dianhua);
                    break;
                case'3':
                    printf("\n\t �������µ�ַ: ");
                    scanf("%s",txl[i].dizhi);
                    break;
                case '4':
                    printf("\n\t �������¹�˾: ");
                    scanf("%s",txl[i].com);
                    break;
                default:
                    printf("�������");
                    return;
                }
            }

        }
        else
            {
                printf("δ�ҵ���ϵ����Ϣ������������أ�");
                system("pause");
                return;
            }
            break;
    }
    if(mark!=0)
    {
        printf("\n\t û�и���ϵ����Ϣ");
        printf("\n\t �Ƿ�����޸ģ�(Y/N):");
        if(getch()=='y')
            xiugai_dianhua(txl);
        return;
    }
}
/*������������ ѧ��2017210415 ���15 �༶01141709*/
