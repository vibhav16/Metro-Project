#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<malloc.h>
#include<string.h>
struct node{
	char name[100];
	char branch[100];
	char no[100];
	int data;
	int plat1;
	int plat2;
	char stat1[20];
	char stat2[20];
	struct node *next;

};
struct node *start=NULL,*end=NULL,*temp,*temp1;

FILE *f1,*f2;
struct train
	   {
	   char filest[100];
	   struct train *next;
	   };
      struct train *start2=NULL,*temp2,*end2=NULL,*temp3,*po,*start10=NULL,*temp10;

struct record
	    {
	    int rs;
	    int km;
	    int nst;
	    int time;
	    struct record *down;
	    };
struct record *start4=NULL,*end4=NULL,*temp4,*t;

FILE *fp;
void InitGraphicMode();
void Welcome();
void Welcome1();
void start1();
void menu();
void station();
void invalidinput1();
void jahangir();
void vishwa();
void kashmere();
void tees();
void indralok();
void kirti();
void karol();
void rajiv();
void race();
void yamuna();
void akshardham();
void noida();
void end1();
void route();
void inform(char [],char [],int);
void map();
void map1();

void main()
{
	int choice;
		 InitGraphicMode();
		 Welcome();
		 start1();
		 Welcome1();
		// scanf("%d",&choice);
		 menu();
		 getch();
}
void InitGraphicMode()
{
   int gd= DETECT, gm;
  // int x=170;
   initgraph(&gd, &gm, "c:\\tc\\bgi");


}
//to print the welcome screen
 void Welcome()
{
	int x=170;
	char pattern[8] = {0xAA, 0x55, 0xAA, 0x55, 0xFF, 0x55, 0xFF, 0x01};
		 int i;
		 setfillpattern(pattern,5);
		 for(i=0;i<=320;i++)
		 {
				 bar(320-i,240-i,320+i,240+i);
				 delay ( 5 ) ;
		 }

		 settextstyle(3,0,5);
		 setcolor(BLACK);
		 outtextxy(200,50,"DELHI METRO RAIL");


		 settextstyle(2,0,6);
		 setcolor(CYAN);
		 outtextxy(80,210,"NAMASKAR");
		 outtextxy(80,240,"WELCOME TO DELHI METRO");
		 outtextxy(80,270,"WE WILL TAKE YOU TO DIFFERENT PLACES");
		 outtextxy(80,300,"IN A VERY CHEAP RATE");


		 setcolor(WHITE);
	circle(100,100,50);
	circle(100,100,60);
	setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	floodfill(155,100,WHITE);

	setcolor(WHITE);
	line(50,90,150,90);
  /*4*/ line(51,95,151,95);
	floodfill(100,92,WHITE);

	line(50,110,150,110);
  /*4*/	line(52,115,152,115);
	floodfill(100,112,WHITE);

	setcolor(WHITE);
	line(85,110,100,95);
	line(95,110,110,95);
	floodfill(100,100,WHITE);


       settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
 outtextxy(170,380,"LOADING APP,PLEASE WAIT");

  for(i=0;i<360;++i)
 {

	delay(30);
	line(x,400,x,420);
  x++;
 }

 cleardevice();

 }

 void start1()

{
	setcolor(MAGENTA);
	setlinestyle(SOLID_LINE,2,3);
	rectangle(0,0,639,479);

}

 void Welcome1()
 {
	setbkcolor(BROWN);

		 settextstyle(3,0,6);
		 setcolor(GREEN);
		 outtextxy(200,50,"DELHI METRO");


		 settextstyle(1,0,2);
		 setcolor(CYAN);
		 outtextxy(50,200,"Hi,Choose your choice");


		 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		 setcolor(WHITE);
		 outtextxy(100,250,"1 ROUTE BETWEEN STATIONS");
		 outtextxy(100,300,"2 STATION INFORMATION");
		 outtextxy(100,350,"3 METRO MAP");
		 outtextxy(100,400,"4 EXIT");

			 delay(5);
 }


 void menu()
{
		settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
		setcolor(WHITE);
		outtextxy(100,250,"1 ROUTE BETWEEN STATIONS");
		outtextxy(100,300,"2 STATION INFORMATION");
		outtextxy(100,350,"3 METRO MAP");
		outtextxy(100,400,"4 EXIT");



	while (1)
   {



	switch(getch())
	{
		case '1':

			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(0);
			outtextxy(100,250,"1 ROUTE BETWEEN STATIONS");
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(10);
			outtextxy(100,250,"1 ROUTE BETWEEN STATIONS");
			delay(500);

				route();
			cleardevice();
			start1();

			Welcome1();
			break;
		case '2':
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(0);
			outtextxy(100,300,"2 STATION INFORMATION");
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(10);
			outtextxy(100,300,"2 STATION INFORMATION");
			delay(500);

		     station();

			cleardevice();
			start1();
			Welcome1();
			break;

		case '3':
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(0);
			outtextxy(100,350,"3 METRO MAP");
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(10);
			outtextxy(100,350,"3 METRO MAP");
			delay(500);

			map();

			cleardevice();
			start1();
			Welcome1();
			break;

		case '4':
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(0);
			outtextxy(100,400,"4 EXIT");
			settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
			setcolor(10);
			outtextxy(100,400,"4 EXIT");
			delay(500);

			end1();
			cleardevice();
			start1();
			Welcome1();
			break;
		default:
			invalidinput1();
		}
	}
   }


void end1()/*This fuction is used to exit from program*/
{
	cleardevice();

	settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	setcolor(WHITE);
	outtextxy(60,150,"ARE YOU SURE YOU WANT TO EXIT (Y/N)");

	switch(getch())
	{
		case 'Y':
		case 'y':

				exit(0);
				break;
		case 'N':
		case 'n':
				break;
		default :
				invalidinput1();
			    //	getch();
				end1();
	}
}


void invalidinput1()
{
			sound(700);
			outtextxy(300,430,"invalid INPUT");
			delay(500);
			nosound();
			setcolor(0);
			outtextxy(300,430,"invalid INPUT");

}






void station()
{
	cleardevice();
	start1();

		setbkcolor(BLACK);
		 settextstyle(7,0,2);
		setcolor(CYAN);
		outtextxy(150,50,"CHOOSE STATION");
		setcolor(BROWN);
		outtextxy(100,100,"(a) Jahangir Puri");
		outtextxy(100,120,"(b) Vishwavidyalaya");
		outtextxy(100,140,"(c) Kashmere Gate");
		outtextxy(100,160,"(d) Tees Hazari");
		outtextxy(100,180,"(e) Indralok");
		outtextxy(100,200,"(f) Kirti Nagar");
		outtextxy(100,220,"(g) Karol Bagh");
		outtextxy(100,240,"(h) Rajiv Chowk");
		outtextxy(100,260,"(i) Race Course");
		outtextxy(100,280,"(j) Yamuna Bank");
		outtextxy(100,300,"(k) Akshardham");
		outtextxy(100,320,"(l) Noida Sector 18");

		setcolor(GREEN);
		outtextxy(100,400,"0 PREVIOUS MENU");

	switch(getch())
	{
		case 'a':
			jahangir();
			//delay(3000);
			getch();
			cleardevice();
			station();
			break;

		case 'b':
			vishwa();
			//delay(3000);
			getch();
			cleardevice();
			station();
			break;
		case 'c':
			kashmere();
		       getch();
			cleardevice();
			station();
			break;

		case 'd':
			tees();
			getch();
			cleardevice();
			station();
			break;

		case 'e':
			indralok();
			getch();
			cleardevice();
			station();
			break;

		case 'f':
			kirti();
			getch();
			cleardevice();
			station();
			break;


		case 'g':
			karol();
			getch();
			cleardevice();
			station();
			break;

		case 'h':
			rajiv();
			getch();
			cleardevice();
			station();
			break;

		case 'i':
			race();
			getch();
			cleardevice();
			station();
			break;

		case 'j':
			yamuna();
			getch();
			cleardevice();
			station();
			break;

		case 'k':
			akshardham();
			getch();
			cleardevice();
			station();
			break;

		case 'l':
			noida();
			getch();
			cleardevice();
			station();
			break;

		case '0':
			cleardevice();
			start1();
			Welcome1();
			break;


		default :
			invalidinput1();
			station();
	 }


}

void jahangir()
{

	fp=fopen("qwerty.txt","r");
       cleardevice();
	 start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;

while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("***************************** JAHANGIR PURI STATION ****************************\n");
	printf("\n");
	printf("\n");
	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}

}

void vishwa()
{
	fp=fopen("q2.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("***************************** VISHWAVIDYALAYA STATION **************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void kashmere()
{
	fp=fopen("q3.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** KASHMERE GATE STATION **************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void tees()
{
	fp=fopen("q4.txt","r");
	 cleardevice();
	 start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** TEES HAZARI STATION ****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void indralok()
{
	fp=fopen("q5.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("******************************** INDRALOK STATION *****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void kirti()
{
	fp=fopen("q6.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** KIRTI NAGAR STATION ****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void karol()
{
	fp=fopen("q7.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** KAROL BAGH STATION *****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	+printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void rajiv()
{
	fp=fopen("q8.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** RAJIV CHOWK STATION ****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void race()
{
	fp=fopen("q9.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** RACE COURSE STATION ****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void yamuna()
{
	fp=fopen("q10.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** YAMUNA BANK STATION ****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void akshardham()
{
	fp=fopen("q11.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("****************************** AKSHARDHAM STATION *****************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void noida()
{
	fp=fopen("q12.txt","r");
	cleardevice();
	start1();
temp=(struct node*)malloc(sizeof(struct node));
while(fscanf(fp,"%s%s%s%d%d%s%d%s",temp->name,temp->branch,temp->no,&temp->data,&temp->plat1,temp->stat1,&temp->plat2,temp->stat2)!=EOF)
{


	if(start==NULL)
	{
		start=temp;
		end=temp;
	}
	else
	{
		end->next=temp;
		end=temp;
	}

       temp->next=NULL;
       temp=(struct node*)malloc(sizeof(struct node));
}

fclose(fp);
temp=start;
while(temp!=NULL)
{
	clrscr();
	setbkcolor(GREEN);
	printf("***************************** NOIDA SECTOR 18 STATION **************************\n");
	printf("\n");
	printf("\n");

	printf("first train: %s\n",temp->name);
	printf("last train:  %s\n",temp->branch);
	printf("contact:     %s\n",temp->no);
	printf("parking charge(RS): %d\n",temp->data);
	printf("Platform no. %d   %s\n",temp->plat1,temp->stat1);
	printf("Platform no. %d   %s",temp->plat2,temp->stat2);
	temp=temp->next;
	printf("\n");
}
}

void route()
{
	char fst[100];
	char lst[100];
	int n;

	cleardevice();
	start1();

		setbkcolor(BLACK);
		 settextstyle(2,0,7);
		setcolor(CYAN);
		outtextxy(150,50,"CHOOSE STATION");
		setcolor(BROWN);
		outtextxy(100,100,"1 Jahangir Puri");
		outtextxy(100,120,"2 Vishwavidyalaya");
		outtextxy(100,140,"3 Kashmere Gate");
		outtextxy(100,160,"4 Tees Hazari");
		outtextxy(100,180,"5 Indralok");
		outtextxy(100,200,"6 Kirti Nagar");
		outtextxy(400,100,"7 Karol Bagh");
		outtextxy(400,120,"8 Rajiv Chowk");
		outtextxy(400,140,"9 Race Course");
		outtextxy(400,160,"10 Yamuna Bank");
		outtextxy(400,180,"11 Akshardham");
		outtextxy(400,200,"12 Noida Sector 18");

		setcolor(GREEN);
		outtextxy(100,250,"0 PREVIOUS MENU");

		switch(getch())
		{
		case '0':
			cleardevice();
			start1();
			Welcome1();
			break;
		default :

		setcolor(MAGENTA);
		outtextxy(100,300,"ENTER FIRST STATION");
	       gotoxy(50,20);
	       scanf("%s",fst);
	       outtextxy(100,330,"ENTER SECOND STATION");
	       gotoxy(50,22);
	       scanf("%s",lst);
	       inform(fst,lst,n);
	     }
}

void inform(char fst[100],char lst[100],int n)
{
int tv,v;
char as[30];
int pp,i;
char vp[100];
struct train *start2=NULL,*end2=NULL;
struct record *start4=NULL,*end4=NULL;
struct record *t=NULL;
  t->km=0;
  t->rs=0;
  t->nst=0;
  t->time=0;

 f1=fopen("qwer.txt","r");
f2=fopen("record.txt","r");

cleardevice();
	     start1();
temp2=(struct train*)malloc(sizeof( struct train));
while(fscanf(f1,"%s",temp2->filest)!=EOF)
{
if(start2==NULL)
{
start2=temp2;
end2=temp2;
}
else
{
end2->next=temp2;
end2=temp2;
}
temp2->next=NULL;
temp2=(struct train*)malloc(sizeof(struct train));
}
fclose(f1);
temp4=(struct record *)malloc(sizeof(struct record));
while(fscanf(f2,"%d%d%d%d ",&temp4->rs,&temp4->km,&temp4->nst,&temp4->time)!=EOF)
{
if(start4==NULL)
{
start4=temp4;
end4=temp4;
}
else
{
end4->down=temp4;
end4=temp4;
}
temp4->down=NULL;
temp4=(struct record*)malloc(sizeof(struct record));
}
fclose(f2);
tv=0;
v=0;
temp2=start2;
  temp4=start4;
while(strcmp(temp2->filest,fst)!=0)
{
temp2=temp2->next;
tv++;
}
temp2=start2;
while(strcmp(temp2->filest,lst)!=0)
{
temp2=temp2->next;
v++;
}
if(tv>v)
{
strcpy(as,fst);
strcpy(fst,lst);
strcpy(lst,as);
}
temp2=start2;
temp4=start4;
  while(temp2!=NULL)
  {
      if(strcmp(temp2->filest,fst)==0)
       {
	while(temp4!=NULL)
	 {
	  if(strcmp(temp2->filest,lst)==0)
	    {
	      n++;
	    }
	  else
	   {
	    t->rs=t->rs+temp4->rs;
	    t->km=t->km+temp4->km;
	    t->nst=t->nst+temp4->nst;
	    t->time=t->time+temp4->time;
	    temp2=temp2->next;

	   }
	   temp4=temp4->down;
	  }
       }
      temp2=temp2->next;
      temp4=temp4->down;
   }
    clrscr();
    setbkcolor(BROWN);
  printf("\n");
  printf("\n");
  printf("RS     KM     NOS    TIME(min)\n");
  printf("%d     %d     %d        %d   ",t->rs,t->km,t->nst,t->time);
  printf("\n\n");
outtextxy(10,100,"TOTAL STATIONS ON THE WAY ::");
printf("\n\n\n");
temp2=start2;
po=start2;
pp=0;
//if(tv<=v)
//{
while(strcmp(temp2->filest,fst)!=0)
temp2=temp2->next;
while(strcmp(po->filest,lst)!=0)
po=po->next;
while(strcmp(temp2->filest,po->filest)!=0)
{
if(tv>v)
{
temp10=(struct train*)malloc(sizeof(struct train));
strcpy(temp10->filest,temp2->filest);
if(start10==NULL)
{
start10=temp10;
start10->next=NULL;
}
else
{
temp10->next=start10;
start10=temp10;
}
temp2=temp2->next;
}
else
{
printf("%s",temp2->filest);
printf("\n\n");
temp2=temp2->next;
}}
if(tv>v)
{
printf("%s",po->filest);
printf("\n\n");
while(start10!=NULL)
{
printf("%s",start10->filest);
start10=start10->next;
printf("\n\n");
}
}
else
printf("%s",po->filest);

getch();
route();
}

void map()
{
       cleardevice();
       start1();
	setbkcolor(YELLOW);
settextstyle(1,0,5);
setcolor(MAGENTA);
setlinestyle(SOLID_LINE,6,3);
outtextxy(200,200,"METRO MAP");

setcolor(LIGHTGRAY);
outtextxy(190,217,"-----x---");
outtextxy(190,220,"----- ---");
delay(2000);
	map1();
}

void map1()
{

cleardevice();
start1();
setbkcolor(WHITE);
setcolor(GREEN);
line(10,200,200,200);

setcolor(MAGENTA);
circle(205,200,4);

setcolor(GREEN);
line(207,203,178,250);
setcolor(RED);
line(207,200,308,200);
setcolor(MAGENTA);
circle(313,200,4);
setcolor(RED);

line(315,200,500,200);
setcolor(YELLOW);
line(311,205,311,300);
setcolor(MAGENTA);
circle(311,305,4);
setcolor(YELLOW);
line(311,310,311,450);
setcolor(BLUE);
line(311,330,356,365);
line(356,365,356,410);
line(356,410,390,450);

setcolor(CYAN);
line(317,305,350,330);
line(350,330,450,330);
line(450,330,530,450);
line(450,330,450,320);
line(450,320,500,250);
line(500,250,570,250);
line(309,310,290,270);
line(290,270,200,270);
line(200,270,178,250);
line(178,250,15,400);
line(15,400,5,400);

setcolor(MAGENTA);
circle(177,249,4);
setcolor(RED);
line(200,200,50,100);
setcolor(YELLOW);
line(308,200,308,100);
line(308,100,200,50);
setcolor(BROWN);
line(307,285,150,450);
line(307,285,307,275);

settextstyle(12,1,1);
setcolor(DARKGRAY);
outtextxy(25,180,"Nangloi");
outtextxy(65,180,"Udyog Nagar");
outtextxy(90,180,"Peeragarhi");
outtextxy(140,180,"Shivaji Park");
outtextxy(200,130,"Indralok");
outtextxy(240,160," Pratap Nagar");
outtextxy(275,160,"Tees Hazari");
outtextxy(308,170,"Kasmere Gate");
outtextxy(365,170,"Shastri Park");
outtextxy(435,160,"Mansarovar Park");
outtextxy(496,120,"Dilshad Garden");
settextstyle(12,0,1);
outtextxy(315,150,"Vidhan Sabha");
outtextxy(315,120,"Vishwavidyalaya");
outtextxy(295,85,"G.T.B Nagar");
outtextxy(210,50,"Jahangir Puri");
settextstyle(12,1,1);
outtextxy(172,240,"Kirti Nagar");
outtextxy(12,390,"Uttam Nagar");
outtextxy(140,300,"Tagore Garden");
outtextxy(80,350,"Tilak Nagar");
outtextxy(200,270,"Patel Nagar");
outtextxy(234,277,"Karol Bagh");
outtextxy(280,260,"Shivaji Stdm.");

settextstyle(12,0,1);
outtextxy(320,450,"INA");
outtextxy(220,400,"Race course");
outtextxy(320,330,"Cntrl sec.");
outtextxy(320,300,"Rajiv Chawk");
settextstyle(12,1,1);
outtextxy(420,330,"Yamuna Bank");
outtextxy(570,250,"Vaishali");
outtextxy(514,250,"ISBT");

settextstyle(12,0,1);
outtextxy(450,300,"Nirman Vihar");
outtextxy(470,350,"Akshardham");
outtextxy(500,390,"Mayur Vihar");
outtextxy(532,450,"Noida sec 18");
outtextxy(280,380,"Khan Mkt.");
outtextxy(380,430,"Jangpura");
outtextxy(370,455,"Lajpat Nagar");
outtextxy(50,90,"Rithala");
outtextxy(94,120,"PitamPura");
outtextxy(10,160,"Netaji Subhas Place");

setcolor(LIGHTGRAY);
circle(29,200,2);
circle(69,200,2);
circle(94,200,2);
circle(144,200,2);
circle(205,199,2);
circle(244,200,2);
circle(279,200,2);
circle(312,200,2);
circle(369,200,2);
circle(439,200,2);
circle(500,200,2);
circle(308,150,2);
circle(308,120,2);
circle(280,87,2);
circle(200,50,2);
circle(178,250,2);
circle(14,400,2);
circle(123,300,2);
circle(70,350,2);
circle(200,270,2);
circle(230,270,2);
circle(284,310,2);
circle(311,450,2);
circle(311,400,2);
circle(311,330,2);
circle(311,305,2);
circle(420,330,2);
circle(566,250,2);
circle(510,250,2);
circle(470,295,2);
circle(470,360,2);
circle(490,390,2);
circle(530,450,2);
circle(356,380,2);
circle(375,430,2);
circle(390,450,2);
circle(50,100,2);
circle(90,123,2);
circle(124,150,2);

settextstyle(1,0,3);
setcolor(GREEN);
outtextxy(350,20," 1 PREVIOUS MENU");
switch(getch())
{
	case '1':
		 cleardevice();
			start1();
			Welcome1();
			break;
	default:
		invalidinput1();
			map1();

}

}