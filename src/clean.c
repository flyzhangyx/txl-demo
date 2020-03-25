/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void shanchu(pp txl[])
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
    printf("\n\t\t|||||||||||||||||| 删除菜单 ||||||||||||||||||||");
    printf("\n\t\t||          1-删除所有 2-删除单个             ||");
    printf("\n\t\t||          3-返回主菜单                      ||");
    printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t 请选择您所所要的服务：");
    c=getch();
    switch(c)
    {
    case '1':
        shanchu_quanbu();
        break;
    case '2':
        shanchu_dange(txl);
        break;
    case '3':
        zhucaidan(txl);
        break;
    default:
        zhucaidan(txl);
        break;
    }
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
