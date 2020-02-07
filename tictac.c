#include<stdio.h>
int k=0, end=1;
int count=0;
char a[9]={'1','2','3','4','5','6','7','8','9'};

void show()
{	printf("%c| %c| %c\n",a[0],a[1],a[2]);
	printf("-- --- --\n");
	printf("%c| %c| %c\n",a[3],a[4],a[5]);
	printf("-- --- --\n");
	printf("%c| %c| %c\n\n",a[6],a[7],a[8]);
}



int play()
{  char c;
printf("Enter the position\n");
scanf("%c",&c);
  int i;
  if(k==0)
  {
  	for(i=0;i<9;i++)
  	{
  		if(a[i]==c)
  		{
		  a[i]='x';
		  k=1;
	  }
	  
  }
}
  else
  {
  		for(i=0;i<9;i++)
  	{
  		if(a[i]==c)
  		{
		
  		a[i]='0';
         
	  k=0;
}
  }
}
count++;
}



int gameover()
{
if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
return 1;
else
	if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
return 1;
else
if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
return 1;
else
if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
return 1;
else
if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
return 1;
else
if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
return 1;
else
if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
return 1;
else
if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
return 1;
else
if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
return 0;
else
	if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
return 0;
else
if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
return 0;
else
if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
return 0;
else
if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
return 0;
else
if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
return 0;
else
if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
return 0;
else
if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
return 0;
else 
return 2;

}	
	
void final()
{
	if(count<18)
{

	int var;
	var=gameover();
	if(var==1){
	
	printf("player1 wins the game");
	end=0;}
	else
	if(var==0)
{
		printf("player2 wins the game");
		end=0;
	}

}
else
{
	printf("MATCH IS DRAW NONE OF THE PLAYER IS THE WINNER");
	end=0;
}
}



int main()
{

	printf("						 Tic Tac Toe Game \n\n");
	show();
	printf("Player1 is alotted 'x' and player2 is alotted '0' symbol to play the game \n\n");
	printf("All The Best,Start Game\n\n");
	while(end)
	{
	
	play();
	show();
	final();
}


     return 0;
	
}
