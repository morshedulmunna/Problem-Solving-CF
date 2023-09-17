
#include <bits/stdc++.h>
using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};

struct Sparse
{
    int n;
    int m;
    int num;
    struct Element *ele;
};

void create(struct Sparse *s)
{
    cout << "Enter a Dimensions:";
    cin >> s->m >> s->n;
    cout << "Number of Non 0 Element: ";
    cin >> s->num;

    s->ele = new Element[s->num];

    cout << "Enter All Non 0 Element: \n";

    for (int i = 0; i < s->num; i++)
    {
        cin >> s->ele[i].i >> s->ele[i].j >> s->ele[i].x;
    }
}

void display(struct Sparse s)
{
    int k = 0;

    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (i == s.ele[k].i && j == s.ele[k].j)
            {
                cout << s.ele[k++].x << " ";
            }
            else
            {
                cout << "0 ";
            }
        }

        cout << endl;
    }
}

int main()
{

    struct Sparse s;

    create(&s);
    display(s);
    return 0;
}
