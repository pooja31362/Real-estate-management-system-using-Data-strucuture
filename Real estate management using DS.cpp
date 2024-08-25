#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void insertatend(char *,int,int,int ,char *,int ,char*,char*,char*);
void insertatbg(char *,int,int,int ,char *,int ,char*,char*,char*);
void insertatloc(char *,int ,int,int ,char *,int ,char*,char*,char*,int);
void displayforward();
void displayreverse();
void displayforwardc();
void displayreversec();
void deletionbeg();
void deletionend();
void deleteFromN(int);
void calculation(float ,float ,float );
void update_data(int , int );
void update_datac(char*,char*);
void booking(char*,char *,int,int ,char*,char *,int);
void insertbro(char *,char*,int,char*,char*);
void clear();
struct node{
    char name[15];
    int rgno;
    int amount;
    int sqfeet;
    char place[20];
    long int phone;
    char mail[30];
    char address[100];
    int a[200];
    char facility[500];
    //int idno;
    struct node *next;
    struct node *prev;
}*head = NULL, *tail=NULL, *p=NULL, *temp=NULL;
struct node *deleteByValue(struct node * head, int );
void search(struct node* head, char*);
void searcham(struct node* head, int);
int main(){
	char n[15];
    int r,py;
    int amt,findreg;
    int sq;
    char pl[20],add[50];
    long int ph;
    char m[30],findp[30];
    int choice,chs;
    int mc;
    int i;
    int payment;
    int ch2,l1,findam;
	int id,old,newa;
	char oldp[20],newp[20];
	char fac[500];
	float principal, rate, time, emi;
    int pr,index,position;
    int con,chad,conad,dis;
    char chr4,chr3,chr2,chr1;
    int bro;
    char cha[50];
    int ch,b;
    char pass[20];
    printf("----------------------------------------------------------------------------------------------------");
    printf("\n\t\t\t\tO N L I N E   R E A L   E A S T A T E ");
    printf("\n----------------------------------------------------------------------------------------------------");
    while(1){
    printf("\nENTER YOUR CHOICE");
    printf("\nPRESS 1 FOR ADMIN PROFILE");
    printf("\nPRESS 2 FOR SELLER PROFILE");
    printf("\nPRESS 3 FOR CLIENT PROFILE");
    printf("\nPRESS 4 FOR EXIT\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    	do{
    	printf("\n***************************************************************************************************");
    	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-A D M I N  P R O F I L E-");
    	printf("\n\n***************************************************************************************************");
    	printf("\nPlease enter the password to proceed further:");
    	scanf("%s",pass);
    	if(strcmp(pass,"realestate") ==  0){
    	    printf("\n**PRESS 1**   FOR SELLER PROFILE");
            printf("\n**PRESS 2**   FOR CLIENT PROFILE\n");
            scanf("%d",&chad);
            switch(chad){
        case 1:
    	printf("\n***************************************************************************************************");
    	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-S E L L E R  P R O F I L E-");
    	printf("\n\n***************************************************************************************************");
    	do{
    		printf("\n\t\t\t\t1. To Add the detail\n");
            printf("\t\t\t\t2. To view the details\n");
            printf("\t\t\t\t3. To Delete the details\n");
            printf("\t\t\t\t4. To Modify the details\n");
            printf("\t\t\t\t5. To Insert the agent details\n");
            printf("\t\t\t\t6. To view the EMI details\n");
            printf("\t\t\t\t7. To Clear\n");
            scanf("%d",&ch);
        if (ch==1){
        printf("\n<1>.For insertion at begining\n<2>.Insertion at the end\n<3>.Insertion at specified location\n");
    	scanf("%d",&pr);
    	FILE *app;
    	FILE *faa;
    app=fopen("detail.txt","a");
    faa=fopen("facility.txt","a");
    printf(" Enter the name  :");
    scanf("%s",n);
    printf(" Enter the place :");
    scanf("%s",pl);
    printf(" Enter the no.of square feet :");
    scanf("%d",&sq);
    printf(" Enter the amount per square feet :");
    scanf("%d",&amt);
    printf(" Enter the phone number :");
    scanf("%d",&ph);
    printf(" Enter your emaild :");
    scanf("%s",m);
    printf(" Enter the address of your place:");
    scanf("%s",add);;
    printf(" Enter the facility around the place:");
    scanf("%s",fac);
    FILE *rollr;
    rollr=fopen("ID.txt","r");
    if (NULL == rollr) {
	   	printf("Sorry file can't be opened \n");
	   	static int i=0;
        }
	    //printf("Content of this file are \n");
        //while (!feof(rollr)) {
        while (fgets(cha, 50, rollr) != NULL) {
        //printf("%s", str);
              // cha= fgetc(rollr);
               i=atoi(cha);
               //printf("%s", cha);
			 }
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*---THE PROPERTY ID PROVIDED FOR YOU :%d---*-*-*-*-*-*-*-*-*-*-*-*",i+1);
    i=i+1;
    r=i;
    fprintf(app,"Name: %s\n Place: %s\n Square feet: %d\n Amount: %d\n Phone number: %d\n Email: %s Address :%s\n Facility: %s\n ID: %d\n",n,pl,sq,amt,ph,m,add,fac,r);
    fclose(app);
    FILE *rollw;
    rollw=fopen("ID.txt","w");
    fprintf(rollw,"%d",r);
    fclose(rollw);
   // i=cha;
	fclose(rollr);
    fprintf(faa,"ID :%d \t\t\t Place: %s  \t\t\t Facility: %s\n",r,pl,fac);
    fclose(faa);
    if(pr==1){
            insertatbg(n,r,amt,sq,pl,ph,m,add,fac);
            printf("\nThe details are recorded successfully..........");
			}
    else if(pr==2){
            insertatend(n,r,amt,sq,pl,ph,m,add,fac);
             printf("\nThe details are recorded successfully............");
			 }
    else if(pr==3){
    	    printf("\nEnter the location to be added:");
    	    scanf("%d",&index);
    	    insertatloc(n,r,amt,sq,pl,ph,m,add,fac,index);
	}
       else
           printf("\nEnter the choice correctly:\n");        
    }
    else if(ch==2){
    	printf("\n1.Display in Forward\n2.Display in Reverse\n");
    	scanf("%d",&pr);
    	if(pr==1)
    		displayforward();
		else
            displayreverse();
    }
    else if(ch==3){
       printf("\n1.Deletion at begining\n2.Deletion at end\n3.deletion based on position\n4.Deleting particular element\n");
       scanf("%d",&ch2);
       if(ch2==1){
        deletionbeg();
        printf("\nData is removed successfully.................");
    }
       else if(ch2==2){
        deletionend();
        printf("\nData is removed successfully...................");
    }
       else if(ch==3){
       	printf("Enter the position to be deleted:");
       	scanf("%d",&position);
       	deleteFromN(position);
       	printf("\nData is removed successfully......................");
	   }
       else{
        printf("Enter the ID to be deleted :");
        scanf("%d",&id);
        //deletedata(id);
        deleteByValue(head,id);
        printf("\nData is removed successfully.....................");
       }
    }
    else if(ch==4){
    	printf("\n1.Modify the amount:");
    	printf("\n2.Modify the place:");
    	scanf("%d",&mc);
    	if(mc==1){
    	printf("\nEnter the amount to be replaced:");
    	scanf("%d",&old);
    	printf("\nEnter the new amount:");
    	scanf("%d",&newa);
    	update_data(old,newa);
    }
    else{
    	printf("\nEnter the place to be replaced:");
    	scanf("%s",oldp);
    	printf("\nEnter the new place:");
    	scanf("%s",newp);
    	update_datac(oldp,newp);
	}
    }
    else if(ch==5){
      	FILE *store;
    	store=fopen("agentcdetails.txt","a");
    	FILE *storecb;
    	storecb=fopen("agentcbdetails.txt","a");
    	FILE *storem;
    	storem=fopen("agentmdetails.txt","a");
        FILE *storeo;
    	storeo=fopen("agentodetails.txt","a");
   	printf("*E N T E R  T H E  A G E N T  D E T A I L S*\n");
   	printf(" Enter the place :");
    scanf("%s",pl);
    printf(" Enter the name  :");
    scanf("%s",n);
    printf(" Enter the phone number :");
    scanf("%d",&ph);
    printf(" Enter the emaild :");
    scanf("%s",m);
    printf(" Enter the address :");
    scanf("%s",add);
    if(strcmp(pl,"chennai") == 0){
    	fprintf(store,"NAME: %s\n Phone number: %d\n Email: %s\n Address:%s\n ",n,ph,m,add);
    	printf("\nTHE CHENNAI AGENT DETAILS ARE STORED SUCCESSFULLY");
    	insertbro(pl,n,ph,m,add);
    	fclose(store);
	}
	else if(strcmp(pl,"coimbatore") == 0){
		fprintf(storecb,"NAME: %s\n Phone number: %d\n Email: %s\n Address:%s\n ",n,ph,m,add);
		printf("\nTHE COIMBATORE AGENT DETAILS ARE STORED SUCCESSFULLY");
		insertbro(pl,n,ph,m,add);
		fclose(storecb);
	}
		else if(strcmp(pl,"madurai") == 0){
		fprintf(storem,"NAME: %s\n Phone number: %d\n Email: %s\n Address:%s\n ",n,ph,m,add);
		printf("\nTHE MADURAI AGENT DETAILS ARE STORED SUCCESSFULLY");
		insertbro(pl,n,ph,m,add);
		fclose(storem);
	}
	else{
	    fprintf(storeo,"\nPlace: %s\nNAME: %s\n Phone number: %d\n Email: %d\n Address:%s\n ",pl,n,ph,m,add);
	    printf("\nTHE OTHER AGENT DETAILS ARE STORED SUCCESSFULLY");
		insertbro(pl,n,ph,m,add);	
	    fclose(storeo);
    }
	}
	else if(ch==6){
	          	        FILE *calr;
					calr=fopen("emi.txt","r");
					if (NULL == calr){
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(calr)) {
                         ch = fgetc(calr);
                        printf("%c",ch);
                        }
	                fclose(calr);	
	            }
    else if(ch==7){
    	clear();
    }
    else{
        printf("Enter Right Choice........");
    }
    printf("\nDo you want to continue  y=1/n=2:");
    scanf ("%d",&con);
}while (con == 1 );
break;

case 2:
	printf("\n***************************************************************************************************");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-C L I E N T   P A G E-");
    printf("\n\n***************************************************************************************************");
	    do{
            printf("\n\t\t\t\t1. to Search the property\n");
            printf("\t\t\t\t2. to view the sold list\n"); 
            printf("\t\t\t\t3. to Book the property\n");
            printf("\t\t\t\t4. to view the details\n");
            printf("\t\t\t\t5. to view the facilities\n");
            printf("\t\t\t\t6. to view the agent details\n");
            printf("\t\t\t\t7. to delete the costumer details\n");
            printf("\t\t\t\t8. to calculate the EMI\n");
            printf("\t\t\t\t9. to view the payment status\n"); 
            printf("\t\t\t\t10. to clear\n");
			scanf("%d",&ch);
			if(ch==1){
					printf("\n\t\t<1>.Search by place:");
					printf("\n\t\t<2>.Search by amount:\n");
					printf("\n\t\tENTER YOUR CHOICE :\n");	
					scanf("%d",&chs);
					if(chs==1){
						printf("Enter the place to be searched:");
						scanf("%s",findp);
					    search(head,findp);	
					}
					else{
						printf("Enter the amount to be searched:");
						scanf("%d",&findam);
					    searcham(head,findam);	
					}
			}
			else if(ch==2){
				FILE *ptr;
				ptr = fopen("sold.txt", "a+");
					ptr=fopen("sold.txt","r");
	                if (NULL == ptr) {
	               	printf("Sorry file can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(ptr)) {
                         ch = fgetc(ptr);
                        printf("%c", ch);
                        }
	                fclose(ptr);
	
			}
				else if(ch==3){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*W E L C O M E  T O  B O O K I N G  I N T E R F A C E-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
					    FILE *file;
					    FILE *fp;
					    FILE *ptr;
					    char str[200];
                        fp = fopen("detailcos.txt","a");
		                printf("\nEnter your details:");
		                printf(" \n*  Enter the name :");
                    scanf("%s",n);
                    printf("* Enter the place :");
                    scanf("%s",pl);
                    printf("*  Enter the no.of square feet :");
                    scanf("%d",&sq);
                    //printf("*  Enter the amount per square feet :");
                    //scanf("%d",&amt);
                    printf("*  Enter the phone number :");
                    scanf("%d",&ph);
                    printf("*  Enter your e-mail id :");
                    scanf("%s",m);
                    printf("*  Enter your address :");
                    scanf("%s",add);
                    printf("*  Enter the property id number :");
                    scanf("%d",&r);
                    fprintf(fp,"Name: %s\n Place: %s\n Square feet: %d\n Phone number: %d\n Email: %d\n Address:%s\n ID: %d\n",n,pl,sq,ph,m,add,r);
					booking(n,pl,sq,ph,m,add,r);
					file = fopen("sold.txt", "a");
					fprintf(file ,"ID: %d\t\tPLACE: %s\t\t\tSOLD\n",r,pl);
					fclose(file);
					printf("\nwelcome to payment:");
					printf("\nEnter the name:");
					scanf("%s",n);
					printf("\nEnter the place you have booked:");
					scanf("%s",pl);
					printf("\n***************Enter the payment status*************\n");
					printf("PRESS <1> FOR ONLINE PAYEMENT\n");
					printf("\nPRESS <2> FOR CASH PAYEMENT");
					scanf("%d",&py);
					if(py==1){
						FILE *p;
						p=fopen("payment.txt","a");
						fprintf(p,"NAME :%s\nPLACE :%s\nSTATUS :ONLINE",n,pl);
						fclose(p);
						printf("T H A N K S  F O R   Y O U R   R E S P O N S E");
					}
					else{
						FILE *pay;
						pay=fopen("paymentc.txt","a");
						fprintf(pay,"NAME :%s\nPLACE :%s\nSTATUS :CASH",n,pl);
						fclose(pay);
						printf("T H A N K S  F O R   Y O U R   R E S P O N S E!");
						
					}
 				}
 				else if(ch==4){
 					printf("\nPRESS <1> DISPLAY IN FORWARD");
 					printf("\nPRESS <2> DISPLAY IN REVERSE");
 					scanf("%d",&dis);
 					if(dis==1){
 						displayforwardc();
					 }
					 else{
					 	displayreversec();
					 }
				}
				else if(ch==5){
					printf("\n**********F A C I L I T E S  A R O U N D   P L A C E************");
					FILE *re;
					re=fopen("facility.txt","r");
					if (NULL == re) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(re)) {
                         ch = fgetc(re);
                        printf("%c",ch);
                        }
	                fclose(re);
				}
				else if(ch==6){
					printf("\nPRESS <1> TO VIEW CHENNAI AGENTS\n");
					printf("\nPRESS <2> TO VIEW COIMBATORE AGENTS\n");
					printf("\nPRESS <3> TO VIEW MADURAI AGENTS\n");
					printf("\nPRESS <4> TO VIEW OTHER PLACE AGENTS\n");
					scanf("%d",&bro);
					if(bro==1){
						FILE *storer;
    	                storer=fopen("agentcdetails.txt","r");
	                    if (NULL == storer) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storer)) {
                         chr1 = fgetc(storer);
                        printf("%c", chr1);
                        }
	                fclose(storer);
					}
					else if(bro==2){
						    FILE *storecbr;
    	                    storecbr=fopen("agentcbdetails.txt","r");
    	                    if (NULL == storecbr) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storecbr)) {
                         chr2 = fgetc(storecbr);
                        printf("%c", chr2);
                        }
	                fclose(storecbr);
					}
					else if(bro==3){
						    FILE *storemr;
    	                    storemr=fopen("agentmdetails.txt","r");
    	            if (NULL == storemr) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storemr)) {
                         chr3 = fgetc(storemr);
                        printf("%c", chr3);
                        }
	                fclose(storemr);
					}
					else{
    	                FILE *storeor;
    	                storeor=fopen("agentodetails.txt","r");
    	            if (NULL == storeor) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storeor)) {
                         chr4= fgetc(storeor);
                        printf("%c", chr4);
                        }
	                fclose(storeor);
                    }
				}
				else if(ch==7){
					        deletionbeg();
                            printf("\nData is removed successfully.................");
				}
				else if(ch==8){
                   	printf("\nEnter your name :");
					scanf("%s",n);
                    printf("\nEnter principal: ");
                    scanf("%f",&principal);
                    printf("\nEnter rate: ");
                    scanf("%f",&rate);
				    printf("\nEnter time in year: ");
					scanf("%f",&time);
					calculation(principal,rate,time);
					FILE *cal;
					cal=fopen("emi.txt","a");
					fprintf(cal,"NAME :%s\nPRINCIPAL :%f\nRATE :%f\nTIME IN YEAR :%f\n",n,principal,rate,time);
					fclose(cal);
				}
				else if(ch==9){
					printf("\nPRESS <1> FOR ONLINE PAYEMENT STATUS\n");
					printf("\nPRESS <2> FOR CASH PAYEMENT STATUS\n");
					printf("\nENTER YOUR CHOICE :");
					scanf("%d",&payment);
					if(payment==1){
					FILE *pr;
					pr=fopen("payment.txt","r");
					if (NULL == pr) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(pr)) {
                         ch = fgetc(pr);
                        printf("%c",ch);
                        }
	                fclose(pr);
	            }
	            else{
	            	FILE *payr;
					payr=fopen("paymentc.txt","r");
					if (NULL == payr) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(payr)) {
                         ch = fgetc(payr);
                        printf("%c",ch);
                        }
	                fclose(payr);
				}
				}
				else if(ch==10){
					clear();
				}
			   else{
                        printf("Enter Right Choice .......");
			   }
	        printf ("\nDo you want to continue(Y=1/N=2):");
		    scanf ("%d",&con);
			}while (con == 1);
        break;
		}
	}
	else{
	printf("PLEASE ENTER THE CORRECT PASSWORD!");
    }
		printf ("\nDo you want to continue y=1/n=2:");
		scanf ("%d",&conad);
	}while (conad == 1);
break;  	
    case 2:
    	printf("\n***************************************************************************************************");
    	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-S E L L E R  P R O F I L E-");
    	printf("\n\n***************************************************************************************************");
    	do{
    		printf("\n\t\t\t\t1. To Add the detail\n");
            printf("\t\t\t\t2. To view the details\n");
            printf("\t\t\t\t3. To delete the details\n");
            printf("\t\t\t\t4. To modify the details\n");
            printf("\t\t\t\t5. To View the EMI details\n");
            printf("\t\t\t\t6. To clear\n");  
            scanf("%d",&ch);
    if (ch==1){
        printf("\n<1>.For insertion at begining\n<2>.Insertion at the end\n<3>.Insertion at specified location\n");
    	scanf("%d",&pr); 
    	FILE *app;
    	FILE *faa;
	faa=fopen("facility.txt","a");
    app=fopen("detail.txt","a");
    printf(" Enter the name  :");
    scanf("%s",n);
    printf(" Enter the place :");
    scanf("%s",pl);
    printf(" Enter the no.of square feet :");
    scanf("%d",&sq);
    printf(" Enter the amount per square feet :");
    scanf("%d",&amt);
    printf(" Enter the phone number :");
    scanf("%d",&ph);
    printf(" Enter your emaild :");
    scanf("%s",m);
    printf(" Enter the address of your place:");
    scanf("%s",add);;
    printf(" Enter the facility around the place:");
    scanf("%s",fac);
    FILE *rollr;
    rollr=fopen("ID.txt","r");
    if (NULL == rollr) {
	   	printf("Sorry file can't be opened \n");
	   	static int i=0;
        }
	    //printf("Content of this file are \n");
        //while (!feof(rollr)) {
        while (fgets(cha, 50, rollr) != NULL) {
        //printf("%s", str);
              // cha= fgetc(rollr);
               i=atoi(cha);
               //printf("%s", cha);
			 }
    printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*---THE PROPERTY ID PROVIDED FOR YOU   :%d---*-*-*-*-*-*-*-*-*-*-*-*",i+1);
    i=i+1;
    r=i;
   // fprintf(f,"Name: %s\n Place: %s\n Square feet: %d\n Amount: %d\n Phone number: %d\n Email: %d\n ID: %d\n",n,pl,sq,amt,ph,m,r);
    //fclose(f);
    fprintf(app,"Name: %s\n Place: %s\n Square feet: %d\n Amount: %d\n Phone number: %d\n Email: %d\n Address :%s\n Facility: %s\n ID: %d\n",n,pl,sq,amt,ph,m,add,fac,r);
    fclose(app);
    fprintf(faa,"ID :%d \t\t\tPlace: %s \t\t\t Facility: %s\n",r,pl,fac);
    fclose(faa);
    if(pr==1){
            insertatbg(n,r,amt,sq,pl,ph,m,add,fac);
            printf("\n\nthe details are recorded successfully..........");
			}
    else if(pr==2){
            insertatend(n,r,amt,sq,pl,ph,m,add,fac);
             printf("\n\nthe details are recorded successfully............");
			 }
    else if(pr==3){
    	    printf("\nEnter the location to be added:");
    	    scanf("%d",&index);
    	    insertatloc(n,r,amt,sq,pl,ph,m,add,fac,index);
	}
       else
           printf("\nEnter the choice correctly:\n");        
    }
    else if(ch==2){
    	printf("\n1.Display in Forward\n2.Display in Reverse\n");
    	scanf("%d",&pr);
    	if(pr==1)
    		displayforward();
		else
            displayreverse();
    }
    else if(ch==3){
       printf("\n1.Deletion at begining\n2.Deletion at end\n3.deletion based on position\n4.Deleting particular element\n");
       scanf("%d",&ch2);
       if(ch2==1){
        deletionbeg();
        printf("\nData is removed successfully.................");
    }
       else if(ch2==2){
        deletionend();
        printf("\nData is removed successfully...................");
    }
       else if(ch==3){
       	printf("Enter the position to be deleted:");
       	scanf("%d",&position);
       	deleteFromN(position);
       	printf("\nData is removed successfully......................");
	   }
       else{
        printf("Enter the ID to be deleted :");
        scanf("%d",&id);
        //deletedata(id);
        deleteByValue(head,id);
        printf("\nData is removed successfully.....................");
       }
    }
    else if(ch==4){
    	printf("\n1.Modify the amount:");
    	printf("\n2.Modify the place:");
    	scanf("%d",&mc);
    	if(mc==1){
    	printf("\nEnter the amount to be replaced:");
    	scanf("%d",&old);
    	printf("\nEnter the new amount:");
    	scanf("%d",&newa);
    	update_data(old,newa);
    }
    else{
    	printf("\nEnter the place to be replaced:");
    	scanf("%s",oldp);
    	printf("\nEnter the new place:");
    	scanf("%s",newp);
    	update_datac(oldp,newp);
	}
    }
    else if(ch==5){
          	        FILE *calr;
					calr=fopen("emi.txt","r");
					if (NULL == calr){
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(calr)) {
                         ch = fgetc(calr);
                        printf("%c",ch);
                        }
	                fclose(calr);	
	}
    else if(ch==6){
    	clear();
    }
    else{
        printf("Enter Right Choice........");
    }
    printf("\nDo you want to continue  y=1/n=2:");
    scanf ("%d",&con);
}while (con == 1 );
break;

case 3:
    	printf("\n***************************************************************************************************");
    	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-C L I E N T   P A G E-");
    	printf("\n\n***************************************************************************************************");
	    do{
            printf("\n\t\t\t\t1. to Search the property\n");
            printf("\t\t\t\t2. to view the sold list\n");
            printf("\t\t\t\t3. to Book the property\n");
            printf("\t\t\t\t4. to view the facilities\n");
            printf("\t\t\t\t5. to view the agent details\n");
            printf("\t\t\t\t6. to calculate the EMI\n");
            printf("\t\t\t\t7. to clear\n");
			scanf("%d",&ch);
			if(ch==1){
					printf("\n\t\t1.Search by place:");
					printf("\n\t\t2.Search by amount:\n");
					printf("ENTER YOUR CHOICE :");
					scanf("%d",&chs);
					if(chs==1){
						printf("Enter the place to be searched:");
						scanf("%s",findp);
					    search(head,findp);	
					}
					else{
						printf("Enter the amount to be searched:");
						scanf("%d",&findam);
					    searcham(head,findam);	
					}
			}
			else if(ch==2){
				FILE *ptr;
				ptr = fopen("sold.txt", "a+");
					ptr=fopen("sold.txt","r");
	                if (NULL == ptr) {
	               	printf("file can't be opened \n");
                  	}
	                printf("content of this file are \n");
                    while (!feof(ptr)) {
                         ch = fgetc(ptr);
                        printf("%c", ch);
                        }
	                fclose(ptr);
			}
				else if(ch==3){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*WELCOME TO BOOKING INTERFACE-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
					printf("\nplease check the sold details!");
					    FILE *file;
					    FILE *fp;
					    FILE *ptr;
					    char str[200];
                        fp = fopen("detailcos.txt","a");
		                printf("\nEnter your details:");
		                printf(" \n*  Enter the name :");
                    scanf("%s",n);
                    printf("* Enter the place :");
                    scanf("%s",pl);
                    printf("*  Enter the no.of square feet :");
                    scanf("%d",&sq);
                    printf("*  Enter the phone number :");
                    scanf("%d",&ph);
                    printf("*  Enter your e-mail id :");
                    scanf("%s",m);
                    printf("*  Enter your address :");
                    scanf("%s",add);
                    printf("*  Enter the property id number :");
                    scanf("%d",&r);
                    fprintf(fp,"Name: %s\n Place: %s\n Square feet: %d\n Phone number: %d\n Email: %d\n Address: %s\n ID: %d\n",n,pl,sq,ph,m,add,r);
					booking(n,pl,sq,ph,m,add,r);
					file = fopen("sold.txt", "a");
					fprintf(file ,"ID: %d\t\t PLACE: %s\t\t\tSOLD\n",r,pl);
					fclose(file);
					printf("\nwelcome to payment:");
					printf("\nEnter the name:");
					scanf("%s",n);
					printf("\nEnter the place you have booked:");
					scanf("%s",pl);
					printf("\nEnter the payment status");
					printf("\nPRESS <1> FOR ONLINE PAYEMENT:");
					printf("\nPRESS <2> FOR CASH PAYEMENT:");
					printf("\nENTER YOUR CHOICE :");
					scanf("%d",&py);
					if(py==1){
						FILE *p;
						p=fopen("payment.txt","a");
						fprintf(p,"NAME :%s\nPLACE :%s\nSTATUS :ONLINE",n,pl);
						fclose(p);
						printf("\n********T H A N K S  F O R  Y O U R  R E S P O N S E!*********");
					}
					else{
						FILE *pay;
						pay=fopen("paymentc.txt","a");
						fprintf(pay,"NAME :%s\nPLACE :%s\nSTATUS :CASH",n,pl);
						fclose(pay);
						printf("\n********T H A N K S  F O R  Y O U R  R E S P O N S E!*********");	
					}
 				}
 				else if(ch==4){
 					printf("\n***********FACILITES AROUND PLACE**********");
					FILE *re;
					re=fopen("facility.txt","r");
					if (NULL == re) {
	               	printf("file can't be opened \n");
                  	}
	                printf("content of this file are \n");
                    while (!feof(re)) {
                         ch = fgetc(re);
                        printf("%c",ch);
                        }   
	                fclose(re);
				}
				else if(ch==5){ 
					printf("\nPRESS 1 TO VIEW CHENNAI AGENTS\n");
					printf("PRESS 2 TO VIEW COIMBATORE AGENTS\n");
					printf("PRESS 3 TO VIEW MADURAI AGENTS\n");
					printf("PRESS 4 TO VIEW OTHER PLACE AGENTS\n");
					printf("ENTER YOUR CHOICE :");
					scanf("%d",&bro);
					if(bro==1){
						FILE *storer;
    	                storer=fopen("agentcdetails.txt","r");
	                    if (NULL == storer) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storer)) {
                         chr1 = fgetc(storer);
                        printf("%c", chr1);
                        }
	                fclose(storer);
					}
					else if(bro==2){
						    FILE *storecbr;
    	                    storecbr=fopen("agentcbdetails.txt","r");
    	                    if (NULL == storecbr) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storecbr)) {
                         chr2 = fgetc(storecbr);
                        printf("%c", chr2);
                        }
	                fclose(storecbr);
					}
					else if(bro==3){
						    FILE *storemr;
    	                    storemr=fopen("agentmdetails.txt","r");
    	            if (NULL == storemr) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storemr)) {
                         chr3 = fgetc(storemr);
                        printf("%c", chr3);
                        }
	                fclose(storemr);
					}
					else{
    	                FILE *storeor;
    	                storeor=fopen("agentodetails.txt","r");
    	            if (NULL == storeor) {
	               	printf("File can't be opened \n");
                  	}
	                printf("Content of this file are \n");
                    while (!feof(storeor)) {
                         chr4= fgetc(storeor);
                        printf("%c", chr4);
                        }
	                fclose(storeor);
                    }
				}
				else if(ch==6){
					printf("\nEnter your name :");
					scanf("%s",n);
                    printf("\nEnter principal: ");
                    scanf("%f",&principal);
                    printf("\nEnter rate: ");
                    scanf("%f",&rate);
				    printf("\nEnter time in year: ");
					scanf("%f",&time);
					calculation(principal,rate,time);
					FILE *cal;
					cal=fopen("emi.txt","a");
					fprintf(cal,"NAME :%s\nPRINCIPAL :%f\nRATE :%f\nTIME IN YEAR :%f\n",n,principal,rate,time);
					fclose(cal);
				}
				else if(ch==7){
					clear();
				}
			   else{
                        printf("Enter Right Choice .......");
			   }
	        printf ("\nDo you want to continue:");
		    scanf ("%d",&con);
			}while (con == 1);
break;
case 4:
	exit(1);
	break;
}
}
}
void insertatend(char *n,int r,int amt,int sq,char *pl,int ph,char*m,char *add,char *fac){
	temp = (struct node*)malloc(sizeof(struct node));
    strcpy((temp->name),n);
    temp->rgno=r;
    temp->amount=amt;
    temp->sqfeet=sq;
    strcpy(temp->place,pl);
    temp->phone=ph;
    strcpy(temp->mail,m);
    strcpy(temp->address,add);
    strcpy(temp->facility,fac);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head = temp;
        tail=temp;
        return;
    } 
	p=head;
    while(p->next!=NULL) 
        p=p->next; 
    p->next=temp;
    temp->prev=p;
    tail=temp;
}
void insertatbg(char *n,int r,int amt,int sq,char *pl,int ph,char*m,char *add,char *fac){
	temp = (struct node*)malloc(sizeof(struct node));
    strcpy((temp->name),n);
    temp->rgno=r;
    temp->amount=amt;
    temp->sqfeet=sq;
    strcpy(temp->place,pl);
    temp->phone=ph;
    strcpy(temp->mail,m);
    strcpy(temp->address,add);
    strcpy(temp->facility,fac);
    temp->next=head;
    temp->prev = NULL;
    if (head != NULL){
        head->prev =temp;
    }
    head = temp;
}
void insertatloc(char *n,int r,int amt,int sq,char *pl,int ph,char*m,char *add,char *fac,int index){
    temp = (struct node*)malloc(sizeof(struct node));
   // temp->next=NULL;
    //temp->prev = NULL;
    int i = 0;
    while (i!=index-1) {
        p = p->next;
        i++;
    }
    strcpy((temp->name),n);
    temp->rgno=r;
    temp->amount=amt;
    temp->sqfeet=sq;
    strcpy(temp->place,pl);
    temp->phone=ph;
    strcpy(temp->mail,m);
    strcpy(temp->address,add);
    strcpy(temp->facility,fac);
    temp->next = p->next;
    p->next = temp;
    //return head;
}
void displayforward(){
	if(head==NULL){
		printf("\nS o r r y! !  t h e  l i s t  i s  e m p t y");
		return;
	}
	p=head;
	printf("\nID\tNAME\tPLACE\tAMOUNT\tSQUAREFEET\tPHONE NUMBER\tEMAIL\tADDRESS\n");
	while(p!=NULL){ 
	    printf("\n%d\t%s\t%s\t\t%d\t%d\t\t%d\t\t%s\n",p->rgno,p->name,p->place,p->amount,p->sqfeet,p->phone,p->mail,p->address);
		p=p->next;
	}
}
void displayreverse(){
	if(tail==NULL){
		printf("\nS o r r y  !  t h e  l i s t  i s   e m p t y");
		return;
	}
	p=tail;
	printf("\nID\tNAME\tPLACE\tAMOUNT\tSQUAREFEET\tPHONE NUMBER\tEMAIL\tADDRESS\n");
	while(p!=NULL){
	    printf("\n%d\t%s\t\t%s\t\t%d\t\t%d\t\t%d\t\t%s\n",p->rgno,p->name,p->place,p->amount,p->sqfeet,p->phone,p->mail,p->address);
		p=p->prev;
	}
}
struct node *deleteByValue(struct node * head, int id){
    struct node *p = head;
    struct node *q = head->next;
    while(q->rgno!=id && q->next!=NULL) {
        p = p->next;
        q = q->next;
    }
    if(q->rgno==id){
        p->next=q->next;
        free(q);
    }
    return head;
}
void deletionend(){
    if (head == NULL)
        printf("\nList is empty\n");
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    if (head->next == NULL)
       head = NULL;
    else {
        temp->prev->next = NULL;
        free(temp);
    }
}
void deletionbeg(){
    if (head == NULL)
        printf("\nList is empty\n");
    else {
        temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
    }
}
void deleteFromN(int position){
    //struct node *current;
    int i;
    p=head;
    for(i=1;i<position&&p!=NULL;i++){
        p=p->next;
    }
    if(position == 1) {
        deletionbeg();
    }
    else if(p==temp){
        deletionend();
}
    else if(p!= NULL){
        p->prev->next=p->next;
        p->next->prev=p->prev;
        free(p); 
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*SUCCESSFULLY DELETED NODE FROM %d POSITION.\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*", position);
    }
    else{
        printf("Invalid position!\n");
    }
}
void search(struct node* head, char* findp) {
    p=head;
    int pos = 1;
    while (p!= NULL) {
        if (strcmp(p->place,findp) == 0) {
            printf("tha searched data found at position %d.\n", pos);
            printf("\n%d\t%s\t%d\t%d\t%d\t%s\n",p->rgno,p->name,p->amount,p->sqfeet,p->phone,p->mail);
            return;
        }
        p= p->next;
        pos++;
    }
    printf("the searched data not found--------.\n");
}
void searcham(struct node* head, int findam) {
    p=head;
    int pos = 1;
    while (p!= NULL) {
        if (p->amount==findam) {
            printf("The searched data found at position %d---------.\n", pos);
            printf("\n%d\t%s\t%d\t%d\t%d\t%s\n",p->rgno,p->name,p->amount,p->sqfeet,p->phone,p->mail);
            return;
        }
        p= p->next;
        pos++;
    }
    printf("The searched data not found---------.\n");
}
void calculation(float principal,float rate,float time){
	float emi;
	rate=rate/(12*100); /*one month interest*/
    time=time*12; /*one month period*/
    emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
    printf("Monthly EMI is= %f\n",emi);
}
void update_data(int old, int newa){
   int pos = 0;
   if(head == NULL) {
      printf("Linked List not initialized");
      return;
   } 
   p=head;
   while(p!=NULL) {
      pos++;
      if(p->amount==old) {
         p->amount =newa;
         printf("\n%d Found at position %d, Replaced with %d\n", old,pos,newa);
         return;
      }
      if(p->next != NULL)
         p=p->next;
      else
         break;
   }
   printf("%d Does not exist in the list\n", old);
}
void update_datac(char *oldp, char *newp){
   int pos = 0;
   if(head == NULL) {
      printf("Linked List not initialized");
      return;
   } 
   p=head;
   while(p!=NULL) {
      pos++;
      if(strcmp(p->place,oldp)==0) {
         strcpy(p->place ,newp);
         printf("\n%s found at position %d, replaced with %s\n", oldp,pos,newp);
         return;
      }
      if(p->next != NULL)
         p=p->next;
      else
         break;
   }
   printf("%s does not exist in the list\n", oldp);
}
void clear(){
int i;
if(head==NULL){
printf("empty list");
return;
}
else{
	head=NULL;
	tail=NULL;
}
return;
}
void booking(char *n,char *pl,int sq,int ph,char *m,char *add,int r){
	temp = (struct node*)malloc(sizeof(struct node));
	strcpy((temp->name),n);
    temp->sqfeet=sq;
    strcpy(temp->place,pl);
    temp->phone=ph;
    strcpy(temp->mail,m);
    strcpy(temp->address,add);
    temp->rgno=r;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head = temp;
        tail=temp;
        return;
    } 
	p=head;
    while(p->next!=NULL) 
        p=p->next; 
    p->next=temp;
    temp->prev=p;
    tail=temp;
    printf("*-*-*-*-*-*-*-*-*-*T H E  P R O P E R T Y  I S  S U C C E S S F U L L Y  B O O K E D!*-*-*-*-*-*-*-*-*-*-*");
}

void displayforwardc(){
	if(head==NULL){
		printf("\nS o r r y! !  t h e  l i s t  i s  e m p t y");
		return;
	}
	p=head;
	printf("\nNAME\tPLACE\tSQUAREFEET\tPHONE NUMBER\tEMAIL\tADDRESS\tID\n");
	while(p!=NULL){ 
	    printf("\n%s\t%s\t\t%d\t%d\t\t%s\t\t%s\t\t%d\n",p->name,p->place,p->sqfeet,p->phone,p->mail,p->address,p->rgno);
		p=p->next;
	}
}
void displayreversec(){
	if(tail==NULL){
		printf("\nS o r r y  !  t h e  l i s t  i s   e m p t y");
		return;
	}
	p=tail;
	printf("\nNAME\tPLACE\tSQUAREFEET\tPHONE NUMBER\tEMAIL\tADDRESS\tID\n");
	while(p!=NULL){ 
	    printf("\n%s\t%s\t\t%d\t%d\t\t%s\t\t%s\t\t%d\n",p->name,p->place,p->sqfeet,p->phone,p->mail,p->address,p->rgno);
		p=p->prev;
	}
}
void insertbro(char *pl,char *n,int ph,char *m,char *add){
	temp = (struct node*)malloc(sizeof(struct node));
	strcpy(temp->place,pl);
    strcpy((temp->name),n);
    temp->phone=ph;
    strcpy(temp->mail,m);
    strcpy(temp->address,add);
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head = temp;
        tail=temp;
        return;
    } 
	p=head;
    while(p->next!=NULL) 
        p=p->next; 
    p->next=temp;
    temp->prev=p;
    tail=temp;
    printf("\nTHE DETAILS ARE STORED SUCCESSFULLY!");
}
  
