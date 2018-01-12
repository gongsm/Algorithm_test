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
	/* creatBSTree(&tree,a,10);*//*�ı�ָ���ֵ���贫��ָ��ָ���ָ�룬����ָ���Ǹı�ָ��ָ���ֵ*/
	/* insertTree(NULL,&tree,10);
	 preordertraverse(tree);
	 printf("\n");
	 inordertraverse(tree);
*/
     int x = 0xfffffffe;
     int y = 0x80000001;
     char test_a = y;
	 float lsb = 0.00025;
	 int test = 17800;
	 unsigned char test_c = 0xff;
	 char test_d = 0xff;
	 x = test_c;
	 y= test_d;
     int test_f =0;
     int test_e =0;
      int flag =1;
      test_f=flag?2:3;
      flag =0;
      test_e=flag?5:6;
      printf("testf:%d,teste:%d\n",test_f,test_e);
 //    change(&tree);
 //    printf("%d",tree->key);
/*	 float test = 5147483650.0;
	    int test_int  = (int)(test);
	    printf("%d",test_int);
	    unsigned int result = *(unsigned int*)(&test);
*/
	 printf("test_a%d",test_a);
	 printf("%d   %d\n",x, y);
	return EXIT_SUCCESS;
}



