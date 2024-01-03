#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  node
{
    int Data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int iNo)
{
    PNODE newn= NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->Data = iNo;
    newn->next = NULL;
    
    
    if(head==NULL)//if LL is empty
    {
        *head =newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
}


void InsertAtLast(PPNODE head,int iNo)
{
    PNODE newn= NULL;
    PNODE temp= NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->Data= iNo;
    newn->next=NULL;
    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        temp=*head;
        while(temp != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

int Count(PNODE head)
{
    int iCnt=0;
    while (head != NULL)
    {
        iCnt++;
        head= head->next;
    }
    return iCnt;
}

void Display(PNODE head)
{
    int iCnt=0;
    while (head != NULL)
    {
        printf("| %d |->" ,head->Data);
        head= head->next;
    }
    printf("Null\n");
}

void DeleteFirst(PPNODE head)
{
    PNODE temp =NULL;
    if(*head ==NULL) // LL is already empty.
    {
        return;
    }
    else
    {
        temp=*head;
        *head= temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE  temp=NULL;
    if(*head==NULL)//LL is already empty
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head==NULL;
    }
    else
    {
        temp=*head;
        while (temp != NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void InsertATPosition(PPNODE head,int iNo,int iPos)
{
    int iSize=0;
    int iCnt=0;
    PNODE temp=NULL;
    PNODE newn= NULL;
    iSize=Count(*head);
     
    if((iPos < 1) || (iPos>(iSize+1)))
    {
        printf("Position is Invalid\n..");
        return ;
    }
    else if (iPos==1)
    {
        InsertFirst(head,iNo);
        return;
    }
    else if(iPos>iSize+1)
    {
        InsertAtLast(head,iNo);
        return;
    }
    else
    {
        newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));
        newn-> Data=iNo;
        newn->next=NULL;

         temp=*head;
        for(iCnt=1;iCnt<(iPos-1);iCnt++)
        {
            temp=temp->next;
        }
        newn=temp->next->next;
        temp->next=newn;
    }
}


void DeleteAtPos(PPNODE head,int iPos)
{
    int iCnt=0;
    int iSize=0;
    iSize= Count(*head);
    PNODE temp=NULL;
    PNODE deleteTemp=NULL;
 if((iPos < 1) || (iPos>(iSize+1)))
    {
        printf("Position is Invalid\n..");
        return ;
    }
    else if (iPos==1)
    {
        DeleteFirst(head);
        return;
    }
    else if(iPos>iSize+1)
    {
        DeleteLast(head);
        return;
    }
    else
    {
        temp=*head;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        deleteTemp=temp->next;
        temp->next=temp->next->next;
        free(deleteTemp);
    }
}



int  main()
{
    int iRet = 0;
    PNODE first = NULL;
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);
    
    Display(first);
    iRet=Count(first);
    printf("Number of nodes in linked list are:%d",iRet);
    DeleteAtPos(&first,3);
    Display(first);
    iRet=Count(first);
    printf("Number of nodes in linked list are:%d",iRet);
 Display(first);
    return 0;

}