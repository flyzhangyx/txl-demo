#include"../include/main.h"
void chazhao_dianhua(pp txl[])
{
    system("cls");
    int mark=0;
    int i;
    char phone[15];
    printf("\n\t\t||||||||||||||||||| 按电话查找 ||||||||||||||||||||||||||");
    printf("\n\t\t 请输入电话号码:");
    scanf("%s",phone);
    for(i=0; i<n; i++)
    {
        if (strcmp(txl[i].dianhua,phone)==0)
        {
            printf("\n\t\t||||||||||||| 以下是您查找的学生信息 ||||||||||||");
            printf("\n\t\t||姓名： %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||电话： %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||地址： %30s              |",txl[i].dizhi);
            printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||");
            mark++;
            getch();
            return;
        }
    }
    if (mark==0)
    {
        printf("\n\t\t 没有找到联系人的信息");
        printf("\n\t\t 按任意键返回主菜单");
        getch();
        return;
    }
}
