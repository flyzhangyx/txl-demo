#include"main.h"
/**************************************************************************
** 函数原型：int main()
** 功能描述：
** 参数说明：

** 返 回 值：
** 注意事项：
***************************************************************************/
int main()
{
    int n;
    printf("How many students?: ");
    scanf("%d",&n);
    InputRecord(stu,n);
    PrintRecord(stu,n);
    getchar();
    return 0;

}

