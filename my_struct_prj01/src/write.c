#include"../include/main.h"
void writefile(pp txl[])
{
    system("cls");
    int i;
    if ((fp=fopen("txl.txt","w"))==NULL)
    {
        printf("\n\t\t �ļ���ʧ��");
    }
    for (i=0; i<n; i++)
    {
        if (fwrite(&txl[i],sizeof(struct tongxunlu),1,fp)!=1)
        {
            printf("\n\t\t д���ļ�����!\n");
        }
    }
    fclose(fp);
    printf("\n\t|||||||||||||||||||||||||||||");
    printf("\n\t||    ͨѶ¼�ļ��ѱ���     ||");
    printf("\n\t||    ��������˳�����     ||");
    printf("\n\t|||||||||||||||||||||||||||||");
    exit(0);
}
