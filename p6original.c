 #include<stdio.h>

 void input_two_strings(char *a ,char *b)
 {
   printf("ënter the word");
   scanf("%s",a);

   printf("enter the word");
   scanf("%s",b);
 }
 int cmp(char *a,char *b)
 {
   int i=0,result;
   while(a[i] !='\0' && b[i] !='\0')
   {
     if(a[i]>b[i])
     {
       result=-1;
       break;
     }
     else if(b[i]>a[i])
     {
       result =1;
       break;
      
     }
     else
     {
       i++;
     }

   }
   if(a[i]== '\0')
   {
     result =1;
   
   }
   else if(b[i]== '\0')
   {
     result = -1;
   }
   if(a[i]=='\0'&&b[i]=='\0')
   {
     result=0;

   }
   return result;

 }
 void output(char *a,char *b,int result)
 {
   if(result==1)
   {
     printf("%s is greater than %s \n",a,b);
     
     }
   else if(result==1)
   {
     printf("%s is greater than %s\n",b,a);
   }
   else{
     printf("%s is equal to %s\n",a,b);
   }

 }
   int main()
   {
     char a[20], b[20];
     int result;
     input_two_strings(a,b);
     result=cmp(a,b);
     output(a,b,result);
     return 0;
   }


 
 

