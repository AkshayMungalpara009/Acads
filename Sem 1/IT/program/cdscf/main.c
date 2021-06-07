#include<stdio.h>
struct product
{
		int ID;
		char name[10];
		float bprice;
		float sprice;
		int q;
}
main()
{
	struct product a[5];
	int i,j;
	float p,q,r,d;
	for(i=0;i<3;i++)
	{
		printf("\n");
		printf("Enter ID :");
		scanf("%d",&a[i].ID);
		printf("Enter name of prodict :");
		scanf("%s",a[i].name);
		printf("Enter Original price per item :");
		scanf("%f",&a[i].bprice);
		printf("Enter sale price per item :");
		scanf("%f",&a[i].sprice);
		printf("Enter quantity :");
		scanf("%d",&a[i].q);
		printf("\n TOTAL SALE PRICE : %f",a[i].q*a[i].sprice);
		d=a[i].q*(a[i].sprice-a[i].bprice);
		printf("\nPROFIT OF FIRST PRODUCT : %f ",d);
	}
	p=a[0].q*(a[0].sprice-a[0].bprice);
	q=a[1].q*(a[1].sprice-a[1].bprice);
	r=a[2].q*(a[2].sprice-a[2].bprice);

			if(p>q&&p>r)
			{
				printf("\n");
				printf("%s",a[0].name);
			}
			else
			if(q>r)
			{
				printf("\n");
				printf("%s",a[1].name);
			}
			else
			{
				printf("\n");
				printf("%s",a[2].name);
			}
	}


