#include"../include/main.h"
void editgeleixinxi(pp txl[],int i)
{
    printf("\n\t 请选择您所所要的服务：");
    scanf("%s",&c);
    switch(c)
    {
    case 1:
        printf("\n\t 请输入新姓名：");
        scanf("%s",txl[i].xingming);
        break;
    case 2:
        printf("\n\t 请输入新电话：");
        scanf("%s",txl[i].dianhua);
        break;
    case 3:
        printf("\n\t 请输入新地址: ");
        scanf("%s",txl[i].dizhi);
        break;
    case 4:
        printf("\n\t 请输入新公司: ");
        scanf("%s",txl[i].com);
        break;
    }
    return ;
}
