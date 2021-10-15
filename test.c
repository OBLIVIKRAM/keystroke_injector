#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void interpret_keycode(char*);
void write_string(char*);
void shift_plus_char(char);
void ctrl_plus_char(char);
void ctrl_plus_shift_plus_char(char);
void win_plus_char(char);
void enter();
void arrow_key(char);

FILE *fptr;

int main(int argc, char *argv[]){
	printf("VERIFYING YOUR INTERPRETER...\n");
	for(int i=0; i<3; i++){
		char filename[10];
		sprintf(filename,"test%d.txt",i);
		fptr = fopen(filename,"r");
		char *keycode;
		fgets(keycode,500,fptr);
		interpret_keycode(keycode);
	}
	return 0;
}

FILE *fptr;

void interpret_keycode(char* code) {
  /*YOUR CODE GOES HERE*/
}

void write_string(char* string_to_print) {
	printf("\%P\%%s\%P\% ",string_to_print);
}

void shift_plus_char(char letter) {
  printf("\%S\%%c\%S\% ", letter);
}

void ctrl_plus_char(char letter) {
	printf("\%C\%%c\%C\% ", letter);
}

void ctrl_plus_shift_plus_char(char letter) {
	printf("\%CS\%%c\%CS\% ", letter);
}

void win_plus_char(char letter) {
	printf("\%W\%%c\%W\% ", letter);
}
void enter() {
	char ch;
	//infinite loop
	while(1)
	{
		printf("Enter any character: ");
		//reads a single character
		ch=fgetc(stdin);
		
		if(ch==0x0A)// hex eq of ENTER KEY
		{
			printf("ENTER KEY is pressed.\n");
			break;
		}
		else
		{
			printf("%c is pressed.\n",ch);
		}
		ch=getchar();
	}
	return 0;

}
void arrow_key(char dir) {
	printf("\%A\%%c\%A\% ", dir);
}
