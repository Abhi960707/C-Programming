#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next, *pre;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->pre = newNode->next = NULL;
    return newNode;
}

void append(Node **head, int data)
{
    Node *newnode = (Node *)malloc(sizeof(Node));

    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
        (*head) = newnode;

    else
    {
        Node *temp = (*head);

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }
}

void display(Node *head)
{
    while (head != NULL)

    {
        printf("\n%d", head->data);
        head = head->next;
    }
}

int Count(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

int Search(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return 1;

        head = head->next;
    }
    return 0;
}
void insertFirst(Node **r, int data)
{
    Node *newNode = createNode(data);
    if ((*r) == NULL)
        (*r) = newNode;
    else
    {
        newNode->next = (*r);
        (*r)->pre = newNode;
        (*r) = newNode;
    }
}

void deleteFirst(Node **r)
{
    if ((*r)->next == NULL)
        (*r) = NULL;
    else
    {
        Node *del = (*r);
        (*r) = (*r)->next;
        del->next = (*r)->pre = NULL;
        free(del);
    }
}

void deleteLast(Node **r)
{
    if ((*r)->next == NULL)
        (*r) = NULL;
    else
    {
        Node *temp = (*r);
        while (temp->next->next != NULL)
            temp = temp->next;
        temp->next->pre = NULL;
        temp->next = NULL;
    }
}

void insertInBetween(Node *head, int data, int pos)
{
    Node *newNode = createNode(data);
    int i;
    Node *temp = head;

    for (i = 2; i < pos; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next->pre = newNode;
    newNode->pre = temp;
    temp->next = newNode;
}

void DeleteByValue(Node *head, int data)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == data)
        {
            Node *del = temp->next;
            temp->next = del->next;
            if (del->next != NULL)
                del->next->pre = temp;
            del->next = del->pre = NULL;
            printf("\n4");
            free(del);
            return;
        }
        temp = temp->next;
    }
}

void DeleteByPosition(Node **head, int pos)
{
    if (*head == NULL || pos <= 0 || pos > Count(*head))
    {
        printf("invalid position");
        return;
    }

    Node *temp = *head;
    if (pos == 1)

    {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    Node *del = temp->next;
    temp->next = del->next;
    free(del);
}

int main()
{
    int data, ch, key, pos;
    Node *head = NULL;
    while (1)
    {
        printf("\n1.Append \n2.Display \n3.count \n4.Search \n5.Insert First \n6.DeleteFirst \n7.DeleteLast \n8.InsertInBetween \n9.DeleteByValue \n10.DeleteByPosition \n11.Exit \nEnter a choice =");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a data : ");
            scanf("%d", &data);
            append(&head, data);
            break;

        case 2:

            display(head);
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

        case 8:
            printf("\nenter a position  :");
            scanf("%d", &pos);
            printf("enter a data :");
            scanf("%d", &data);
            if (pos == 1)
                insertFirst(&head, data);
            else if (pos == Count(head) + 1)
                append(&head, data);
            else if (pos > 1 && pos <= Count(head))
                insertInBetween(head, data, pos);
            else
                printf("\n Invalid positon !!!!");
            break;

            // case 9:
            //  printf("enter a data :");
            //             scanf("%d", &data);
            //             if()

        case 9:
            printf("\n enter a number ");
            scanf("%d", &data);
            if (head->data == data)
                deleteFirst(&head);
            else
                DeleteByValue(head, data);
            break;

        case 10:
            printf("Enter delete position :");
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
}
