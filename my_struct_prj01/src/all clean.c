#include"../include/main.h"
void shanchu_quanbu()//ɾ��������ϵ��
{
    printf("\n\t\t ȷ��ɾ��?(y/n)");
    if (getch()=='y')
    {
        fclose(fp);
        if ((fp=fopen("txl.txt","w"))==NULL)
            /*�ļ������*/
        {
            printf("\n\t\t ���ܴ��ļ���ɾ��ʧ��");
            readfile(txl);
        }
        n=0;
        printf("\n\t\t ��¼��ɾ������������������˵�");
        getch();
        return;
    }
    else
        return;
}
