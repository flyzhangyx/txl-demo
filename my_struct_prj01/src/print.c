#include"../include/main.h"
void xianshi(pp txl[])
{
    int i;
    system("cls");
    if(n!=0)
    {
        printf("\n\t\t|||||||||||||||||通讯录所有联系人信息||||||||||||||||||");
        printf("\n\t\t------------------------第1个--------------------------");
        printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
        for (i=0; i<n; i++)
        {
            printf("\n\t\t||姓名： %8s                                    ||",txl[i].xingming);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||电话： %11s                                 ||",txl[i].dianhua);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||地址： %30s              ||",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            if (i+1<n)
            {
                printf("\n\t\t------------------------第%2d个-------------------------",i+2);
                printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            }
        }
    }
    else
        printf("\n\t\t");
    printf("\n\t\t  ---------------------------------------------------");
    printf("\n\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t  ||             通讯录中无更多纪录                ||");
    printf("\n\t\t  ||             按任意键返回主菜单：              ||");
    printf("\n\t\t  |||||||||||||||||||||||||||||||||||||||||||||||||||");
    getch();
    return;
}
