/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void zhucaidan()
{
    system("cls");
    char c;
    system("cls");
    printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t||        1.添加联系人    2.查询和显示联系人    ||");
    printf("\n\t\t||        3.删除联系人    4.修改联系人          ||");
    printf("\n\t\t||        5.保存并退出    0.不保存并退出        ||");
    printf("\n\t\t||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t 请选择您选项：");
    c=getch();
    switch (c)
    {
    case '1':
        zengjia(txl);
        break;
    case '2':
        chazhao(txl);
        break;
    case '3':
        shanchu(txl);
        break;
    case '4':
        xiugai(txl);
        break;
    case '5':
        writefile(txl);
        break;
    case '0':
        exit(0);
    default:
        zhucaidan(txl);
    }
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
