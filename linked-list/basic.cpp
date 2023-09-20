#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int arr[])
{
    struct Node *last;

    first = new Node();
    first->data = arr[0];
    first->next = NULL;
    last = first;
}

int main()
{
}