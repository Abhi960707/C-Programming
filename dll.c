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

void append(Node **r, int data)
{
    Node *newNode = createNode(data);
    if ((*r) = NULL)
        (*r) = newNode;
    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->pre = temp;
    }
}

void display(Node *head)
{
    while (head != NULL)

    {
        printf("%d\n", head->data);
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
            printf("\nEnter data : ");
            scanf("%d", &data);
            Append(&head, data);
            break;

        case 2:
            Display(head);
            break;

        case 10:
            return 0;
        default:
            printf("INVALID CHOICE !")
        }
    }
    return 0;
}
