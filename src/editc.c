/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void xiugai(pp txl[])
{
    system("cls");
    char c;
    if(n==0)
    {
        printf("\n\t\t 对不起，文件中无任何纪录");
        printf("\n\t\t 按任意键返回主菜单");
        getch();
        return;
    }
    system("cls");
    printf("\n\t\t|||||||||||||||||修改联系人菜单||||||||||||||||||||||||");
    printf("\n\t\t||         1.按姓名修改    2.按电话修改              ||");
    printf("\n\t\t||              按任意键返回主菜单                   ||");
    printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    c=getch();
    switch(c)
    {
    case '1':
        xiugai_xingming(txl);
        break;
    case '2':
        xiugai_dianhua(txl);
        break;
    default:
        zhucaidan(txl);
        break;
    }
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
