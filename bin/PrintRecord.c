#include"main.h"
/**********************************************************************
** 函数原型：void PrintRecord(STUDENT stu[],int n)
** 功能描述：打印功能
** 参数说明：

** 返 回 值：
** 注意事项：
**************************************************************************/
void PrintRecord(STUDENT stu[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\t\t\n ID:%ld    Name:%s   Phone:%ld",stu[i].studentID,
                                      stu[i].studentName,
                                      stu[i].studentPhone);
    }
    return ;
    }
