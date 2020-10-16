/*
@ C Programming Project

@author Ahmed Bin Delowar

Car Rental Record System is a project in C that can help us to understand the basic concepts of functions, file handling and data structure.
Adding new records of car renters, listing them, modifying them and updating, search for saved record,
and deleting the records are the basic functions which make up the main menu of this Car Rental Record System.
 The Car Rental Record System has a unique style of coding and is presented in a colorful manner.
 It uses files as database to perform file handling operations such as add, search, modify and delete records to manage car renters records.

*/
#include<stdio.h>                              //preprocessor directive
#include<conio.h>                           //conio.h header contains functions for console input/output.
#include<string.h>                         //string.h header defines one variable type,various functions for manipulating arrays of characters.
#include<stdlib.h>                         //is the header of the general purpose standard library
#include<windows.h>                        //The header file Windows.h, is base header file for Win32 programming
struct person                              //composite data type (or record)
{
     char customer_id[35];
    char customer_name[35];
     char father_name[35];
     char dl_num[30];
    long int mble_no;
    long int carmodel;
    char gender[8];
    char mail[100];
    char passport_no[50];
    char address[50];
    char nationality[20];
    char blood_grp[20];
    float carrent;
    float total;

    };
void menu();                //this function is refer as main menu of this program
void got();                 // this function is for Characters
void back();                //this function is to return to menu
void addrecord();           // //this function is to add records
void listrecord();           //this function is to view records
void modifyrecord();         //this function is to modify records
void deleterecord();         //this function is to delet records
void searchrecord();            //this function is to search records
int main()
{
    menu();
}
void back()
{
    menu();
}

void menu()
{
    system("cls");                     //Clearing the Screen
printf("\t\t**********CAR RENTAL RECORD SYSTEM*************");

printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete");

switch(getch())            //this is to select option from menu
{
    case '1':

                addrecord();
    break;
   case '2': listrecord();
    break;
    case '3': exit(0);                 //this function is to exit
    break;
    case '4': modifyrecord();
    break;
    case '5': searchrecord();
    break;
    case '6': deleterecord();
    break;
    default:
                system("cls");
                printf("\nEnter 1 to 6 only");
                printf("\n Enter any key");
                getch();

menu();
}
}
        void addrecord()
{
        system("cls");
        FILE *f;
        struct person p;                            //composite data type (or record)
        f=fopen("RENTPROJECT","ab+");               //file name //function is used to open a file to perform operations such as reading, writing
        printf("\n Enter Customer ID: ");
         gets(p.customer_id);

        fflush(stdin);
        printf("\n Enter Customer name: ");
        gets(p.customer_name);
          fflush(stdin);
          printf("\nEnter father name: ");
        gets(p.father_name);
          fflush(stdin);
        printf("\nEnter driving license number: ");
        gets(p.dl_num);

          fflush(stdin);
        printf("\nEnter passport no:");
        gets(p.passport_no);
          fflush(stdin);
        printf("\nEnter phone no:");
        scanf("%ld",&p.mble_no);
          fflush(stdin);
        printf("\nEnter gender:");
        gets(p.gender);
          fflush(stdin);
        printf("\nEnter e-mail:");
         gets(p.mail);
           fflush(stdin);
        printf("\nEnter Address:");
        gets(p.address);
          fflush(stdin);
        printf("\nEnter nationality:");
        gets(p.nationality);
          fflush(stdin);
        printf("\nEnter blood group: ");
        gets(p.blood_grp);
          fflush(stdin);
          fwrite(&p,sizeof(p),1,f);

            printf("\nSelect Car:\n \n1.Axia\n \n2.Myvi\n \n3.Alza\n \n4.Honda Jazz\n \n5.Proton Saga\n \n6.Honda City\n \n7.Honda Civic\n \n8.Bezza\n ");
            printf("\nSelect your car: ");
          scanf("%ld",&p.carmodel);
          if(p.carmodel==1)
          {
            printf("\nAXIA PER HOUR 6 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*6;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);

          }

          if(p.carmodel==2)
          {
            printf("\nMYVI PER HOUR 7 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*7;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }

          if(p.carmodel==3)
          {
            printf("\nALZA PER HOUR 9 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*9;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }

          if(p.carmodel==4)
          {
            printf("\nHONDA JAZZ PER HOUR 9 RM\n");
            printf("\nEnter car rent duration in hours: ");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*9;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }
          if(p.carmodel==5)
          {
            printf("\nPROTON SAGA PER HOUR 7 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*7;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }
          if(p.carmodel==6)
          {
            printf("\nHONDA CITY PER HOUR 10 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*10;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }
          if(p.carmodel==7)
          {
            printf("\nHONDA CIVIC PER HOUR 11 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*11;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }
          if(p.carmodel==8)
          {
            printf("\nBezza PER HOUR 8 RM\n");
            printf("\nEnter car rent duration in hours:");
              scanf("%f",&p.carrent);
              p.total=(p.carrent)*8;
              printf("\nTotal car rent:%.2f",p.total);
              fflush(stdin);
          }
          fflush(stdin);
        fwrite(&p,sizeof(p),1,f);              //writes data from the array pointed to, by ptr to the given stream.

      fflush(stdin);
        printf("\nrecord saved");

fclose(f);                         //The function fclose(FILE *stream) closes the stream. All buffers are flushed.

    printf("\n\nEnter any key");

	 getch();
    system("cls");
    menu();
}
void listrecord()
{
    struct person p;
    FILE *f;
f=fopen("RENTPROJECT","rb");
if(f==NULL)
{
printf("\nfile opening error in listing :");

exit(1);
}
while(fread(&p,sizeof(p),1,f)==1)       //reads data from the given stream into the array pointed to
{
     printf("\n\n\n YOUR RECORD IS\n\n ");
        printf("\nCustomer ID=%s\nCustomer Name=%s\nFather name=%s\nDriving License Number=%s\nPassport No=%s\nMobile no=%ld\nGender=%s\nE-mail=%s\nAddress=%s\nNationality=%s\nBlood group=%s\nCar Model=%ld",p.customer_id,p.customer_name,p.father_name,p.dl_num,p.passport_no,p.mble_no,p.gender,p.mail,p.address,p.nationality,p.blood_grp,p.carmodel);

	 getch();
	 system("cls");
}
fclose(f);
 printf("\n Enter any key");
 getch();
    system("cls");
menu();
}
void searchrecord()
{
    struct person p;
FILE *f;
char name[100];

f=fopen("RENTPROJECT","rb");
if(f==NULL)
{
    printf("\n error in opening\a\a\a\a");
    exit(1);

}
printf("\nEnter name of person to search\n");
got(name);
while(fread(&p,sizeof(p),1,f)==1)
{
    if(strcmp(p.customer_name,name)==0)        // strcmp() function compares two strings and returns 0 if both strings are identical.
    {
        printf("\n\tDetail Information About Car Renters %s",name);
        printf("\nCustomer ID=%s\nCustomer Name=%s\nFather name=%s\nDriving License Number=%s\nPassport No=%s\nMobile no=%ld\nGender=%s\nE-mail=%s\nAddress=%s\nNationality=%s\nBlood Group=%s\nCar Model=%ld",p.customer_id,p.customer_name,p.father_name,p.dl_num,p.passport_no,p.mble_no,p.gender,p.mail,p.address,p.nationality,p.blood_grp,p.carmodel);
    }
        else
        printf("file not found");

}
 fclose(f);
  printf("\n Enter any key");

	 getch();
    system("cls");
menu();
}
void deleterecord()
{
    struct person p;
    FILE *f,*ft;
	int flag;
	char name[100];
	f=fopen("RENTPROJECT","rb");
	if(f==NULL)
		{

			printf("CUSTOMER'S DATA NOT ADDED YET.");

		}
	else
	{
		ft=fopen("temp","wb+");
		if(ft==NULL)

            printf("file opaning error");
		else

        {


		printf("Enter CUSTOMER'S NAME:");
		got(name);

		fflush(stdin);
		while(fread(&p,sizeof(p),1,f)==1)
		{
			if(strcmp(p.customer_name,name)!=0)
				fwrite(&p,sizeof(p),1,ft);
			if(strcmp(p.customer_name,name)==0)
                flag=1;
		}
	fclose(f);
	fclose(ft);
	if(flag!=1)
	{
		printf("NO CUSTOMER'S RECORD TO DELETE.");
		remove("temp.txt");
	}
		else
		{
			remove("RENTPROJECT");
			rename("temp.txt","RENTPROJECT");
			printf("RECORD DELETED SUCCESSFULLY.");

		}
	}
}
 printf("\n Enter any key");

	 getch();
    system("cls");
menu();
}

void modifyrecord()
{
    int c;
    FILE *f;
    int flag=0;
    struct person p,s;
	char  name[50];
	f=fopen("RENTPROJECT","rb+");
	if(f==NULL)
		{

			printf("CUSTOMER'S DATA NOT ADDED YET.");
			exit(1);


		}
	else
	{
	    system("cls");
		printf("\nEnter CUSTOMER'S NAME TO MODIFY:\n");
            got(name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.customer_name)==0)
                {

                  printf("\n Enter Customer ID: ");
                  scanf("%ld",&p.customer_id);
                  fflush(stdin);
                   printf("\n Enter customer name: ");
                  gets(s.customer_name);
                    fflush(stdin);
                  printf("\nEnter father name: ");
                  gets(s.father_name);
                    fflush(stdin);
                  printf("\nEnter driving license no: ");
                  gets(s.dl_num);
                    fflush(stdin);
                  printf("\nEnter passport no:");
                  gets(s.passport_no);
                    fflush(stdin);
                  printf("\nEnter phone no:");
                  scanf("%ld",&s.mble_no);
                    fflush(stdin);
                  printf("\nEnter gender:");
                  gets(s.gender);
                    fflush(stdin);
                  printf("\nEnter e-mail:");
                   gets(s.mail);
                     fflush(stdin);
                  printf("\nEnter Address:");
                  gets(s.address);
                    fflush(stdin);
                  printf("\nEnter nationality:");
                  gets(s.nationality);
                    fflush(stdin);
                  printf("\nEnter blood group: ");
                  gets(s.blood_grp);
                    fflush(stdin);
                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&s,sizeof(p),1,f);
                    flag=1;
                    break;



                }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
	}
	 printf("\n Enter any key");
	 getch();
    system("cls");
	menu();

}
void got(char *name)
{

   int i=0,j;
    char c,ch;
    do
    {
        c=getch();
                if(c!=8&&c!=13)
                {
                    *(name+i)=c;
                        putch(c);
                        i++;
                }
                if(c==8)
                {
                    if(i>0)
                    {
                        i--;
                    }
                   // printf("h");
                    system("cls");
                    for(j=0;j<i;j++)
                    {
                        ch=*(name+j);
                        putch(ch);           //putch displays any alphanumeric characters to the standard output device

                    }

                }
    }while(c!=13);
      *(name+i)='\0';
}
