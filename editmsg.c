#include"include/main.h"
void editgeleixinxi(pp txl[],int i)
{
    char  c;
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
                case 4:
                    printf("\n\t �������¹�˾: ");
                    scanf("%s",txl[i].com);
                    break;
                }
                return ;
}

