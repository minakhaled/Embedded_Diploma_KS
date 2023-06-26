/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: mina
 */


#include <stdio.h>

void printsentence(){
	char sentence[500];
    fgets(sentence, 500, stdin);
	printf("Your sentence: %s", sentence);
}

void printint(){
	int number;
	printf("Enter an integer:");
	fflush(stdout);
    scanf("%d",&number);
	printf("You entered: %d", number);
}

void addtwoint(){
	int a,b;
	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Sum:");
	printf("%d",a+b);
}

void addtwofloat(){
	float a,b;
	printf("Enter two numbers:");
	fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("Product:");
	printf("%f",a*b);

}

void asciifinder(){
	char a;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c is %d:",a,a);


}

void swapper(){
	float a,b;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);

	a*=b;
	b=a/b;
	a/=b;

	printf("After swapping, value of a = %f \n",a);
	printf("After swapping, value of b = %f \n",b);
}

/*-----------------Homework2-------------------*/

void oddOrEven(){
	int a;
	printf("Enter an integer you want to check:");
	fflush(stdout);
	scanf("%d",&a);
	printf("%d is %s",a,(a%2)?"odd":"even");

}

void vowelOrConsonant(){

	char c;
	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&c);
	switch(c)
	{
	case('a'):
	case('A'):
	case('e'):
	case('E'):
	case('i'):
	case('I'):
	case('o'):
	case('O'):
	case('u'):
	case('U'):
		printf("%c is a vowel.",c);
		break;
	default:
		printf("%c is a consonant.",c);
		break;
	}
}

void largest(){
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a<b){
		printf("Largest Number = %f",(b<c)?c:b);
	}
	else{
		printf("Largest Number = %f",(a<c)?c:a);
	}

}

void positive(){
	float number;
	printf("Enter a Number:");
	fflush(stdout);
	scanf("%f",&number);

	if(number){
		printf("%f is %s",number,(number<0)?"negative":"positive");
	}
	else{
		printf("you entered zero");
	}

}

void specialchar(){
	char c;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&c);

	if((c <65 || c>122) || (c<97 && c>91)){
		printf("%c is not an alphabet",c);
	}
	else{
		printf("%c is an alphabet",c);
	}
}

void sum()
{
	int a;
	int sum = 0;
	int c;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&a);
	for(c=0; a>c;c++){
		sum+=c+1;
	}
	printf("Sum = %d",sum);
}


void factorial(){
	int a;
	int sum = 1;
	int c;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&a);
	if(a < 0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else{
		for(c=1;c<a+1;c++){
			sum*=c;
		}
		printf("Factorial = %d",sum);
	}

}

void calculator(){
	float a,b;
	char operand;
	printf("Enter an operand:");
	fflush(stdout);
	scanf("%c",&operand);
	printf("Enter two operands:");
	fflush(stdout);
	scanf("%f %f",&a,&b);

	switch(operand){
	case('+'):
		printf("%f %c %f = %f",a,operand,b,a+b);
		break;
	case('-'):
		printf("%f %c %f = %f",a,operand,b,a-b);
		break;
	case('*'):
		printf("%f %c %f = %f",a,operand,b,a*b);
		break;
	case('/'):
		printf("%f %c %f = %f",a,operand,b,a/b);
		break;
	default:
		printf("input error");

	}


}


int main(){
    calculator();
    return 0;
}
