#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct tnode
{
    int data;
    struct tnode *leftc;
    struct tnode *rightc;
};

// 1
//  \
//   2
//    \
//     3
//      \
//       4
//        \
//         5

void insert(struct tnode **, int num);
void inorder(struct tnode *);
void preorder(struct tnode *);
void postorder(struct tnode *);

int main()
{
    struct tnode *root = NULL;
    char ch[5];
    int num;
    do
    {
        printf("Enter the element to be inserted in the tree\n");
        scanf("%d", &num);
        insert(&root, num);
        printf("Do you want to insert another element?\n");
        scanf("%s", ch);
    } while (strcmp(ch, "yes") == 0);
    printf("Inorder Traversal : The elements in the tree are");
    inorder(root);
    printf("\n");
    printf("Preorder Traversal : The elements in the tree are");
    preorder(root);
    printf("\n");
    printf("Postorder Traversal : The elements in the tree are");
    postorder(root);
    printf("\n");
    return 0;
}

void insert(struct tnode **s, int num)
{

    struct tnode *nn = (struct tnode *)malloc(sizeof(struct tnode));
    nn->data = num;
    nn->leftc = NULL;
    nn->rightc = NULL;

    if (*s == NULL)
    {
        *s = nn;
    }
    else
    {

        struct tnode *t = *s;
        struct tnode *p = NULL;
        while (t != NULL)
        {
            p = t;
            if (num < t->data)
            {
                t = t->leftc;
            }
            else
            {
                t = t->rightc;
            }
        }
        if (num < p->data)
        {
            p->leftc = nn;
        }
        else
        {
            p->rightc = nn;
        }
    }
}

void inorder(struct tnode *s)
{
    if (s == NULL)
    {
        return;
    }
    else
    {
        inorder(s->leftc);
        printf("%d ", s->data);
        inorder(s->rightc);
    }
}

void preorder(struct tnode *s)
{
    /*--------Fill your code here--------*/
}

void postorder(struct tnode *s)
{
    /*--------Fill your code here--------*/
}
