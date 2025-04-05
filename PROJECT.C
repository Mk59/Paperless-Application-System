#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>
int i=0,j=0,l=0,k=0,m=0;
char q;
void leave();
void bonafide();
void uniform();
void inconve();
void document();
void main()
{    char ch;
     int c;
     clrscr();
     do{
     printf("\n 1.Leave Application");
     printf("\n 2.Bonafide Application");
     printf("\n 3.Being Without Uniform Application");
     printf("\n 4.Inconvenience Application");
     printf("\n 5.To Get Original Document Application");
     printf("\n Enter Your Choice:: ");
     scanf("%d",&c);
     switch(c)
     {  case 1: leave();
		break;
	case 2: bonafide();
		break;
	case 3: uniform();
		break;
	case 4: inconve();
		break;
	case 5: document();
		break;
	default: printf("\n Wrong Input");
     }
     clrscr();
     cleardevice();
     printf("\n\nYour Application Created Successfully!!");
     printf("\nPath:: C\\TC\\BIN\\Your File Name");
     printf("\n\n\n Do You Want To Create One More Application? (Y or N)\n");
     scanf("%c",&q);
       }while(q=='y');
     getch();
     closegraph();
}

void leave()
{    int gd=DETECT,gm;
     char name[30], todate[14], dumy[1], roll[4], day[2], mon[2], year[4], fdate[14], tdate[14], depart[25], clas[10], div[1], sub[50], reason[80];
     struct date d;
     FILE *fp;
     clrscr();
     initgraph(&gd,&gm,"..\\bgi");
     printf("\t\t\t\tLeave Appilication\n");
     outtextxy(0,65,"Department");
     line(0,100,120,100);
     outtextxy(0,115,"Subject");
     line(0,147,350,147);
     outtextxy(0,162,"Name");
     line(0,195,250,195);
     outtextxy(0,210,"Class");
     line(0,245,100,245);
     outtextxy(0,260,"Division");
     line(0,292,70,292);
     outtextxy(0,305,"Roll Number");
     line(0,338,70,338);
     outtextxy(0,352,"Day");
     line(0,388,50,388);

     if(q!='y' || q!='Y')
      { fp=fopen("leave.docx","w");
	fclose(fp);
      }
     if(i==0)
     fp=fopen("leave.docx","a");
     else if(i==1)
     fp=fopen("leave1.docx","a");
     else if(i==2)
     fp=fopen("leave2.docx","a");
     else if(i==3)
     fp=fopen("leave3.docx","a");
     if(fp==NULL)
     { printf("Cannot Open File");
       fclose(fp);
       exit(1);
     }

      getdate(&d);
      sprintf(day," %d",d.da_day);
      sprintf(mon," %d",d.da_mon);
      sprintf(year," %d",d.da_year);
      printf("  \n\n\n\n");
     while(strlen(gets(dumy))>0)
     {  fputs(dumy,fp);
     }

      while(strlen(gets(depart))>0)
     { strupr(depart);
       fputs("\t\t\t\tLeave Application\n\n",fp);
       fputs("\t\t\t\t\t\t\t\t\tDate: ",fp);
       fputs(day,fp);
       fputs("/ ",fp);
       fputs(mon,fp);
       fputs("/",fp);
       fputs(year,fp);
       fputs("\nTo,\nThe HOD,\n",fp);
       fputs(depart,fp);
       fputs(" Department,\nSVERI's COE, Pandharpur\n\n\t\tSubject: ",fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(sub))>0)
     { strupr(sub);
       fputs(sub,fp);
       fputs("\n\nRespected Sir/Madam,\n\tI am, the undersigned,Mr.\\Ms.",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(name))>0)
     { strupr(name);
       fputs(name,fp);
       fputs(" studying in ",fp);
       break;
     }
      printf("\n\n");
      while(strlen(gets(clas))>0)
     { strupr(clas);
       fputs(clas,fp);
       fputs(" Div-",fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(div))>0)
     { strupr(div);
       fputs(div,fp);
       fputs(" Roll No. ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(roll))>0)
     { fputs(roll,fp);
       fputs(". Sir, I required to leave of ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(day))>0)
     { fputs(day,fp);
       fputs(" day's ",fp);
       break;
     }
     clrscr();
     clearviewport();
     printf("\n\n\n");
      outtextxy(0,65,"Date (DD/MM/YY)");
     line(0,100,120,100);
     outtextxy(0,115,"to");
     line(0,147,120,147);
     outtextxy(0,162,"Reason");
     line(0,195,400,195);
     printf("\n\n");
     while(strlen(gets(fdate))>0)
     { fputs(fdate,fp);
       fputs(" to ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(tdate))>0)
     { fputs(tdate,fp);
       fputs(" . It is required for ",fp);
       break;
     }
      printf("\n\n");
     while( strlen(gets(reason))>0)
     { strupr(reason);
       fputs(reason,fp);
       fputs(". I will complete the missed syllabus by consulting respective subject teachers or friends.\n",fp);
       fputs("\tSo, kindly consider my application and grant permission for the same.\n",fp);
       fputs("\tThanking you.\n\n\n \t\t\t\t\t\t\t\t  Yours sincerely,\n",fp);
       fputs("\t\t\t\t\t\t\t\t(",fp);
       fputs(name,fp);
       fputs(")",fp);
       break;
     }
     i++;
     fclose(fp);
}

void bonafide()
{
     int gd=DETECT,gm;
     char name[30], dumy[1], roll[4], tdate[2], day[2], mon[2], year[4], depart[25], clas[10], div[1], sub[50], reason[80];
     struct date d;
     FILE *fp;
     clrscr();
     initgraph(&gd,&gm,"..\\bgi");
     printf("\t\t\t\tBonafide Appilication\n\n");
     outtextxy(0,35,"Department");
     line(0,70,120,70);
     outtextxy(0,85,"Name");
     line(0,118,250,118);
     outtextxy(0,131,"Class");
     line(0,166,100,166);
     outtextxy(0,179,"Division");
     line(0,216,50,216);
     outtextxy(0,227,"Roll Number");
     line(0,262,50,262);
     outtextxy(0,275,"Reason");
     line(0,310,400,310);

     if(q!='y' || q!='Y')
      { fp=fopen("bonafide.docx","w");
	fclose(fp);
      }
     if(j==0)
     fp=fopen("bonafide.docx","a");
     else if(j==1)
     fp=fopen("bonafide1.docx","a");
     else if(j==2)
     fp=fopen("bonafide2.docx","a");
     else if(j==3)
     fp=fopen("bonafide3.docx","a");
     if(fp==NULL)
     { printf("Cannot Open File");
       fclose(fp);
       exit(1);
     }

      getdate(&d);
      sprintf(day,"%d",d.da_day);
      sprintf(mon,"%d",d.da_mon);
      sprintf(year," %d",d.da_year);
      printf("\n");
     while(strlen(gets(dumy))>0)
     {  fputs(dumy,fp);
     }
      while(strlen(gets(depart))>0)
     { strupr(depart);
       fputs("\t\t\t\tBonafide Application\n\n",fp);
       fputs("\t\t\t\t\t\t\t\t\tDate: ",fp);
       fputs(day,fp);
       fputs("/ ",fp);
       fputs(mon,fp);
       fputs("/",fp);
       fputs(year,fp);
       fputs("\nTo,\nThe Principal,\n",fp);
       fputs(depart,fp);
       fputs(" Department,\nSVERI's COE, Pandharpur.\n\n\t\tSubject:To get bonafide... ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(name))>0)
     {  fputs("\n\nRespected Sir/Madam,\n\tI am, the undersigned,Mr.\\Ms.",fp);
     strupr(name);
       fputs(name,fp);
       fputs(" studying in ",fp);
       break;
     }
      printf("\n\n");
      while(strlen(gets(clas))>0)
     { strupr(clas);
       fputs(clas,fp);
       fputs(" Div-",fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(div))>0)
     { strupr(div);
       fputs(div,fp);

       fputs(" Roll No. ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(roll))>0)
     { fputs(roll,fp);
       fputs(". Sir, I required bonafide certificate. It is required for ",fp);
       break;
     }
     printf("\n\n");
     while( strlen(gets(reason))>0)
     { strupr(reason);

       fputs(reason,fp);
	fputs(".",fp);
	fputs("\n\t\tSo, kindly consider my application and grant permission for the same.\n",fp);
       fputs("\n\tThanking you.\n\n \n\t\t\t\t\t\t\t\t  Yours sincerely,\n",fp);
       fputs("\t\t\t\t\t\t\t\t\t(",fp);
       fputs(name,fp);
       fputs(")",fp);
       break;
     }
     j++;
     fclose(fp);
}

void uniform()
{    int gd=DETECT,gm;
     char name[30], dumy[1], roll[4], tdate[2], day[2], mon[2], year[4], depart[25], clas[10], div[1], sub[50], reason[80];
     struct date d;
     FILE *fp;
     clrscr();
     initgraph(&gd,&gm,"..\\bgi");
     printf("\t\t\t\tUniform Appilication\n\n");
     outtextxy(0,35,"Department");
     line(0,70,120,70);
     outtextxy(0,85,"Name");
     line(0,118,250,118);
     outtextxy(0,131,"Class");
     line(0,166,100,166);
     outtextxy(0,179,"Division");
     line(0,216,50,216);
     outtextxy(0,227,"Roll Number");
     line(0,262,50,262);
     outtextxy(0,275,"Reason");
     line(0,310,400,310);

     if(q!='y' || q!='Y')
      { fp=fopen("uniform.docx","w");
	fclose(fp);
      }
     if(i==0)
     fp=fopen("uniform.docx","a");
     else if(k==1)
     fp=fopen("uniform1.txt","a");
     else if(k==2)
     fp=fopen("uniform2.txt","a");
     else if(k==3)
     fp=fopen("uniform3.txt","a");
     if(fp==NULL)
     { printf("Cannot Open File");
       fclose(fp);
       exit(1);
     }

      getdate(&d);
      sprintf(day,"%d",d.da_day);
      sprintf(mon,"%d",d.da_mon);
      sprintf(year," %d",d.da_year);
      printf("\n");
     while(strlen(gets(dumy))>0)
     {  fputs(dumy,fp);
     }
      while(strlen(gets(depart))>0)
     { strupr(depart);
       fputs("\t\t\t\tUniform Application\n\n",fp);
       fputs("\t\t\t\t\t\t\t\t\tDate: ",fp);
       fputs(day,fp);
       fputs("/ ",fp);
       fputs(mon,fp);
       fputs("/",fp);
       fputs(year,fp);
       fputs("\nTo,\nThe HOD,\n",fp);
       fputs(depart,fp);
       fputs(" Department,\nSVERI's COE, Pandharpur.\n\n\t\tSubject:About incomplete uniform...",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(name))>0)
     {  fputs("\n\nRespected Sir/Madam,\n\tI am, the undersigned,Mr.\Ms.",fp);
     strupr(name);
       fputs(name,fp);
       fputs(" studying in ",fp);
       break;
     }
      printf("\n\n");
      while(strlen(gets(clas))>0)
     { strupr(clas);
       fputs(clas,fp);
       fputs(" Div-",fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(div))>0)
     { strupr(div);
       fputs(div,fp);
       fputs(" Roll No. ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(roll))>0)
     { fputs(roll,fp);
       fputs(". Sir, Today I could not attend in complete uniform as ",fp);
       break;
     }
     printf("\n\n");
     while( strlen(gets(reason))>0)
     { strupr(reason);

       fputs(reason,fp);
	fputs(".",fp);
	fputs("\n\t\tSo, kindly consider my application and grant permit me to attend lectures.\n",fp);
	fputs("\t\t I will precaution in future.\n",fp);
       fputs("\n\tThanking you.\n\n \n\t\t\t\t\t\t\t\t  Yours sincerely,\n",fp);
       fputs("\t\t\t\t\t\t\t(",fp);
       fputs(name,fp);
       fputs(")",fp);
       break;
     }
     k++;
     fclose(fp);
}


void inconve()
{    int gd=DETECT,gm,da;
     char hname[30], dumy[1], day[2], mon[2], year[4], sub[50], reason[80];
     struct date d;
     FILE *fp;
     clrscr();
     initgraph(&gd,&gm,"..\\bgi");
     printf("\t\t\t\tInconvenience Appilication\n");
     outtextxy(0,65,"Subject");
     line(0,100,220,100);
     outtextxy(0,115,"Hostel Name (e.g Boy's Hostel No.1)");
     line(0,147,250,147);
     outtextxy(0,162,"Reason");
     line(0,195,350,195);

     if(q!='y' || q!='Y')
      { fp=fopen("inconve.docx","w");
	fclose(fp);
      }
     if(l==0)
     fp=fopen("inconve.docx","a");
     else if(l==1)
     fp=fopen("inconve1.docx","a");
     else if(l==2)
     fp=fopen("inconve2.docx","a");
     else if(l==3)
     fp=fopen("inconve3.docx","a");
     if(fp==NULL)
     { printf("Cannot Open File");
       fclose(fp);
       exit(1);
     }

      getdate(&d);
      sprintf(day,"%d",d.da_day);
      sprintf(mon,"%d",d.da_mon);
      sprintf(year," %d",d.da_year);
      printf("  \n\n\n\n");
     while(strlen(gets(dumy))>0)
     {  fputs(dumy,fp);
     }

      while(strlen(gets(sub))>0)
     { strupr(sub);
       fputs("\t\t\t\tInconvenience Application\n\n",fp);
       fputs("\t\t\t\t\t\t\t\t\tDate: ",fp);
       fputs(day,fp);
       fputs("/ ",fp);
       fputs(mon,fp);
       fputs("/",fp);
       fputs(year,fp);
       fputs("\nTo,\nThe Chief Rector,\n",fp);
       fputs("SVERI's COE, Pandharpur\n\n\t\tSubject: ",fp);
       fputs(sub,fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(hname))>0)
     { strupr(hname);
       fputs("\n\nRespected Sir/Madam,\n\tI/We am/are, the undersigned are students living in ",fp);
       fputs(hname,fp);
       fputs(". Sir in these days ",fp);
       break;
     }
      printf("\n\n");
     while( strlen(gets(reason))>0)
     { strupr(reason);
       fputs(reason,fp);
       fputs(". So, kindly consider our application and make prevision of the same.\n",fp);
       fputs("\tThanking you.\n\n\n \t\t\t\t\t\t\t\t  Yours sincerely,\n",fp);
       fputs("\t\t\t\t\t\t\t",fp);
       fputs("The students of ",fp);
       fputs(hname,fp);
       fputs("\n\nStudents Name\t\t\tSign",fp);
       break;
     }
     l++;
     fclose(fp);
}


void document()
{    int gd=DETECT,gm;
     char name[30], dumy[1], roll[4], dname[22], day[2], mon[2], year[4], depart[25], clas[10], div[1], sub[50], reason[80];
     struct date d;
     FILE *fp;
     clrscr();
     initgraph(&gd,&gm,"..\\bgi");
     printf("\t\t\tAppilication To Get Original Document\n");
     outtextxy(0,65,"Department");
     line(0,100,120,100);
     outtextxy(0,115,"Subject");
     line(0,147,350,147);
     outtextxy(0,162,"Name");
     line(0,195,250,195);
     outtextxy(0,210,"Class");
     line(0,245,100,245);
     outtextxy(0,260,"Division");
     line(0,292,70,292);
     outtextxy(0,305,"Roll Number");
     line(0,338,70,338);
     outtextxy(0,352,"Name of Document");
     line(0,388,150,388);
     outtextxy(0,398,"Reason");
     line(0,437,400,437);

      if(q!='y' || q!='Y')
      { fp=fopen("document.docx","w");
	fclose(fp);
      }
     if(i==0)
     fp=fopen("document.docx","a");
     else if(i==1)
     fp=fopen("document1.docx","a");
     else if(i==2)
     fp=fopen("document2.docx","a");
     else if(i==3)
     fp=fopen("document3.docx","a");
     if(fp==NULL)
     { printf("Cannot Open File");
       fclose(fp);
       exit(1);
     }

      getdate(&d);
      sprintf(day,"%d",d.da_day);
      sprintf(mon,"%d",d.da_mon);
      sprintf(year," %d",d.da_year);
      printf("  \n\n\n\n");
     while(strlen(gets(dumy))>0)
     {  fputs(dumy,fp);
     }

      while(strlen(gets(depart))>0)
     { strupr(depart);
       fputs("\t\t\t\tApplication to Get Original Document\n\n",fp);
       fputs("\t\t\t\t\t\t\t\t\tDate: ",fp);
       fputs(day,fp);
       fputs("/ ",fp);
       fputs(mon,fp);
       fputs("/",fp);
       fputs(year,fp);
       fputs("\nTo,\nThe Registrar,\n",fp);
       fputs(depart,fp);
       fputs(" Department,\nSVERI's COE, Pandharpur\n\n\t\tSubject: ",fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(sub))>0)
     { strupr(sub);
       fputs(sub,fp);
       fputs("\n\nRespected Sir/Madam,\n\tI am, the undersigned,Mr.\\Ms.",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(name))>0)
     { strupr(name);
       fputs(name,fp);
       fputs(" studying in ",fp);
       break;
     }
      printf("\n\n");
      while(strlen(gets(clas))>0)
     { strupr(clas);
       fputs(clas,fp);
       fputs(" Div-",fp);
       break;
     }
     printf("\n\n");
      while(strlen(gets(div))>0)
     { strupr(div);
       fputs(div,fp);
       fputs(" Roll No. ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(roll))>0)
     { fputs(roll,fp);
       fputs(". Sir, I want original ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(dname))>0)
     { fputs(dname,fp);
       fputs(" . It is required for ",fp);
       break;
     }
     printf("\n\n");
     while(strlen(gets(reason))>0)
     { strupr(reason);
       fputs(reason,fp);
       fputs(". I will submit it back when my work is done.\n",fp);
       fputs("\tSo, kindly consider my application and grant permission for the same.\n",fp);
       fputs("\tThanking you.\n\n\n \t\t\t\t\t\t\t\t  Yours sincerely,\n",fp);
       fputs("\t\t\t\t\t\t\t\t(",fp);
       fputs(name,fp);
       fputs(")",fp);
       break;
     }
     m++;
     fclose(fp);
}


































































































































































































































































































































































































































































































































































































































