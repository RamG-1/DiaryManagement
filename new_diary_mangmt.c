#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
#include<string.h>
int addrecord();
int viewrecord();
int exit1();


int main()
{

    int ch;
    printf("\n\n\t-----------------------------------\n");
    printf("\t :PERSONAL DIARY MANAGEMENT SYSTEM:\n");
    printf("\t-----------------------------------");
    while(1)
    {
        printf("\n\t\n\t:MAIN MENU:");
        printf("\n\n\t[1]. ADD RECORD\t");
        printf("\n\t[2]. VIEW RECORD\t");
        printf("\n\t[3]. EXIT\t\t");

        printf("\n\n\tENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            addrecord();
            break;
        case 2:
            viewrecord();
            break;
        case 3:
        	exit1();
            printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE ");
            getch();
            exit(0);
        default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS ANY KEY TO TRY AGAIN");
            getch();
            break;
        }
        system("cls");
    }
    return 0;
}
int addrecord( )
{
    //Time
    system("cls");
	fflush(stdin);
	printf("Write Function Is Activated\n\n\n");
	printf("\t\(\\\n");
	printf("\t\\'\\\n");
	printf("\t \\'\\     __________ \n");
	printf("\t / '|   \()_________)\n");
	printf("\t \\ '/    \\ ~~~~~~~~ \\\n");
	printf("\t   \\       \\ ~~~~~~   \\\n");	
	printf("\t   ==).      \\__________\\\n");	
	printf("\t \(__)       \()__________)\n\n\n");		
	time_t rawtime;
	struct tm*timeinfo;
	time(&rawtime);
	timeinfo=localtime (&rawtime);
	printf("\nLocal Date And Time: %s\n",asctime(timeinfo));
	fflush(stdin); //clear the buffered data
	
//Output
	FILE *output;
	char diary[12]; //diary is diary name 
	char *text[500];
	printf("Today\'s Date [dd-mm-yyyy]: ");
	gets(diary);
	output=fopen(diary,"a");	
	fflush(stdin);
	printf("\nToday\'s Content : ");
	scanf("%[^\n]",text);
	printf("\nWritten Content : %s\n",text);	
	fprintf(output,"%sContent : %s\n\n",asctime(timeinfo),text);
	fclose(output);
	system("pause");
	
//Back to Main Menu
	printf("\nWritting Saved, Returning To The Main Menu\n\n");
	system("pause");
	system("cls");
	main();
	return 0;
}
int viewrecord( )
{

    system("cls");
    fflush(stdin);
    printf("\n\t\t\t_________________\n");
    printf("\t\t\t:  VIEWING MENU :");
    printf("\n\t\t\t_________________\n\n");
	printf("Read Function Is Activated\n\n\n");
	printf("                 .--.   _\n");
	printf("             .---|__| .\(\(\\-.\n");
	printf("          .--|===|--|/    , \\\n");
	printf("          |  |===|  |\\      y\n");			
	printf("          |  |   |  | `.__,'\n");
	printf("          |  |   |  | /  \\\\\\\n");
	printf("          |  |   |  |/|  | \\`----.\n");
	printf("          |  |   |  ||\\  \\  |___.'_\n");
	printf("         _|  |   |__||,\\  \\-+-._.' )_\n");				
	printf("        / |  |===|--|\\  \\  \\      /  \\\n");
	printf("       /  `--^---'--' `--`-'---^-'    \\\n");	
	printf("      '================================`\n\n");
		//Input
	FILE *input;
	char diary[12]; //diary is diary name 
	char text[500];
	char text2[500];
	printf("Diary's Date [dd-mm-yyyy]: ");
	gets(diary);
	fflush(stdin);
	input = fopen(diary,"r");
	fflush(stdin);
	
	//Loop For Reading different rows	
	while(fgets(text,500,input)!=NULL){
		scanf(text,"%s",text2);
		printf("%s",text);
	}
	fclose(input);
	system("pause");
	int i;
	printf("Continue Reading ?\n\n1 :Yes\n2: No\nChoice : ");
	scanf("%d",&i);
	switch (i){
	
		case 1 :{
		viewrecord();
		break;}
	
		case 2 :{
		printf("Okay, Returning To The Main Menu\n");
		system("pause");
		system("cls");
		main();
		break;
		}
		
		default :{
		printf("Error Selection, Lets Go To The Main Menu\n");
		system("pause");
		main();
		break;
		}
	}
		
}
// Exit Function
int exit1(){
	fflush(stdin);
	system("cls");
	printf("\n\nExit Function Is Activated\n\n\n");
	printf("              ________\n");
	printf("             / ______ \\\n");
	printf("             || _  _ ||\n");
	printf("             ||| || |||\n");
	printf("             |||_||_|||\n");
	printf("             || _  _o||\n");
	printf("             ||| || |||\n");
	printf("             |||_||_|||      ^~^  ,\n");
	printf("             ||______||     \('Y') )\n");
	printf("            /__________\\    /   \\/\n");
	printf("    ________|__________|__ \(\\|||/) _________\n");
	printf("           /____________\\\n");
	printf("           |____________|\n\n");
	printf("The System Will Be Closing Now\n\n\n");
	printf("Made by:-\n");	
	printf("13 E&CS Ram Gupta\n");
	printf("14 E&CS Siddharth Gupta\n");
	printf("15 E&CS Vijay Gupta\n");
	printf("16 E&CS Piyush Jain\n");
	system("exit");
}
