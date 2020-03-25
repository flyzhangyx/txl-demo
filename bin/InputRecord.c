#include"main.h"
/**********************************************************************
** 函数原型：void InputRecord(STUDENT stu[],int n)
** 功能描述：添加功能
** 参数说明：
** 返 回 值：
** 注意事项：
**************************************************************************/
void InputRecord(STUDENT stu[],int n)
{
    int i;
    for (i = 0;i < n;i++)
    {
        printf("---Input record %d:\n",i+1);
        printf("Input studentID:");
        scanf("%ld",&stu[i].studentID);
        printf("Input studentName:");
        scanf("%s",stu[i].studentName);
        printf("Input studentPhone:");
        scanf("%ld",&stu[i].studentPhone);
    }
    return ;
}
