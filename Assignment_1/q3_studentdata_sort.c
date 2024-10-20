#include<stdio.h>
#include<string.h>

typedef struct student
{
   int roll_no;
   char name[20];
   int marks;
}s_nt;

void enter_data(s_nt*);
void print_data(s_nt*,int*);
void selection_sort(s_nt[],int);

int main()
{
    int size;
    printf("Enter the number of students data you want to enter: ");
    scanf("%d",&size);

    s_nt s[size];
    for(int i=0;i<size;i++)
        enter_data(&s[i]);

    printf("\nStudents information: \n");
    for(int i=0;i<size;i++)
        print_data(&s[i],&i);

    //for(int i=0;i<size;i++)
    selection_sort(s,size);
    printf("\nSorted students information: \n");
    for(int i=0;i<size;i++)
        print_data(&s[i],&i);
    return 0;
}

void enter_data(s_nt *s)
{
    printf("Enter (roll no, name, marks): ");
    scanf("%d %s %d",&s->roll_no,s->name,&s->marks);
}

void print_data(s_nt *s,int *i)
{
    printf("s%d: %d\t%s\t%d\n",*i,s->roll_no,s->name,s->marks);
}

void selection_sort(s_nt st[],int size)
{
    int s,p;
    for(s=0;s<size-1;s++)
    {
        for(p=s+1;p<size;p++)
        {
            if(st[p].marks > st[s].marks)
            {
                int temp=st[p].marks; st[p].marks=st[s].marks; st[s].marks=temp;
                char ch[20]; strcpy(ch,st[p].name); strcpy(st[p].name,st[s].name); strcpy(st[s].name,ch);
                int mar=st[p].roll_no; st[p].roll_no=st[s].roll_no; st[s].roll_no=mar;
            }
         }
    }
}