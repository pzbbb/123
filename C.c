#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#define N 100

struct teacher
{
    char num[10];
    char name[20];
    char sex[2];
    char zhicheng[100];
    char wage[20];
    char danwei[100];
}
stu[N];
int n;
    void input();
    void display();
    void search();
    void add();
    void deleted();
    void output();
    void menu();
    void main()
    {
        int flag=0;
        menu();
        do
        {flag=1;
        switch(getch())
        {case '1':input();break;
         case '2':display();break;
         case '3':search();break;
         case '4':add();break;
         case '5':deleted();break;
         case '6':output();break;
         default:printf("输入有误");
        }
        printf("按任意键继续\n");
        getch();
        menu();

        }
        while(flag==1);

    }
    void menu()
    {
        system("cls");
        printf("\n");
        printf("\t*******************************\n");
        printf("\t*    欢迎使用教师管理系统     *\n");
        printf("\t*      1.输入教师数据         *\n");
        printf("\t*      2.显示教师数据         *\n");
        printf("\t*      3.查找教师数据         *\n");
        printf("\t*      4.增加教师数据         *\n");
        printf("\t*      5.删除教师数据         *\n");
        printf("\t*      6.退出程序             *\n");
        printf("\t*******************************\n");
        printf("请选择功能；\n");
    }

void input()
    {int i;
    system("cls");
    printf("输入教师数:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n教师号:");
      scanf("%s",stu[i].num);
      printf("姓名:");
      scanf("%s",stu[i].name);
      printf("性别:");
      scanf("%s",stu[i].sex);
      printf("职称:");
      scanf("%s",&stu[i].zhicheng);
      printf("\t 工资:");
      scanf("%s",&stu[i].wage);
      printf("单位:");
      scanf("%s",stu[i].danwei);
    }
    printf("输入成功\n");

    }

 void display()
    {
        int i;
        system("cls");
        printf("教师号\t姓名\t性别\t职称\t工资\t单位\t\n");
    for(i=0;i<n;i++)
        {
        printf("%s",stu[i].num);
        printf("\t%s",stu[i].name);
        printf("\t%s",stu[i].sex);
        printf("\t%s",stu[i].zhicheng);
        printf("\t%s",stu[i].wage);
        printf("\t%s\n",stu[i].danwei);
        }
    }
    void search()
    {
        char a[10];
        int i,j;
        printf("请输入要查询教师的教师号\n");
        scanf("%s",a);
        for(i=0;i<n;i++)
        {
            if(strcmp(a,stu[i].num)==0)
            {
                printf("教师号\t姓名\t性别\t职称\t工资\t单位\t\n");
                printf("%s",stu[i].num);
                printf("\t%s",stu[i].name);
                printf("\t%s",stu[i].sex);
                printf("\t%s",stu[i].zhicheng);
                printf("\t%s",stu[i].wage);
                printf("\t%s",stu[i].danwei);
                printf("\n");
                break;
            }
            else
                printf("未找到该教师信息\n");
        }
    }

void add()
{
    int a,i,j;
    system("cls");
    printf("请输入新增加教师人数：\n");
    scanf("%d",&a);
    n=n+a;
    for(i=n-a;i<n;i++)
    {
        printf("\n教师号:");
      scanf("%s",stu[i].num);
      printf("姓名:");
      scanf("%s",stu[i].name);
      printf("性别:");
      scanf("%s",stu[i].sex);
      printf("职称:");
      scanf("%s",&stu[i].zhicheng);
      printf("工资:");
      scanf("%s",stu[i].wage);
      printf("单位:");
      scanf("%s",stu[i].danwei);
      printf("添加成功\n");

    }

}
void deleted()
{ int b,i,j;
  char m,a[10];
  system("cls");
  printf("请输入教师号:\n");
  scanf("%s",a);
  for(i=0;i<n;i++)
  {
      if(strcmp(a,stu[i].num)==0)
      {         printf("教师号\t姓名\t性别\t职称\t工资\t单位\t\n");
                printf("%s",stu[i].num);
                printf("\t%s",stu[i].name);
                printf("\t%s",stu[i].sex);
                printf("\t%s",stu[i].zhicheng);
                printf("\t%s",stu[i].wage);
                printf("\t%s",stu[i].danwei);
                printf("\n");
                b=i;
                break;
                printf("是否确认删除(y/n)\n");
                scanf("%s",&m);
            if(m=='y')
   {
       for(i=b;i<N-1;i++);
       stu[i]=stu[i+1];
       n=n-1;
       printf("删除成功\n");
   }else
   printf("删除失败\n");


        }
    else
     printf("未找到该教师信息\n");
     break;
  }


}
void output()
{
    system("cls");

}
