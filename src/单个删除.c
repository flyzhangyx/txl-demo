/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void shanchu_dange(pp txl[])
{
    system("cls");
    char c;
    printf("\n\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t||           1.按姓名删除    2.按电话删除               ||");
    printf("\n\t||                                                      ||");
    printf("\n\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    c=getch();
    switch (c)
    {
    case '1':
        shanchu_xingming(txl);
        break;
    case '2':
        shanchu_dianhua(txl);
        break;
    }
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
