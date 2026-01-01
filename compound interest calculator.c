#include<stdio.h>
#include<math.h>
int main() {
     float principal;
     float rate_of_interest;
     int no_of_years;
     int no_of_times_compound;
     float total;

     printf("Compound Interest Calculator");

     printf("Enter the principal (p): ");
     scanf("%f",&principal);

     printf("Enter the interest rate % (r): ");
     scanf("%f",&rate_of_interest);
     rate_of_interest = rate_of_interest / 100;

     printf("Enter the no of years (t): ");
     scanf("%d",&no_of_years);

     printf("Enter the no of times compound per year(n): ");
     scanf("%d",&no_of_times_compound);



     total=principal *pow(1+rate_of_interest/no_of_times_compound,no_of_times_compound*no_of_years);

     printf("After %d years, the total will be %.2f",no_of_years,total);
}