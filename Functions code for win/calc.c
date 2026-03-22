#include<stdio.h>
#include<math.h>
float arithmetic (float a, float b);
void num_analysis(int a);
void equation( float a, float b, float c);
int main(){
	float a,b,c;
	int n ;
	while(1){
	printf("Enter your choice\n");
	printf("1. Arithmetic operations\n2. Number analysis\n3. Solving equations\n4. Exit\n");
	scanf(" %d", &n);
	switch(n){
		case 1: {
			printf("Enter two numbers\n");
			scanf(" %f %f", &a, &b);
			printf("result = %.2f\n",arithmetic(a,b));
			break;
		}
		case 2: {
		num_analysis(0);
			break;
		}
		case 3: {
			printf("Enter coefficient of x^2 (along with sign): \n");
			scanf(" %f", &a);
			printf("Enter coefficient of x (along with sign): \n");
			scanf(" %f", &b);
			printf("Enter constant: \n");
			scanf(" %f", &c);
			printf("your equation is %.2fx^2 %.2fx %.2f\n", a,b,c);
			equation(a,b,c);
			break;
		}
		case 4: {
			printf("Exiting\n");
			return 0;
		}
		default:
			printf("INVALID INPUT\n");
	}

}
}

//Arithmetic function
float arithmetic(float a, float b){
	int  c;
	printf("Choose operation to be performed\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
	scanf(" %d", &c);
	if (c ==1){
		return (a+b);
	}
	if (c==2){
		return (a-b);
	}
	if (c==3){
		return (a*b);
	}
	if (c==4){
		if(b==0){
			printf("undefined\nPlease enter valid number for denominator.\n");
			return 0;
			}
		return (a/b);
		}
	return 0;
}

//Number analysis

void num_analysis(int a){
	int i, flag =1;
	printf("Enter the desired number.\n");
	scanf(" %d", &a);
	if(a%2==0){
		printf("EVEN\n");
		}
	else {
	printf("ODD\n");
		}
	if ( a<=1){
	printf("NOT A PRIME NUMBER\n");
		}
else{
	for(i=2; i<=a/2; i++){
					if(a%i==0){
						flag=0;
							break;
							}
					}
	if(flag){
		printf("PRIME NUMBER\n");
			}
	else{
		printf("NOT A PRIME NUMBER\n");
			}
}
}
void equation( float a, float b, float c){
float d, real , imag, r1, r2;
	if (a==0){
		printf("Not a quadratic equation\n");
		return ;
		}
d = (b*b)- 4*a*c;
if(d>=0){
	r1 = (-b + sqrt(d))/(2.0*a);
	r2 = (-b - sqrt(d))/(2.0*a);
 	printf("Real and distinct roots:\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
}
else{
real = -b/(2.0 *a);
imag = sqrt(-d)/(2.0*a);
printf("Roots are imaginary:\n");
printf("Root 1: %.2f + %.2fi\n", real , imag);
printf("Root 2: %.2f - %.2fi\n", real , imag);

}
}
