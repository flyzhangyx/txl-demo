/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
#include"../include/main.h"
void writefile(pp txl[])
{
    system("cls");
    int i;
    if ((fp=fopen("txl.txt","w"))==NULL)
    {
        printf("\n\t\t 文件打开失败");
    }
    for (i=0; i<n; i++)
    {
        if (fwrite(&txl[i],sizeof(struct tongxunlu),1,fp)!=1)
        {
            printf("\n\t\t 写入文件错误!\n");
        }
    }
    fclose(fp);
    printf("\n\t|||||||||||||||||||||||||||||");
    printf("\n\t||    通讯录文件已保存     ||");
    printf("\n\t||    按任意键退出程序     ||");
    printf("\n\t|||||||||||||||||||||||||||||");
    exit(0);
}
/*姓名：张永雄 学号2017210415 序号15 班级01141709*/
