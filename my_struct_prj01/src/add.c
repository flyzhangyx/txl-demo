#include"../include/main.h"
void zengjia(pp txl[])
{
    system("cls");
    char c;
    printf("\n\t\t|||||||||||||||||||| ��������ϵ����Ϣ |||||||||||||||||||||||\n");
    printf("\n\t\t ������ϵ������:");
    scanf("%s",txl[n].xingming);
    printf("\n\t\t ������ϵ�˵绰����:");
    scanf("%s",txl[n].dianhua);
    printf("\n\t\t ������ϵ�˵�ַ:");
    scanf("%s",txl[n].dizhi);
    n++;
    system("pause");
    getchar();
    printf("\n\t\t �Ƿ���������ϵ��?��1���������������������˵���:");
    c=getchar();
    if(c==1)
        return zengjia(txl);
}
