/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void chazhao_xingming(pp txl[])
{
    system("cls");
    int mark=0;
    int i,c;
    char name[20];
    printf("\n\t\t||||||||||||||||按姓名查找|||||||||||||||||||||");
    printf("\n\t\t 请输入您要查找的姓名:");
    scanf("%s",name);
    for(i=0; i<n; i++)
    {
        if (strcmp(txl[i].xingming,name)==0)
        {
            printf("\n\t\t||||||||||||||以下是您查找的联系人信息||||||||||||||||");
            printf("\n\t\t||姓名： %8s                                   ||",txl[i].xingming);
            printf("\n\t\t||电话： %11s                                ||",txl[i].dianhua);
            printf("\n\t\t||地址： %30s             ||",txl[i].dizhi);
            printf("\n\t\t||公司： %30s             ||",txl[i].com);
            printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            mark++;
            getch();
            return;
        }
    }
    if (mark==0)
    {
        printf("\n\t\t 没有找到联系人的信息");
        printf("\n\t\t 按其它键返回主菜单，按2继续查找！");
        c=getch();
        switch(c)
        {
        case '2':
            chazhao_xingming(txl);
            break;
        default:
            return;
            break;
        }
    }
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
