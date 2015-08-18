/*
 ============================================================================
 Name        : BST_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*���������*/
/*
 * ����������search  minimum  maximum  predecessor  successor insert delete
 *
 *
 * ���ֱ���
 *
 *
 * */
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
	int key;
	struct node *lchild,*rchild,*parent;
}Node,*BST;

void insertTree(BST parent,BST *t, int element)
{
    if((*t ) == NULL)
    {
    	(*t) = malloc(sizeof(Node));
    	(*t)->lchild = NULL;
    	(*t)->rchild = NULL;
    	(*t)->key = element;
    	(*t)->parent = parent;
    	return;
    }
    if(element<(*t)->key)
    {
    	insertTree((*t),&((*t)->lchild),element);
    }

    if(element>=(*t)->key)
    {
    	insertTree((*t),&((*t)->rchild),element);
    }
}

void creatBSTree(BST *t,int a[], int n)
{
   int i;
   *t = NULL;
   for(i = 0; i<n;i++)
   {
	   insertTree(NULL,t,a[i]);
   }

}
void preordertraverse(BST t)
{
	if(t)
	{
		printf("%d  ",t->key);
		preordertraverse(t->lchild);
		preordertraverse(t->rchild);
	}
}
void inordertraverse(BST t)
{
	if(t)
	{

		inordertraverse(t->lchild);
		printf("%d  ",t->key);
		inordertraverse(t->rchild);
	}
}
void change(BST *t)
{
	*t =(BST) malloc(sizeof(Node));
	(*t)->key = 7;
}
int main(void) {
	 int a[10] = {4, 5, 2, 1, 1, 9, 3, 7, 6, 8};

	 BST tree;
	 creatBSTree(&tree,a,10);/*�ı�ָ���ֵ���贫��ָ��ָ���ָ�룬����ָ���Ǹı�ָ��ָ���ֵ*/
	 insertTree(NULL,&tree,10);
	 preordertraverse(tree);
	 printf("\n");
	 inordertraverse(tree);
 //    change(&tree);
 //    printf("%d",tree->key);
	return EXIT_SUCCESS;
}
