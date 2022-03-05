// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *removeDuplicates(Node *head)
{
    Node *prev = head;
    Node *curr = head->next;
    while (curr != NULL)
    {
        if ((prev->data == curr->data))
        {
            Node *temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete (temp);
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }
    return head;
}
