#include"main.h"
/**********************************************************************
** ����ԭ�ͣ�void PrintRecord(STUDENT stu[],int n)
** ������������ӡ����
** ����˵����

** �� �� ֵ��
** ע�����
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
