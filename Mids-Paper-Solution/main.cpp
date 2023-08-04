//Note: I Wrote everything in rush, professor was explaining and I was writing down everything in Pc. So you might face some error, you can resolve them
//on your own, thank you :)

#include<iostream>
using namespace std;

//section 2, quesiton no 1
//int main(){
//    int a =10, b=5;
//    int c = a+b++;      it prints 15. It will print 16 in next execution beacause 1 is already incrimented
//    cout<<c<<endl; 
//}
//question no 2
// int main(){
//     for(int i =3; i <= 30; i*=3){
//         cout<<i<<"\t";               //it will start from 3 and go upto
                                        //it will keep multiplying 3
//     }
    
// }

// question no 3
// int main(){
//     int a = 2, b =4, c=6;
//     if ( a==2 && (b == 4 || c ==7)){
//         cout<<"True";
//     }                  //it will check the condition
//     else{
//         cout<<"False";
//     }
// }

//qesution no 04

// int GetNext(int n){
//     return(n-2);     It will subtract minus 2 from the integer and go again in loop
// }
// int main()
// {
//     int n =10;           
//     do{
//         cout<<n<<"\t";   it will print 10 when we are here in this line
//         n = GetNext(n);  then it will go to the funtion called "GetNext"
//     } while(n>=0);       it will run upto 0
    
// }

//question no 05
// int main(){
//     int n = 15;
//     while (n%3==0 && n>0){   it will check wether the integer is divisible by 3 or not.
//         cout<<n<<"\t";       it will print
//         n-=3;                then it will minus three from the result and go in the loop again
//     }    
// }

// question no 06
// int main ()
// {
//     int n = 20;
//     if ( n==20 &&  n++ == 20){   it will check the condition, and because the conditon is true
//         cout<<"true";            it will print true for sure
//     }
// }

//question no 07
// int main()
// {
//     char option = 'a';
//     switch (option)
//     {
//         case 'A':
//         case 'B':
//         case 'C':
//          cout<<"A or B or C";    
//          break;
//          default:
//          cout<<"None of them";
//     }
// }

//quesiton no 06
// int main(){
// int units = 230;
// int unitPrice = 0;
// int billAmount = 0;

// if(units>=200){
//     unitPrice = 20;
//     billAmount += ( units -200)*unitPrice;
//     units =200;
// }
// if(units>=100){
//     unitPrice = 15;
//     billAmount+=(units-100)*unitPrice;
//     units =100;
// }
// if(units>=50){
//     unitPrice = 10;
//     billAmount +=(units-50)*unitPrice;
//     units = 50;
// }
// unitPrice = 5;
// billAmount += units*unitPrice;

//This task was additional given by Sir.
double dueAmount;
dueAmount = billAmount * 0.10;
cout<<"Your current bill Amount is: "<<billAmount<<endl;
cout<<"Your due Amount is: "<<dueAmount<<endl;
cout<<"Your total bill Amount is: "<<billAmount+dueAmount;
reuturn 0;
}
