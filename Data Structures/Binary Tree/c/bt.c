#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct btnode
{

	int data;
	struct btnode*left;
    struct btnode*right;

};

btnode*root=NULL,*parent,*temp;




#define count 10


void insertion();
void inorder(btnode*);
void preorder(btnode*);
void postorder(btnode*);



int main()
{

	int ch;


	while(1)
	{

		printf(" CHOOSE FROM THE MENU\n 1.insertion \n 2.display \n  3.exit\n");

		scanf("%d",&ch);


	  switch(ch)
	  {

	 		case 1: insertion();
			  		break;

			case 2: inorder(root);
			        break;

			case 3: preorder(root);
			        break;

			case 4: postorder(root);
			        break;

			case 5: exit(0);


	  }

	}






	return 0;
}



void insertion()
{

	int ch ;
	ch=1;

	int countx=0;

	parent=root;

	while(ch==1)
	{

		temp = (btnode*)malloc(sizeof(btnode));

		printf("enter the value of data ");
		scanf("%d",&temp->data);

		countx++;

		temp->right=NULL;
		temp->left=NULL;

		if(root==NULL)
		{
			root=temp;

		}

		else

		{
				int county=0;
			 btnode*curr;

			 curr=root;

		    	while(curr)
		    	{


		    		parent=curr;


						if((countx%2)==0)

		                 {
		                 	curr=curr->left;


						 }

		                 else
		                 {
		                 	curr=curr->right;
						 }





		      }

		      if((countx%2)==0)
	          {
	          	  parent->left=temp;

			  }
			  else
			  {

			  	  parent->right=temp;

			  }

		}

	  printf(" want to enter more(0/1)  ");
	  scanf("%d",&ch);

	}


}



void inorder(btnode *root)
{

    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d",root>left);
    inorder(root->right);
    
}

void preorder(btnode *root)
{

    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d",root>left);
    inorder(root->right);
    
}
void postorder(btnode *root)
{

    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d",root>left);
    inorder(root->right);
    
}


