#include <bits/stdc++.h>
using namespace std;

// Stack Structure  LIFO -> List in First Out
struct Stack
{
    int size;
    int top;
    int *arr;
};

// Define Set of Operation
void push(struct Stack *s, int x);
int pop(struct Stack *s);
int peek(struct Stack *s, int indx);
int stackTop(struct Stack *s);
bool isEmpty(struct Stack *s);
bool isFull(struct Stack *s);

// Main function
int main()
{
    struct Stack s;
    cout << "Enter Size of Stack? ";
    cin >> s.size;
    s.arr = new int[s.size];
    s.top = -1;

    return 0;
}

// Push value in Stack
void push(struct Stack *s, int x)
{
    if (isFull(s))
    {
        cout << "Stack is Full!";
    }
    else
    {
        s->top++;
        s->arr[s->top] = x;
    }
}

// Pop up Stack last in value
int pop(struct Stack *s)
{
    int x;

    if (isEmpty(s))
    {
        cout << "Stack is Empty";
    }
    else
    {
        x = s->arr[s->top];
        s->top--;
    }
    return x;
}

// Peek only indexes Value
int peek(struct Stack *s, int indx)
{
    if (s->top - indx + 1 < 0)
    {
        cout << "Invalid Position!";
    }
    else
    {
        return s->arr[s->top - indx + 1];
    }
    return 0;
}

// takeing top value
int stackTop(struct Stack *s)
{
    if (isEmpty(s))
    {
        cout << "No Elements";
    }
    else
    {
        return s->arr[s->top];
    }
    return 0;
}

// Checking is Empty Stack?
bool isEmpty(struct Stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

// Checking is stack Full?
bool isFull(struct Stack *s)
{

    if (s->top == s->size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
