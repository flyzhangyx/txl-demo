#include"../include/main.h"
void shanchu_quanbu()//删除所有联系人
{
    printf("\n\t\t 确认删除?(y/n)");
    if (getch()=='y')
    {
        fclose(fp);
        if ((fp=fopen("txl.txt","w"))==NULL)
            /*文件空输出*/
        {
            printf("\n\t\t 不能打开文件，删除失败");
            readfile(txl);
        }
        n=0;
        printf("\n\t\t 纪录已删除，按任意键返回主菜单");
        getch();
        return;
    }
    else
        return;
}
