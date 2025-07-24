#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void Append(node **head, int data)
{
    node *newnode = (node *)malloc(sizeof(node));

    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
        (*head) = newnode;

    else
    {
        node *temp = (*head);

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }
}

void Display(node *head)
{

    printf("\nLinked List :\n");
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
    printf("\n");
}

int Count(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int Search(node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return 1;

        head = head->next;
    }
    return 0;
}

void insertFirst(node **r, int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;

    newnode->next = ((*r) == NULL) ? NULL : (*r);
    (*r) = newnode;
}

void deleteFirst(node **r)
{
    node *del = (*r);
    if ((*r) == NULL)
        return;
    (*r) = (*r)->next;
    del->next = NULL;
    free(del);
}

void deleteLast(node **r)
{
    if ((*r) == NULL)
        return;

    if ((*r)->next == NULL)
        deleteFirst(r);
    else
    {
        node *temp = (*r);
        while (temp->next->next != NULL)
            temp = temp->next;
        temp->next->next = NULL;
    }
}

void InsertInBetween(node *head, int pos, int data)
{
    int i;
    node *newnode = (node *)malloc(sizeof(node));
    node *temp = head;
    newnode->data = data;

    for (i = 2; i < pos; i++)
        temp = temp->next;

    newnode->next = temp->next;
    temp->next = newnode;
}

void DeleteByValue(node **head, int value)
{
    node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
    }

    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("\nValue not fount");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

void DeleteByPosition(node **head, int pos)
{
    if (*head == NULL || pos <= 0 || pos > Count(*head))
    {
        printf("invalid position");
        return;
    }

    node *temp = *head;
    if (pos == 1)

    {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    node *del = temp->next;
    temp->next = del->next;
    free(del);
}

int main()
{
    int data, ch, key, pos;
    node *head = NULL;
    while (1)
    {
        printf("\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert First \n6.DeleteFirst \n7.DeleteLast \n8.InsertInBetween \n9.DeleteByValue \n10.DeleteByPosition \n11.Exit \nEnter a choice =");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter data : ");
            scanf("%d", &data);
            Append(&head, data);
            break;

        case 2:
            Display(head);
            break;

        case 3:
            printf("\nCount is %d \n", Count(head));
            break;

        case 4:
            printf("\n Enter key to search :");
            scanf("%d", &key);
            if (Search(head, key))
                printf("\nData Found");
            else

                printf("\n Data not found");
            break;

        case 5:
            printf("enter a data : ");
            scanf("%d", &data);
            insertFirst(&head, data);
            break;

        case 6:
            deleteFirst(&head);
            break;
        case 7:
            deleteLast(&head);
            break;

        case 9:
            printf("\n enter a number ");
            scanf("%d", &data);
            DeleteByValue(&head, data);
            break;

        case 10:
            printf("Enter delete position");
            scanf("%d", &pos);
            DeleteByPosition(&head, pos);
            break;

        case 11:
            return 0;
            break;
        default:
            printf("\nINVALID CHOICE ");
            break;
        }
    }
    return 0;
}