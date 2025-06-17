 #include<stdio.h>
int main()
{
    int id,pid1,pid2,pid3;
    char pname1[100],pname2[100],pname3[100], cname[100],cmob[100];
    int pprice1,pprice2,pprice3;
    int pqty1,pqty2,pqty3;
    float price,total,discount,disAmount,payAmt;

    printf("enter customer name:");
    scanf("%s",&cname);
    printf("enter mobile no");
    scanf("%d",&cmob);

printf("enter product 1 details :");
pid1=id++;
printf("\nname :");
scanf("%s",&pname1);
printf("pprice:");
scanf("%d",&pprice1);
printf("qty:");
scanf("%d",&pqty1);

printf("enter product 2 details :");
pid2=id++;
printf("\nname :");
scanf("%s",&pname2);
printf("pprice:");
scanf("%d",&pprice2);
printf("qty:");
scanf("%d",&pqty2);



printf("enter product 3 details :");
pid3=id++;
printf("\nname :");
scanf("%s",&pname3);
printf("pprice:");
scanf("%d",&pprice3);
printf("qty:");
scanf("%d",&pqty3);

total=(pprice1*pqty1)+(pprice2*pqty2)+(pprice3*pqty3);

if(total>10000)
discount=10;
else if(total>8000)
discount=7;
else if(total>5000)
discount=3;
else
discount=0;

disAmount=(total*discount)/100;
payAmt=total-disAmount;

printf("\ncustomer name :%s",cname);
printf("\nMobile number :%s",cmob);
printf("\n--------------------------------------------------");
printf("\n|  ID  |    NAME    |  PRICE  |   QTY   |   TOTAL  |");
printf("\n--------------------------------------------------");
printf("\n|%6d|%12s|%9f|%9d|%10f|",pid1,pname1,pprice1,pqty1,(pprice1*pqty1));
printf("\n--------------------------------------------------");
printf("\n|%6d|%12s|%9f|%9d|%10f|",pid2,pname2,pprice2,pqty2,(pprice2*pqty2));
printf("\n--------------------------------------------------");
printf("\n|%6d|%12s|%9f|%9d|%10f|",pid3,pname3,pprice3,pqty3,(pprice3*pqty3));
printf("\n--------------------------------------------------");
printf("\n\t\t\t\ttotal              :%.2f",total);
printf("\n\t\t\t\tdiscount (%%)      :f",discount);
printf("\n\t\t\t\t\tdiscount amount  :%.2f",disAmount);
printf("\n\t\t\t\t\tpay amount       :%2f",payAmt);
return 0;

}
