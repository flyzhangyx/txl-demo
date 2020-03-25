#include"../include/main.h"
void chazhao(pp txl[])
{
    char c;
    system("cls");
    printf("\n\t\t||||||||||||||||||| 显示和查询联系人 ||||||||||||||||||");
    printf("\n\t\t||      1.逐个显示所有          2.按姓名查询         ||");
    printf("\n\t\t||      3.按电话查询            4.返回主菜单         ||");
    printf("\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t\t 请选择您所所要的服务：");
    c=getch();
    switch (c)
    {
    case '1':
        system("cls");
        xianshi(txl);
        break;
    case '2':
        system("cls");
        chazhao_xingming(txl);
        break;
    case '3':
        system("cls");
        chazhao_dianhua(txl);
        break;
    case '4':
        zhucaidan(txl);
        break;
    }
    getchar();
    zhucaidan();
}
