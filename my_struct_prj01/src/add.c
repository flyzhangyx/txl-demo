#include"../include/main.h"
void zengjia(pp txl[])
{
    system("cls");
    char c;
    printf("\n\t\t|||||||||||||||||||| 请输入联系人信息 |||||||||||||||||||||||\n");
    printf("\n\t\t 输入联系人姓名:");
    scanf("%s",txl[n].xingming);
    printf("\n\t\t 输入联系人电话号码:");
    scanf("%s",txl[n].dianhua);
    printf("\n\t\t 输入联系人地址:");
    scanf("%s",txl[n].dizhi);
    n++;
    system("pause");
    getchar();
    printf("\n\t\t 是否继续添加联系人?按1继续，按其他键返回主菜单！:");
    c=getchar();
    if(c==1)
        return zengjia(txl);
}
