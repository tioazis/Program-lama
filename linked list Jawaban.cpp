// Nomer 1

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
struct node
{
    int data;
    node *next;
} *head,*tail;

void Tambah(int);
int  Keluar();
void Tampil();


main()
{

    int pil,nil;
    head=tail=NULL;
    do
    {

        printf("\n Implementasi nexted List pada FIFO (first in First Out) \n\n");
        printf("\n Menu :  \n1. Data Masuk \n2. Data Keluar \n3. Tampilkan \n4. Keluar Program \n");
        printf("\n Masukkan pilihan? ");
        scanf("%d",&pil);
        switch(pil)
        {
        case 1:
            printf("\n\n Masukkan data : ");
            scanf("%d",&nil);
            Tambah(nil);
            break;


        case 2:
            if(Keluar()!=1)
                printf("%d was out\n",nil);
            break;

	    case 3: printf("\nIsi dari nexted List \n");
            Tampil();
			break;

		case 4: printf("\n\n Terminating \n\n"); break;

		default: printf("\n\n Pilihan Tidak ada, coba Lagi \n\n");
            break;
        }
        printf("\n\n Tekan Sembarang Tombol . . . \n");
        getch();
        system("cls");
    }while(pil != 4);
}

void Tambah(int info)
{
   	node *temp;
    temp=new node;
    if( temp == NULL)
        printf("\nMemory Penuh\n");
    else
    {
        temp->data=info;
        temp->next=NULL;
        if(head == NULL)
		{
			head = tail = temp;
		}

		else
        {

tail->next=temp;
			tail = temp;
		}
        printf(" Node telah ditambahkan di akhir");
    }
}

int Keluar()
{
    int info;
    node *temp;
    if( head ==  NULL)
	{
		printf("\nTidak ada data\n");
		return 1;
	}

	else
    {
        temp=head;
        info=head->data;

		if(head == tail)
			tail=NULL;

		head=head->next;
        temp->next=NULL;
        free(temp);
        return(info);
    }
}

void Tampil()
{
    node *temp;

	if( head == NULL)
		printf("\nTidak ada data \n");


else
    {
        temp=head;
        printf("head->");

	    while(temp!=NULL)
        {
            printf("[%d]->",temp->data);
            temp=temp->next;
        }
        printf("Belakang\n");
    }
}

// Nomer 2

/*
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int count();
void delf();

struct node
{
	int data, pangkat;
	struct node *next;
}*head;

void last(int num, int pgkt)
{
	node *temp,*right;
	temp= new node;
	temp->data=num;
	temp->pangkat=pgkt;
	right=(struct node *)head;

	while(right->next != NULL)
		right=right->next;

	right->next =temp;
	right=temp;
	right->next=NULL;

}

void add( int num, int pgkt )
{
	node *temp;
	temp=new node;
	temp->data=num;
	temp->pangkat=pgkt;


if(head== NULL)
	{
		head=temp;
		head->next=NULL;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}

void addafter(int num, int loc, int pgkt)
{
	int i;
	node *temp,*left,*right;
	right=head;
	for(i=1;i<loc;i++)
	{
		left=right;
		right=right->next;
	}
	temp=new node;
	temp->data=num;
	temp->pangkat=pgkt;
	left->next=temp;
	left=temp;
	left->next=right;
	return;
}

void insert(int num, int pgkt)
{
	int c=0;
	struct node *temp;
	temp=head;
	if(temp==NULL)
	{
		add(num,pgkt);
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->pangkat>pgkt)
			c++;
			temp=temp->next;
		}
		if(c==0)
		add(num,pgkt);
		else if(c<count())
		addafter(num,++c,pgkt);
		else
		last(num,pgkt);
	}
}


void display(node *r)
{
	r=head;
	if(r==NULL)
	{
		return;
	}
		while(r!=NULL)
	{
		if (r!=head)
			printf (" + ");
		if (r->data!=1)
			printf("%d",r->data);
			if (r->pangkat!=0)
		printf("x^%d ",r->pangkat);
		r=r->next;
	}
		printf("\n");
}



int count()
{
	node *n;
	int c=0;
	n=head;
		while(n!=NULL)
		{
			n=n->next;
			c++;
		}
		return c;
}

void delf()
{
	if (head==NULL)
		printf ("Tidak ada data  ....");
	node *temp;
	temp = head;
	head = head->next;
	free(temp);
	printf("\n Sukses hapus  ...\n ");
}

void delm(){
	node *temp1=head,*temp2,*temp3;
	int c = 1, index;
	printf ("\nMasukkan indeks yang akan dihapus : "); scanf ("%d",&index);

	while (c<index-1)
	{
		temp1 = temp1->next;
		c++;
	}

	if (temp1==head&&temp1->next==NULL)
	{
		free (temp1);
		head=NULL;
	}
	else if (temp1==head&& count()==1)
	{
		head = head->next;
		free(temp1);
	}

	else
	{
		temp2 = temp1->next;
		temp3 = temp2->next;
		temp1->next = temp3;
		free(temp2);
		printf("\nData telah dihapus  ..\n");
	}



}


void dell()
{
  node *temp, *t;
  temp=head;
  if (temp->next==NULL)
  	{
  		free (temp);
  		head=NULL;
  	}

  else
  {
  	while(temp->next != NULL)
 	 {
    	t=temp;
   	 temp=temp->next;
 	 }


free(t->next);
 		 t->next=NULL;
  }
  printf("\n Sukses hapus  ...\n ");

}

int main()
{
	struct node *n;
		head=NULL;

		while(1)
		{	system ("cls");
			int i,num=0,pgkt=0;
			printf("SINGLE LINKED LIST\n");
			printf("\nDaftar Operasi\n");
			printf("===============\n");
			printf("1. Masukan data\n");
			printf("2. Delete First\n");
			printf("3. Delete Middle\n");
			printf("4. Delete Last\n");
			printf("5. Tampilakan Nilai\n");
			printf("6. Keluar\n");
			printf("Masukan Pilihan : "); scanf("%d",&i);


			if (i==1)
			{
				printf("\nMasukkan koefisien dan pangkat : "); scanf("%d %d",&num, &pgkt);
				insert(num,pgkt);
			}

			else if (i==2)
				if (head==NULL)
					printf ("Data Kosong");
				else

delf();

			else if (i==3)
				if (head==NULL)
					printf ("Data Kosong");
				else
					delm();

			else if (i==4)
				if (head==NULL)
					printf ("Data Kosong");
				else
					dell();

			else if (i==5)
			{
				if(head==NULL)
				{
					printf("Daftar Kosong   . .!\n");
				}

				else
				{
					printf("\nIsi Dari Daftar Adalah : ");
					display(n);
				}
			}
			else if (i==6)
				break;
			else
				printf("Pilihan Salah!\n");

			printf("\nTekan sembarang tombol untuk lanjut   . . .\n");
			getch();
		}
}
*/
