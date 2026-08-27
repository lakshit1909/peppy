#include <stdio.h>
#include <string.h>

int main() {
	
	char p[100];
	int capital = 0;
	int small = 0;
	int number = 0;
	int special = 0;
	int common = 0;
	int score = 0;
	int types = 0;
	
	printf("Enter password:");
	scanf("%99s", p);
	
	if(strcmp(p, "123456") == 0 ||
	   strcmp(p, "123456789") == 0 ||
	   strcmp(p, "12345") == 0 ||
	   strcmp(p, "password") == 0 ||
	   strcmp(p, "secret") == 0 ||
	   strcmp(p, "admin") == 0 ||
	   strcmp(p, "iloveyou") == 0 ||
	   strcmp(p, "qwerty") == 0 ||
	   strcmp(p, "qwerty123") == 0 ||
	   strcmp(p, "asdfgh") == 0 ||
	   strcmp(p, "111111") == 0 ||
	   strcmp(p, "000000") == 0) {
		
		common = 1;
	}
	
	for(int i = 0; p[i] != '\0'; i++) {
		
		if(p[i] >= 'A' && p[i] <= 'Z')
			capital = 1;
			
		if(p[i] >= 'a' && p[i] <= 'z')
			small = 1;
			
		if(p[i] >= '0' && p[i] <= '9')
			number = 1;
			
		if(!((p[i] >= 'A' && p[i] <= 'Z') ||
		     (p[i] >= 'a' && p[i] <= 'z') ||
		     (p[i] >= '0' && p[i] <= '9')))
			special = 1;
	}
	
	if(common == 1)
		printf("\n-Password is commonly used, choose a different password");
	
	if(strlen(p) < 6)
		printf("\n-Password is short, use atleast 6 characters");
		
	if(capital == 0)
		printf("\n-Capital letter is not there, use atleast one capital letter");
		
	if(small == 0)
		printf("\n-Small letter is not there, use atleast one small letter");
		
	if(number == 0)
		printf("\n-Number is not there, use atleast one number");
		
	if(special == 0)
		printf("\n-Special character is not there, use atleast one special character");
	
	
	if(strlen(p) >= 20)
		score += 40;
	else if(strlen(p) >= 16)
		score += 40;
	else if(strlen(p) >= 12)
		score += 30;
	else if(strlen(p) >= 10)
		score += 25;
	else if(strlen(p) >= 6)
		score += 15;
	else
		score += 5;
	
	
	if(capital == 1)
		types++;
		
	if(small == 1)
		types++;
		
	if(number == 1)
		types++;
		
	if(special == 1)
		types++;
	
	score += types * 10;
	
	
	if(common == 0)
		score += 20;
	else
		score -= 20;
	
	
	if(score < 0)
		score = 0;
		
	if(score > 100)
		score = 100;
	
	
	if(strlen(p) >= 6 && capital == 1 && small == 1 && 
	   number == 1 && special == 1 && common == 0) {
	   
		printf("\nPassword accepted");
		
	} else {
		
		printf("\n\nPassword does not meet the requirements.");
		printf("\nUse a password like J@ngmo-o782");
	}
	
	
	printf("\n\nPassword Score: %d/100", score);
	
	
	if(score < 30)
		printf("\nPassword Rating: Very Weak");
		
	else if(score < 50)
		printf("\nPassword Rating: Weak");
		
	else if(score < 70)
		printf("\nPassword Rating: Moderate");
		
	else if(score < 85)
		printf("\nPassword Rating: Strong");
		
	else
		printf("\nPassword Rating: Very Strong");
	
	
	return 0;
}
