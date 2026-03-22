#include<stdio.h>
int main(){
	int c; //choice
	int b = 80; //battery
	float od = 120.00; //obstacle distance
	int l = 0; //-1 left, 0 center, 1right
	int mode = 0; //0 manual, 1 automatic
	int em = 0; //emergency
	int LM =0;//left motor
	int RM =0;//right motor

	int i = 0;
	float sum;
 	int N;

	char ch[30];
	char dir;
	char com[30];
	int y;
	int k;
	int pow;
	int sen;
	float avg;
char o; //case 2 manual update
	while(1){
		printf("-------------------------------------------Enter choice--------------------------------------------\n");
		printf("\t\t\t\t\t\tMenu:\n\t\t\t\t\t\t1. View state\n\t\t\t\t\t\t2. Update state\n\t\t\t\t\t\t3. Toggle emergency stop\n\t\t\t\t\t\t4. Manual command\n\t\t\t\t\t\t5. Autonomous cycle\n\t\t\t\t\t\t6. Exit\n");
		scanf("%d",&c);
		switch(c){
			case 1:
			{
				printf("Battery: %d\n", b);

				printf("Obstacle distance: %.2f\n", od);

				if (l==-1)printf("Line position: Left\n");

				else if (l==0)printf("Line position: Center\n");

				else if (l==1)printf("Line position: Right\n");

				if(mode==0)printf("mode:manual\n");

				else printf("mode:automatic\n");

				if(em) printf("emergency stop: ON\n");

				else printf("emergency stop: OFF\n");

				printf("left motor: %d\n", LM);

				printf("right motor: %d\n", RM);

				break;
			}

			case 2:

				{
					if (em) 
						{
							printf("Emergency active, turn it off before starting\n");
							break;
						}
					else
						 {
printf("Press the desired option ( Example: a for Battery )\n");
printf("a. Change battery level\nb. Change obstacle distance\nc. Change line position\nd. Change mode\n");
scanf(" %c",&o); 
switch(o){
						case 'a': {printf("Enter battery level:\n");
						scanf("%d", &b);

						//printf("Enter obstacle distance:\n");
						//scanf("%d", &od);
break;}

						case 'b': {printf("Enter window size: ");
    						scanf("%d", &N);

						int arr[N];
						i=0;
						sum=0;
						getchar();

   				 		while (1)
   							 {	
        						printf("\nEnter sensor value (or S to stop): ");
							fgets(ch,sizeof(ch),stdin);
							if(ch[0] == 'S' || ch[0] == 's')
   											 {
        											printf("Stopping moving average input\n");
        											break;
   											 }
							sen=0;
							y=0;
							while(ch[y] != '\0' && ch[y] != '\n')
													{
       			 											sen = sen * 10 + (ch[y++] - '0');
   				 									}
    							y++;
        						if (i < N)
       				 				{
           								arr[i] = sen;
            								sum += sen;
							avg = sum / ( i + 1 );

            								printf ("Moving average = %.2f\n", avg);
        							}
        						else
        							{
            								sum -= arr[i % N];
            								arr[i % N] = sen;
            								sum += sen;
							avg = sum / N;

            								printf("Moving average = %.2f\n", avg);
        							}
							od = ( avg );
									
        						i++;
    						}
				printf("Obstacle distance = %.2f\n",  od);
break;}

				case 'c':
				{printf("Enter line position\n\n(-1 Left, 0 Center, 1 Right):\n");
				scanf("%d", &l);

				if((l != 1) && (l != -1) && (l !=0))
										{
											printf("Invalid input");
										}
break;
}
				case 'd': {printf("Enter mode ( 0 manual, 1 Automatic):\n");
				scanf("%d", &mode); }
break;
}
				break;
}
}
		case 3:

			{
				em = !em;
if(em){
				printf("Emergency stop ON!\nAll motors are stopped!\n");
}
else { printf("Emergency stop OFF!\nAll motors are working!\n");}
				break;
			}

		case 4:

			{ 
				char cmd;
				int pow;
				if(mode!=0)
						{
							printf("Robot not in manual mode\n");
							break;
						}

				if (em)
					{
						printf("Emergency active\n");
						break;
					}

				printf("Enter command and power (F 50): ");
				getchar();
				fgets(com,sizeof(com),stdin);
				dir=com[0];
				pow=0;
				k=2;
				while(com[k] != '\0' && com[k] != '\n'){
       			 	pow = pow * 10 + (com[k++] - '0');
   				 }
    				k++;
			if((dir != 'S' ) && (dir != 'F') && (dir != 'B') && (dir != 'L') && (dir != 'R')){
				printf("Invalid input please write in correct format\n");
				break;
}
			if(pow <- 100){
				pow =- 100;}
			else if(pow > 100){
				pow = 100;
}
			switch(com[0])
{
				case 'F':
					LM=pow;
					RM=pow;
					printf("Move forward with power %d\n", pow);
					break;
				case 'B':
					LM=-pow;
					RM=-pow;
					printf("Move backward with power %d\n", pow);
					break;
				case 'L':
					LM=-pow;
					RM=pow;
					printf("Turn left with power %d\n", pow);
					break;
				case 'R':
					LM=pow;
					RM=-pow;
					printf("Turn right with power %d\n",pow);
					break;
				case 'S':
					LM=0;
					RM=0;
					printf("Robot stopped\n");
					break;
}
			printf("Values of motors:\nLeft motor: %d\nRight motor: %d\n",LM,RM);
			break;
}
		case 5:

			{int pow = (int)od;
			if(em){
			LM=0;
			RM=0;

			printf("Emergency activated. Robot stopped.\n");
			}

			else if(od<15){
			LM=0;
			RM=0;

			printf("Obstacle too close. Stopping robot.\n");
			}

			else if(b<15){
			LM=0;
			RM=0;

			printf("Low battery, please recharge before use.\n");
			}

			else if (mode==1){

			if(l==-1){
			LM=-pow;
			RM=pow;

			printf("Line position = Left\n");
			printf("Turning left to follow line.\n");
			}

			else if (l==1){
			LM=pow;
			RM=-pow;

			printf("Line position = Right\n");
			printf("Turning right to follow line.\n");

			}

			else if (l==0){
			LM=pow;
			RM=pow;

			printf("Line position = Center\n");
			printf("Going in the same direction.\n");

			}
			}
			else{

			printf("Robot in manual mode\n");

			}
break;
		}
		case 6:

			return 0;

		default:

			printf("Invalid choice entered\n");
}
}
return 0;
}