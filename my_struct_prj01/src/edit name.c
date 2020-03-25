#include"../include/main.h"
void xiugai_xingming(pp txl[])
{
    system("cls");
    char c;
    int i,mark=0;
    char name[20];
    printf("\n\t\t 请输入要修改的联系人姓名：");
    scanf("%s",name);
    if(n==0)
    {
        printf("\n\t\t 文件中无任何联系人");
        printf("\n\t\t 按任意键返回主菜单");
        getch();
        mark++;
        return;
    }
    for(i=0; i<n; i++)
    {
        if(strcmp(txl[i].xingming,name)==0)
        {
            printf("\n\t\t 以下是您要修改的联系人信息");
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t||姓名： %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||电话： %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||地址： %30s             ||",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t\t 是否修改(y/n)");
            if(getch()=='y')
            {
                printf("\n\t|||||||||||||请选择修改信息||||||||||||||||");
                printf("\n\t||        1.修改姓名     2.修改电话      ||");
                printf("\n\t||              3.修改地址               ||");
                printf("\n\t|||||||||||||||||||||||||||||||||||||||||||");
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
                }
            }
        }
    }
    if(mark==0)
    {
        printf("\n\t\t 没有找到联系人信息");
        printf("\n\t 是否继续修改？(Y/N):");
        if(getch()=='y')
            xiugai_xingming(txl);
        return;
    }
}
