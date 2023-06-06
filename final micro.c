#include<stdio.h>
#include<math.h>
#define SIZE 15

int ind()
{
		  int i,j,notes;
		  float amount;
        // currency denominations
        float denominations[SIZE] = {2000,500,200,100,50,20,10,5,2,1};

        printf("Enter amount in indian RS :-  ");
        scanf("%f", &amount);
        printf("\n");

        printf(" 0 for 2000 rupees\n");
        printf(" 1 for  500 rupees\n");
        printf(" 2 for  200 rupees\n");
        printf(" 3 for  100 rupees\n");
        printf(" 4 for   50 rupees\n");
        printf(" 5 for   20 rupees\n");
        printf(" 6 for   10 rupees\n");
        printf(" 7 for    5 rupees\n");
        printf(" 8 for    2 rupees\n");
        printf(" 9 for    1 rupees\n");


          printf("enter the index no:-");
          scanf("%d",&i);
          while(amount>0)
          {
              notes = amount / denominations[i];
              if (notes)
              {
                  amount = fmod(amount,denominations[i]); // remaining money
						if(notes>0)
						{
                  printf("%d * %.2f = %.2f \n", notes, denominations[i],
                      notes * denominations[i]);
						}
					}
          i++;
          }

        return 0;
}



 int us()
{
         int i,j,notes;
         float amount;
         // currency denominations
         float denominations[SIZE] = {100,50,20,10,5,1,0.25,0.10,0.05,0.01};

         printf("Enter amount in indian RS :-  ");
         scanf("%d", &j);

         amount=j*0.012;
         printf("the amount in USD is :- $%f",amount);
         printf("\n");

         printf(" 0 for  100 usd\n");
         printf(" 1 for   50 usd\n");
         printf(" 2 for   20 usd\n");
         printf(" 3 for   10 usd\n");
         printf(" 4 for    5 usd\n");
         printf(" 5 for    1 usd\n");
         printf(" 6 for 0.25 usd\n");
         printf(" 7 for 0.10 usd\n");
         printf(" 8 for 0.05 usd\n");
         printf(" 9 for 0.01 usd\n");

         printf("enter the index no:-");
         scanf("%d",&i);
         while(amount>0)
         {
             notes = amount / denominations[i];

             if (notes)
             {
                 amount = fmod(amount,denominations[i]); // remaining money
                 if(notes>0)
						{                                                                  
                 printf("%d * %.2f = %.2f \n", notes, denominations[i],
                     notes * denominations[i]);
						}
             }
        i++;
         }

        return 0;
  }



 int euro()
 {
         int i,j,notes;
         float amount;
         // currency denominations
         float denominations[SIZE] = {500,200,100,50,20,10,5,2,1,0.50,0.20,0.10,0.05,0.02,0.01};

         printf("Enter amount in indian RS :-  ");
         scanf("%d", &j);

         amount=j*0.011;
         printf("the amount in EURO is :- €%f",amount);
         printf("\n");

         printf(" 0 for  500 euro\n");
         printf(" 1 for  200 euro\n");
         printf(" 2 for  100 euro\n");
         printf(" 3 for   50 euro\n");
         printf(" 4 for   20 euro\n");
         printf(" 5 for   10 euro\n");
         printf(" 6 for    5 euro\n");
         printf(" 7 for    2 euro\n");
         printf(" 8 for    1 euro\n");
         printf(" 9 for 0.50 euro\n");
         printf("10 for 0.20 euro\n");
         printf("11 for 0.10 euro\n");
         printf("12 for 0.05 euro\n");
         printf("13 for 0.02 euro\n");
         printf("14 for 0.01 euro\n");
         printf("enter the index no:-");
         scanf("%d",&i);
         while(amount>0)
         {
             notes = amount / denominations[i];

             if (notes)
             {
                 amount = fmod(amount,denominations[i]); // remaining money
						if(notes>0)
						{
                 printf("%d * %.2f = %.2f \n", notes, denominations[i],
                     notes * denominations[i]);
    					}
             }
        i++;
         }

 return 0;

 }



 int pound()
 {
   int i,j,notes;
   float amount;
          // currency denominations
          float denominations[SIZE] = {100,50,20,10,5,1,0.50,0.20,0.10,0.05,0.02,0.01};

          printf("Enter amount in indian RS :-  ");
          scanf("%d", &j);

          amount=j*0.0099;
          printf("the amount in POUND is :- £%f",amount);
          printf("\n");

          printf(" 0 for  100 pound\n");
          printf(" 1 for   50 pound\n");
          printf(" 2 for   20 pound\n");
          printf(" 3 for   10 pound\n");
          printf(" 4 for    5 pound\n");
          printf(" 5 for    1 pound\n");
          printf(" 6 for 0.50 pound\n");
          printf(" 7 for 0.20 pound\n");
          printf(" 8 for 0.10 pound\n");
          printf(" 9 for 0.05 pound\n");
          printf("10 for 0.02 pound\n");
          printf("11 for 0.01 pound\n");


          printf("enter the index no:-");
          scanf("%d",&i);
          while(amount>0)
         {
              notes = amount / denominations[i];

              if (notes)
              {
                  amount = fmod(amount,denominations[i]); // remaining money
						if(notes>0)
						{
                  printf("%d * %.2f = %.2f \n", notes, denominations[i],
                      notes * denominations[i]);
						}
              }
          i++;
          }

          return 0;
 }



 int yuan()
 {
    int i,j,notes;
    float amount;
           // currency denominations
           float denominations[SIZE] = {100,50,20,10,5,1,0.50,0.10};

           printf("Enter amount in indian RS :-  ");
           scanf("%d", &j);

           amount=j*0.083;
           printf("the amount in YUAN is :- ¥%f",amount);
        printf("\n");

          printf(" 0 for  100 yuan\n");
          printf(" 1 for   50 yuan\n");
          printf(" 2 for   20 yuan\n");
          printf(" 3 for   10 yuan\n");
          printf(" 4 for    5 yuan\n");
          printf(" 5 for    1 yuan\n");
          printf(" 6 for 0.50 yuan\n");
          printf(" 7 for 0.10 yuan\n");

          printf("enter the index no:-");
          scanf("%d",&i);
          while(amount>0)
         {
               notes = amount / denominations[i];

               if (notes)
              {
                   amount = fmod(amount,denominations[i]); // remaining money
							if(notes>0)
							{
                   printf("%d * %.2f = %.2f \n", notes, denominations[i],
                       notes * denominations[i]);
							}
               }
          i++;
           }

           return 0;

 }


 int main()
 {
         int money;

         printf("Foreign Exchange Company\n");

         printf("1 for indian rupees(INR)\n");
         printf("2 for U.S.A dollar(USD)\n");
         printf("3 for EURO(EUR)\n");
         printf("4 for POUND sterling(GBP)\n");
         printf("5 for CHINESE YUAN(CNY)\n");
         printf("enter the currency no as given:-  ");
         scanf("%d",&money);

         switch(money)
         {
         case 1:ind();
                 break;
         case 2:us();
                 break;
         case 3:euro();
                 break;
         case 4:pound();
                 break;
         case 5:yuan();
                 break;
         default : printf("The Number You have choose is not valid\nchoose number as given above\n");
         }
 return 0;
 }
                                                                                                                                            