#include"../include/main.h"
void readfile(pp txl[])
{
    system("cls");
    if((fp=fopen("txl.txt","r"))==NULL)
    {

        printf("\n\t\t\t    通讯录文件不存在");
        if ((fp=fopen("txl.txt","w"))==NULL)
        {
            printf("\n\t\t 建立失败");
            exit(0);
        }
        else
        {
            printf("\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\t||                 通 讯 录 文 件 已 建 立             ||");
            printf("\n\t||                按 任 意 键 进 入 主 菜 单           ||");
            printf("\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            getch();
            return ;
        }
        exit(0);
    }
    fseek(fp,0,2);
    if (ftell(fp)>0)
    {
        rewind(fp);
        for (n=0; !feof(fp) && fread(&txl[n],sizeof(struct tongxunlu),1,fp); n++);
        printf("\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
        printf("\n\t||                  文件导入成功                       ||");
        printf("\n\t||               按任意键返回主菜单                    ||");
        printf("\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
        getch();
        return;
    }
    printf("\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n\t||                    文件导入成功                     ||");
    printf("\n\t||               通讯录文件中无任何纪录                ||");
    printf("\n\t||                 按任意键返回主菜单                  ||");
    printf("\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    getch();
    return;
}
