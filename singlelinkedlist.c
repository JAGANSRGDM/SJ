#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
/*self referential structure to implement dyanamic ds*/
struct list_data{
	int age;
	char name[50];
	struct list_data *next;
};

/*typedef names of struct list_data */
typedef struct list_data **pointer_pointer;
typedef struct list_data *pointer;
typedef struct list_data Data;

/* single liked list operation*/

/* init func*/
pointer init(int a,char *n)
{
	pointer ptr;
	ptr=(pointer)malloc(sizeof(Data));
	if(ptr)
	{
		ptr->age=a;
		strcpy(ptr->name,n);
		ptr->next=NULL;
		return ptr;
	}
	return ptr;
}

/*to insert new node func*/
void insert_first(pointer_pointer pptr,pointer ptr)
{
	if(*pptr==NULL) /*check list is empty or not*/
		*pptr=ptr;/*make new node as first if list is empty*/
	else
	{
		ptr->next =*pptr;/*make new node as first node if list is not empty*/
		*pptr=ptr;
	}
}

/*to insert new node in middle or end of list*/
void insert_middle(pointer_pointer pptr,pointer ptr,int pos)
{
	int i=0;
	pointer MIDDLE=*pptr;
	if(MIDDLE==NULL || pos==0)
	{
		 ptr->next= *pptr;
                *pptr=ptr;/*make new node as first node if list is in empty or  position is 1*/
		return;
	}
	else
	{
		while((i<pos-1) && MIDDLE) /*navigate upto position1*/
		{
			MIDDLE=MIDDLE->next;
			i++;
		}
	}
	if(MIDDLE!=NULL)/*make new node as part of list*/
	{
		//MIDDLE->next=MIDDLE->next;
		ptr->next=MIDDLE->next;
		MIDDLE->next=ptr;


	}
	else
		printf("\n not a valid position \n");
}

//print all nodes data in the list
void print_list(pointer ptr)
{
	printf("\n");
	while(ptr)
	{
		printf("age=%d name=%s\n",ptr->age,ptr->name);
		ptr=ptr->next;
	}
	printf("NULL \n");
}

//function to del a node
void del_node(pointer_pointer pptr,char *name)
{
	pointer temp,start=*pptr,prev=*pptr;
	if(start==NULL)
	{
		printf("'\n list is empyty \n");
		return;
	}
	if(strcmp(start->name,name)==0)
	{
		temp=start;
		*pptr=start->next;
		free(temp);
		return;
	}
	else
	{
		while((strcmp(start->name,name)!=0)&& start) //search a node to del
		{
			prev=start;
			start=start->next;
		}
		if(start!=NULL) //del node
		{
			prev->next=start->next;
			free(start);
		}
		else
			printf("\n node not found \n");
	}
}

// to count total num of elements in the list/
int  count_node(pointer start)
	{
		int count=1;
		while(start->next)
		{
			start=start->next;
			count++;
		}
		return count;
	}
// function to retrive Nth node from the list/
pointer get_Nth_node(pointer start,int index)
{
	int i=1;
	while(i++<index)
		start=start->next;
	return start;
}

//to del duplicates/
int del_dupl(pointer_pointer pptr)
{
	pointer prev,curr=*pptr,temp;
	if(curr) //check list is empty/
	{
		while(curr && curr->next)
		{
			prev=curr->next;
			temp=curr;
			while(prev)
			{
				if(strcmp(curr->name,prev->name)==0)
				{
					temp->next=prev->next;
					free(prev);
					prev=temp->next;
				}
				else
				{
					temp=prev;
					prev=temp->next;
				}
			}
			curr=curr->next;
		}
	}
}

// find mid num without counting num of elements/
void mid_element(pointer start)
{
	pointer temp=start;
	if(start->next)
	{
		while(temp && temp->next)
		{
			temp=temp->next->next; //temp jump to next to next elements
			start=start->next;//start jumps to next element
		}
		printf("\n %d %s /n",start->age,start->name);
	}
}
//reverse list

pointer reverse_list(pointer curr,pointer prev)
{
	pointer revh;
	if(!curr)
		revh=prev;
	else
	{
		revh=reverse_list(curr->next,curr);
		curr->next=prev;

	}
	return revh;
}
 /*void reverse()
    {
        // Initialize current, previous and
        // next pointers
        Node *current = head;
        Node *prev = NULL, *next = NULL;


        while (current != NULL)
        {
            // Store next
            next = current->next;

            // Reverse current node's pointer
            current->next = prev;

            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }*/




int main()
{
	 int age,pos;
	 char name[50];
	 pointer start=NULL;
	 pointer ptr=NULL,nth=NULL;//pointer pointing to first node in the list

	 ptr=init(50,"jj");//try to allocate memory
	 if(ptr==NULL) //check memory is allocated or not
		 printf("\n fail to create node\n");
	 else
		 insert_first(&start,ptr);//insert new node as first node
	 print_list(start);

	 ptr=init(77,"mj");//try to allocate memory
         if(ptr==NULL) //check memory is allocated or not
                 printf("\n fail to create node\n");
         else
                 insert_first(&start,ptr);//insert new node as first node
         print_list(start);

 	 ptr=init(77,"rr");//try to allocate memory
         if(ptr==NULL) //check memory is allocated or not
                 printf("\n fail to create node\n");
         else
                 insert_first(&start,ptr);//insert new node as first node
         print_list(start);


  	 ptr=init(59,"mj");//try to allocate memory
         if(ptr==NULL) //check memory is allocated or not
                 printf("\n fail to create node\n");
         else
                 insert_first(&start,ptr);//insert new node as first node
         print_list(start);

	 ptr=init(99,"lj");//try to allocate memory
         if(ptr==NULL) //check memory is allocated or not
                 printf("\n fail to create node\n");
         else
                 insert_middle(&start,ptr,2);
	 //insert new node as middle node
         print_list(start);

	del_node(&start,"lj");
	printf("delet lj node\n");
        print_list(start);

	nth=get_Nth_node(start,4);
	if(nth!=NULL)
		printf("\nName : %s,Age :%d\n",nth->name,nth->age);
	else
		printf("not valiud Index");
        print_list(start);
	del_dupl(&start);
        print_list(start);

	mid_element(start);
	print_list(start);

	reverse_list(NULL,start);
	print_list(start);

}
