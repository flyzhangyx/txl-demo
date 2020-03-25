#include"../include/main.h"
void shanchu_xingming(pp txl[])
{
    system("cls");
    int i,m,mark=0,a=0;
    char name[20];
    printf("\n\t\t 请输入要删除联系人姓名：");
    scanf("%s",name);
    for (i=a; i<n; i++)
    {
        if (strcmp(txl[i].xingming,name) == 0)
        {
            printf("\n\t\t 以下是您要删除的联系人纪录：");
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||姓名： %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||电话： %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||地址： %30s              |",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t 是否删除?(y/n)");
            if (getch()=='y')
            {
                for (m=i; m<n-1; m++)
                    txl[m]=txl[m+1];
                n--;
                mark++;
                printf("\n\t\t 删除成功");
                printf("\n\t\t 是否继续删除?(y/n)");
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
        printf("\n\t\t 没有该联系人的纪录");
        printf("\n\t\t 是否继续删除?(y/n)");
        if (getch()=='y')
            shanchu_xingming(txl);
        return;
    }
}
