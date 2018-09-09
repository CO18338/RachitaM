#include <stdio.h>
int i = 1, f = 0,x=0;
char ca,ch,b;
void fifty (char a);
void correctAnswer(int amount, int questionAmt);
void incorrectAnswer(int amt);
void prompt(int x,char b);
void main ()
{
  printf ("\t\t*****Welcome to KAUN BANEGA CROREPATI*****\n");
  printf ("\nRULES OF THE GAME:\n");
  printf
    ("1. The game has a total 15 questions.\n2.Each question has four options. Out of the four options, only one is correct. \n3.Please choose one option while answering. \n4. You are given one lifeline i.e.50-50 which can be used only once in the game.\n5. A JACKPOT QUESTION for Rs 7 crore is the last question\n\n \tWISH YOU ALL THE BEST!\n");
    printf ("\tLet's start the game!\n");
    int amt = 0;
    switch (i)
    {
    case 1:
      printf ("Question for Rs 10000 is on your screen\n\n");
      printf
	("Q1. In which of the following sports, Decision Referral System is used?\nA.Hockey\nB.Tennis\nC.Chess\nD.Cricket\n ");
      b='D';
      prompt(f,b);
      scanf(" %c", &ch);
      if (ch == 'D'||ch=='d')
	 {
      i++;
	  amt = 10000;
	  correctAnswer(amt,10000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
    case 2:
      printf ("Question for Rs 20,000 is on your screen\n\n");
      printf ("Q2. Who was awarded Nobel prize for literature in 2017?\nA.Richard Thaler\nB.Kazuo Ishiguro\nC.Shobha Dey\nD.Dale Carnegie\n");
      b='B';
      prompt(f,b);
      scanf(" %c", &ch);
      if (ch == 'B'||ch=='b')
	{
      i++;
	  amt = amt + 20000;
	  correctAnswer(amt,20000);
      printf("**   DID YOU KNOW that Kazuo Ishiguro is a British Writer **\n ");
	}
    else
	{
	 incorrectAnswer(amt);
	  break;
	}
	 case 3:
      printf ("Question for Rs 50,000 is on your screen\n\n");
      printf ("Q3. Grand Slam is used in which of the following games?\nA.Cricket\nB.Hockey\nC.Lawn Tennis\nD.Football\n");
	b='C';
	prompt(f,b);
    scanf(" %c", &ch);
    if (ch == 'C'|| ch =='c')
	{
      i++;
	  amt = amt + 50000;
	  correctAnswer(amt,50000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
	case 4:
      printf ("Question for Rs 1,60,000 is on your screen\n\n");
      printf
	("Q4. Gammexane, D.D.T. and Bleaching powder are important compounds of?\nA.Iodine\nB.Chlorine\nC.Sulphur\nD.Nitrogen\n");
     b='B';
     prompt(f,b);
     scanf(" %c", &ch);
     if (ch == 'B'||ch=='b')
	{
      i++;
	  amt = amt + 160000;
	  correctAnswer(amt,160000);
      printf("**  DID YOU KNOW? : Gammexane-C6H6Cl6 (also called Lindane)\nBleaching Powder-CaOCl2\nDDT- C14H9Cl5  **");
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
   case 5:
      printf ("Question for Rs 3,20,000 is on your screen\n\n");
      printf
	("Q5. Which of the following monasteries is known as 'Galden Namgey Lhatse'?\nA.Hemis Monastery\nB.Tawang Monastery\nC.Bomdila Monastery\nD.Nadroling Monastery\n");
	 b='B';
	 prompt(f,b);
     scanf(" %c", &ch);
    if (ch == 'B'||ch=='b')
	{
      i++;
	  amt = amt + 320000;
	 correctAnswer(amt,320000);
     printf("** Tawang monastery is the largest of its kind in the country and is one of the largest monasteries in Asia.\nIt is also known by another Tibetan name, ‘Galden Namgey Lhatse’, which means ‘celestial paradise in a clear night’\n.  **");
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	 }
	case 6:
      printf ("Question for Rs 6,40,000 is on your screen\n\n");
      printf
	("Q6. Myanmar does not share its international boundary with__?\nA.Vietnam\nB.Laos\nC.Thailand\nD.India\n");
     b='A';
     prompt(f,b);

      scanf(" %c", &ch);
      if (ch == 'A'|| ch=='a')
	{
      i++;
	  amt = amt + 640000;
	  correctAnswer(amt,640000);
      printf
    ("**  DID YOU KNOW?: Myanmar is bound by China to the north and northeast, Laos to the east,\nThailand to the east and southeast,India to the northwest, Bangladesh to the west and the Andaman Sea to the south.  **\n");

	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
    case 7:
      printf ("Question for Rs 12,00,000 is on your screen\n\n");

      printf
	("Q7. Which of the following is NOT a petrochemical centre of India?\nA.Koyali\nB.Jamnagar\nC.Mangalore\nD.Rourkela\n");
     b='D';
     prompt(f,b);
      scanf(" %c", &ch);
      if (ch == 'D'||ch=='d')
	{
      i++;
	  amt = amt + 1200000;
	  correctAnswer(amt,1200000);
	  printf("**  DID YOU KNOW?: Rourkela is a textile center rather.  **\n");
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
case 8:
      printf ("\tQuestion for Rs 15,00,000 is on your screen\n\n");
      printf
	("Q8. Symantec is the maker of which among the following popular antivirus software?\nA.Norton\nB.BitDefender\nC.McAfee virus scan\nD.Avast\n");
	b='A';
	 prompt(f,b);

      scanf(" %c", &ch);
      if (ch == 'A'||ch=='a')
	{
      i++;
	  amt = amt + 1500000;
	 correctAnswer(amt,1500000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
	case 9:
      printf ("Question for Rs 25,00,000 is on your screen\n\n");
      printf
	("Q9. In the Windows XP, what does XP stands for?\nA.Extra Powerful\nB.Extended Platform\nC.Experience\nD.Experience Platform\n");
     b='C';
     prompt(f,b);

    scanf(" %c", &ch);
    if (ch == 'C'||ch=='c')
	{
      i++;
	  amt = amt + 2500000;
	  correctAnswer(amt,2500000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}

case 10:
      printf ("Question for Rs 50,00,000 is on your screen\n");
      printf
	("Q10.In context of the Indian awards and honors in sports, which among the following is given as Life Time achievement award?\nA.Dronacharya Award\nB.Khel Ratna\nC.Dhyan Chand Award\nD.Arjuna Award\n");
	b='C';
	prompt(f,b);

      scanf(" %c", &ch);
      if (ch == 'C'||ch=='c')
	{
	      i++;
	  amt = amt + 5000000;
	  correctAnswer(amt,5000000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
case 11:
      printf ("Question for Rs 75,00,000 is on your screen\n");
      printf
	("Q11. In context with Mobile telecommunication, what is the full form of CDMA?\nA.Code Division Multiple Access\nB.Chip Derived Multiple Access\nC.Carrier Device Multiple Access\nD.Cordless Device Multiple Access\n");
     b='A';
     prompt(f,b);
     scanf(" %c", &ch);
      if (ch == 'A'||ch=='a')
	{
      i++;
	  amt = amt + 7500000;
	  correctAnswer(amt,7500000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
case 12:
      printf ("Question for Rs 1 Crore is on your screen\n");
      printf
	("Q12. News websites deliver customized ‘feeds’ of content to their readers via RSS, which stands for ?\nA.Really Simple Syndication\nB.Rarely Sorted Syndication\nC.Real Social Syndication\nD.Registered Subscriber Syndication\n");
     b='A';
     prompt(f,b);
     scanf(" %c", &ch);
      if (ch == 'A'||ch=='a')
	 {
      i++;
	  amt = amt + 10000000;
	  correctAnswer(amt,10000000);
	 }
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
 case 13:
      printf ("Question for Rs 3 Crore is on your screen\n");
      printf
	("Q13. Which of the following device is a volatile storage? \nA.Hard Disk\nB.RAM\nC.Magnetic Tape\nD.Floppy Disk\n");
	 b='B';
	 prompt(f,b);
     scanf(" %c", &ch);
     if (ch == 'B'||ch=='b')
	{
      i++;
	  amt = amt + 30000000;
     correctAnswer(amt,30000000);
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
	case 14:
      printf ("Question for Rs 5 Crore is on your screen\n");
      printf
	("Q14. In computing, 1 nibble=_?\nA.1 bit\nB.8 bits\nC.4 bits\nD.4 Bytes\n\n");
      b='C';
      prompt(f,b);
      scanf(" %c", &ch);
      if (ch == 'C'||ch=='c')
	{
      i++;
	  amt = amt + 50000000;
	  correctAnswer(amt,50000000);
	  printf("**  DID YOU KNOW? In computing, a nibble (often nybble to simulate the spelling of byte) is a four-bit aggregation, or half an octet. \n As a nibble contains 4 bits, there are sixteen possible values, so a nibble corresponds to a single hexadecimal digit \n(thus, it is often referred to as a 'hex digit' or 'hexit'  **");
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
case 15:
    printf("\n***** YOU HAVE UNLOCKED JACKPOT QUESTION *****");
      printf (" JACKPOT Question for Rs 7 Crore is on your screen\n\n");
      printf
	("Q15. Who among the following are the Founders of Social Networking Site: Twitter ?\nA.Chris Hughes, Dustin Moskovitz, Eduardo Saverin, Mark Zuckerberg\nB.Larry Page, Sergey Brin\nC.Biz Stone, Evan Williams, Noah Glass, Jack Dorsey\nD.Jawed Karim, Chad Hurley, Steve Chen\n");
	 b='C';
	 prompt(f,b);
     scanf(" %c", &ch);
     if (ch == 'C'||ch=='c')
	{
      i++;
	  amt = amt + 70000000;
	  correctAnswer(amt, 70000000);
	  printf("\n**  DID YOU KNOW?: Facebook: Chris Hughes, Dustin Moskovitz, Eduardo Saverin, Mark Zuckerberg\nGoogle: Larry Page, Sergey Brin \nYoutube: Jawed Karim, Chad Hurley, Steve Chen  **");
	  printf("\nYOU HAVE WON!! CONGRATULATIONS!!!\n Thanks for playing!");
	}
      else
	{
	  incorrectAnswer(amt);
	  break;
	}
  }
}
void fifty (char a)
{
  printf ("You have opted for 50-50 and your new options are:\n");
  if (a == 'A')
    printf ("choose from A and D\n");
  else if (a == 'B')
    printf ("choose from B and D\n");
  else if (a == 'C')
    printf ("choose from C and A\n");
  else if (a == 'D')
    printf ("choose from B and D\n");
}
void prompt(int x,char b)
{  if(x==0)
  {
   printf(" \nYou can use your 50-50 lifeline if you don't know the answer, type 'Y' to use it else type 'N'\n");
   scanf (" %c", &ca);
           if (ca == 'Y'||ca=='y')
	          {
                 x=1;
                 f=1;
	             fifty (b);
        	}
   }
   else if(x!=0)
   printf ("\nYou have used up your 50-50 lifeline.\n");
   printf ("Enter your final choice.\n");
}
void correctAnswer(int amount, int questionAmt)
{
    printf ("\nCONGRATS! Correct answer, you have won Rs %d  and total sum won is Rs %d \n\n",questionAmt,amount);
}
void incorrectAnswer(int amount)
{
    printf ("Your answer is incorrect!\nYou get only Rs %d \n\n GAME OVER!!!",amount);
}

