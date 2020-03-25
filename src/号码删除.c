/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void shanchu_dianhua(pp txl[])
{
    system("cls");
    int i,m,mark=0;
    char phone[20];
    printf("\n\t\t 请输入要删除联系人电话号码：");
    scanf("%s",phone);
    if(n==0)
    {
        printf("\n\t\t 对不起，文件中无任何纪录");
        printf("\n\t\t 按任意键返回主菜单");
        getch();
        return;
    }
    for (i=0; i<n; i++)
    {
        if (strcmp(txl[i].dianhua,phone)==0)
        {
            printf("\n\t\t||||||||||||| 以下是您要删除的联系人信息 ||||||||||||");
            printf("\n\t\t||姓名： %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||电话： %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||地址： %30s              ||",txl[i].dizhi);
            printf("\n\t\t||公司： %30s              ||",txl[i].com);
            printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||");
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
                    shanchu_dianhua(txl);
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
            return ;
    }
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
