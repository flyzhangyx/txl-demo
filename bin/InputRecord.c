#include"main.h"
/**********************************************************************
** ����ԭ�ͣ�void InputRecord(STUDENT stu[],int n)
** ������������ӹ���
** ����˵����
** �� �� ֵ��
** ע�����
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
