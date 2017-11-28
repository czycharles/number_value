#include <iostream> 
#include <stdio.h> 
#include <string.h>
#include <math.h>
#include <fstream.h>

using namespace std;

main()
{
     long long loopcount = 100000;
     int percent = 0;
     ofstream SaveFile("numbers_value.csv");
     while(loopcount<=999999){  
         long long a;
         int base_value = 10;
         double double_value = 1;
         double value = 0;
         int idx = 0;
         ////cout<<"请输入你的JJ号："<<endl;
         ////cin>>a;  
         a = loopcount;     
         char check_num[30];
         int check_num_mark[30]={0};
         int check_num_mark1[30]={0};
         lltoa(a,check_num,10);
         string check_num_2 = check_num;
         ////cout<<"你输入的是："<<check_num_2<<endl; 
         int length=strlen(check_num); 
         ////cout<<"长度是："<<length<<endl;
//689总和判断 
         idx = 0;
         int num_of_8 = 0; 
         while(idx!= string::npos){
             idx = check_num_2.find("8",idx);
             if (idx != string::npos){
                num_of_8++;
                check_num_mark1[idx]++; 
                idx += (1);
             }
         }
//         if(num_of_8>=3){
//               check_num_mark1=check_num_mark; 
//               for(int i=0;i<=29;i++)
//                   check_num_mark1[i]==0;         
//             base_value=base_value + num_of_8*5;
//             cout<<"号码含有"<<num_of_8<<"个8（仅大于等于3个时计算），基数+"<<num_of_8*5<<"，当前的基数是"<<base_value<<endl;
//          }
          
         idx = 0;
         int num_of_6 = 0; 
         while(idx!= string::npos){
             idx = check_num_2.find("6",idx);
             if (idx != string::npos){
                num_of_6++;
                check_num_mark1[idx]++; 
                idx += (1);
             }
         }
//         if(num_of_6>=3){
//             check_num_mark1=check_num_mark; 
//             for(int i=0;i<=29;i++)
//                 check_num_mark1[i]=0; 
//             base_value=base_value + num_of_6*4;
//             cout<<"号码含有"<<num_of_6<<"个6（仅大于等于3个时计算），基数+"<<num_of_6*4<<"，当前的基数是"<<base_value<<endl;
//          }
          
         idx = 0;
         int num_of_9 = 0; 
         while(idx!= string::npos){
             idx = check_num_2.find("9",idx);
             if (idx != string::npos){
                num_of_9++;
                check_num_mark1[idx]++; 
                idx += (1);
             }
         }
//         if(num_of_9>=3){
//             check_num_mark1=check_num_mark; 
//            for(int i=0;i<=29;i++)
//                 check_num_mark1[i]=0; 
//             base_value=base_value + num_of_9*4;
//             cout<<"号码含有"<<num_of_9<<"个9（仅大于等于3个时计算），基数+"<<num_of_9*4<<"，当前的基数是"<<base_value<<endl;
//         }
          
         int special_num_count = num_of_8+num_of_6+num_of_9;
         
         if((special_num_count>=5)||(num_of_9>=3)||(num_of_6>=3)||(num_of_8>=3)){
             base_value=base_value + num_of_9*4+num_of_6*4+num_of_8*5;
             for(int i=0;i<20;i++){
                 check_num_mark[i]=check_num_mark[i]+check_num_mark1[i];
             }
             ////cout<<"号码总计含有"<<special_num_count<<"个6,8,9（仅单个数大于等于3或总计大于等于5个时计算），基数+"<<num_of_9*4+num_of_6*4+num_of_8*5<<"，当前的基数是"<<base_value<<endl;
          }         
             
//特殊数字组合判断                         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("518",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有518特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }

         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("618",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有618特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("158",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                /////cout<<"含有158特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("168",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                /////cout<<"含有168特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }
     
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("918",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                /////cout<<"含有918特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("186",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有186特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }     
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("986",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                /////cout<<"含有986特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         } 
     
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("968",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                /////cout<<"含有968特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         } 
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("689",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有689特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         } 
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("698",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有698特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("869",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有869特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }   
             
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("896",idx);
             if (idx != string::npos){
                base_value=base_value+20;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有896特殊字段，基数+20，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }

         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("6688",idx);
             if (idx != string::npos){
                base_value=base_value+25;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                /////cout<<"含有6688特殊字段，基数+25，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }

         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("9988",idx);
             if (idx != string::npos){
                base_value=base_value+25;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                ////cout<<"含有9988特殊字段，基数+25，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("6699",idx);
             if (idx != string::npos){
                base_value=base_value+25;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                /////cout<<"含有6699特殊字段，基数+25，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }  
 
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("8866",idx);
             if (idx != string::npos){
                base_value=base_value+25;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                ////cout<<"含有8866特殊字段，基数+25，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }  

         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("8899",idx);
             if (idx != string::npos){
                base_value=base_value+25;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                ////cout<<"含有8899特殊字段，基数+25，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }

         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("9966",idx);
             if (idx != string::npos){
                base_value=base_value+25;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                ////cout<<"含有9966特殊字段，基数+25，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }
                                                            
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("520",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有520特殊字段，基数+15，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }   
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("521",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有521特殊字段，基数+15，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }              
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("920",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有920特殊字段，基数+15，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }   
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("921",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                ////cout<<"含有921特殊字段，基数+15，当前的基数是"<<base_value<<endl;
                idx += (3);
             }
         }
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("1314",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                ////cout<<"含有1314特殊字段，基数+15，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }   
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("3344",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                ////cout<<"含有3344特殊字段，基数+15，当前的基数是"<<base_value<<endl;
                idx += (4);
             }
         }
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("5201314",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                check_num_mark[idx+4]++;
                check_num_mark[idx+5]++; 
                check_num_mark[idx+6]++;  
                ////cout<<"含有5201314特殊字段，基数再+15，当前的基数是"<<base_value<<endl;
                idx += (7);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("5203344",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                check_num_mark[idx+4]++;
                check_num_mark[idx+5]++; 
                check_num_mark[idx+6]++;  
                /////cout<<"含有5203344特殊字段，基数再+15，当前的基数是"<<base_value<<endl;
                idx += (7);
             }
         }
    
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("5213344",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                check_num_mark[idx+4]++;
                check_num_mark[idx+5]++; 
                check_num_mark[idx+6]++;  
                ////cout<<"含有5213344特殊字段，基数再+15，当前的基数是"<<base_value<<endl;
                idx += (7);
             }
         }
         
         idx = 0;
         while(idx!= string::npos){
             idx = check_num_2.find("5211314",idx);
             if (idx != string::npos){
                base_value=base_value+15;
                check_num_mark[idx]++; 
                check_num_mark[idx+1]++; 
                check_num_mark[idx+2]++; 
                check_num_mark[idx+3]++; 
                check_num_mark[idx+4]++;
                check_num_mark[idx+5]++; 
                check_num_mark[idx+6]++;  
                /////cout<<"含有5211314特殊字段，基数再+15，当前的基数是"<<base_value<<endl;
                idx += (7);
             }
         }

//连续重复数字判断           
         int max_same_num = 1;
         int max_same_num1 = 1;
         char re_num;
         for(int i=0;i<30;i++)
             check_num_mark1[i]=0;
         for(int i=0;check_num[i]!='\0';i++){
             for(int j=0;check_num[i+j]!='\0';j++){
                 if(check_num[i+j]==check_num[i+j+1]){
                    max_same_num1++;
                    check_num_mark1[i+j]=1;
                    check_num_mark1[i+j+1]=1;
                    re_num = check_num[i+j];
                 }
                 else
                     break;
             }
             if((max_same_num1>max_same_num)&&(max_same_num1>2)){
                 max_same_num=max_same_num1;
                 for(int k=0;k<30;k++)
                     check_num_mark[k]=check_num_mark[k]+check_num_mark1[k];    
             }
             max_same_num1=1;
             for(int i=0;i<30;i++)
                 check_num_mark1[i]=0;
         } 
         
         double double_var = 1;
         
         switch( max_same_num ){
             case 3:
                 double_var = 2;
                 break;
             case 4:
                 double_var = 3;
                 break;
             case 5:
                 double_var = 4;
                 break;
             case 6:case 7:case 8:case 9:case 10:
                 double_var = 5;
                 break;
             default:
                 double_var = 1;
                 break;  
         }   
         
         if(double_var>=3){        
             double_value=double_value*double_var;                
             ////cout<<"含有"<<max_same_num<<"个连续的:"<<re_num<<"，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;
         }
 
 //
         int avoid_repeat_flag = 0;        
 //连续2位数字组合判断      
         max_same_num = 1;
         max_same_num1 = 1;
         char re_num2[2];
         for(int i=0;i<30;i++)
             check_num_mark1[i]=0;
         for(int i=0;check_num[i]!='\0';i++){
             for(int j=0;check_num[i+j]!='\0';j++){
                 if((check_num[i+j]==check_num[i+j+2])&&(check_num[i+j]!=check_num[i+j+1])&&(check_num[i+j+1]==check_num[i+j+3])){
                    max_same_num1++;
                    re_num2[0] = check_num[i+j];
                    re_num2[1] = check_num[i+j+1];
                    check_num_mark1[i+j]=1;
                    check_num_mark1[i+j+1]=1;
                    check_num_mark1[i+j+2]=1;
                    check_num_mark1[i+j+3]=1;
                    i++;
                    j++;
                 }
                 else
                     break;
             }
             if(max_same_num1>max_same_num){
                 max_same_num=max_same_num1;
             }  
             max_same_num1=1;
             if(   max_same_num<=1   ){  
                 for(int i=0;i<30;i++)
                     check_num_mark1[i]=0;
             }
         } 
         
         double_var = 1;
         
         switch( max_same_num ){
             case 2:
                 double_var = 4;
                 break;
             case 3:
                 double_var = 6;
                 break;
             case 4:
                 double_var = 8;
                 break;
             case 5:
                 double_var = 10;
                 break;
             default:
                 double_var = 1;
                 break;  
         } 
         if(   max_same_num>1   ){       
              for(int k=0;k<30;k++)
                 check_num_mark[k]=check_num_mark[k]+check_num_mark1[k]; 
             double_value=double_value*double_var;                
             ////cout<<"含有"<<max_same_num<<"个连续的:"<<re_num2[0]<<re_num2[1]<<"，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;  
             avoid_repeat_flag = 1;
         }
         
 //连续3位数字组合判断      
         if(avoid_repeat_flag==0){
             max_same_num = 1;
             max_same_num1 = 1;
             char re_num3[3];
             for(int i=0;i<30;i++)
                 check_num_mark1[i]=0;
             for(int i=0;check_num[i]!='\0';i++){
                 for(int j=0;check_num[i+j]!='\0';j++){
                     if((check_num[i+j]==check_num[i+j+3])&&((check_num[i+j]!=check_num[i+j+1])||(check_num[i+j+1]!=check_num[i+j+2]))&&(check_num[i+j+1]==check_num[i+j+4])&&(check_num[i+j+2]==check_num[i+j+5])){
                        max_same_num1++;
                        re_num3[0] = check_num[i+j];
                        re_num3[1] = check_num[i+j+1];
                        re_num3[2] = check_num[i+j+2];
                        check_num_mark1[i+j]=1;
                        check_num_mark1[i+j+1]=1;
                        check_num_mark1[i+j+2]=1;
                        check_num_mark1[i+j+3]=1;
                        check_num_mark1[i+j+4]=1;
                        check_num_mark1[i+j+5]=1;
                        i++;
                        j++;
                     }
                     else
                         break;
                 }
                 if(max_same_num1>max_same_num){
                     max_same_num=max_same_num1;
                 }
                 max_same_num1=1;
                 if(max_same_num<=1){ 
                     for(int i=0;i<30;i++)
                        check_num_mark1[i]=0;
                 }
             } 
             
             double_var = 1;
             
             switch( max_same_num ){
                 case 2:
                     double_var = 6;
                     break;
                 case 3:
                     double_var = 9;
                     break;
                 default:
                     double_var = 1;
                     break;  
             } 
             if(   max_same_num>1   ){ 
                 for(int k=0;k<30;k++)
                     check_num_mark[k]=check_num_mark[k]+check_num_mark1[k];       
                 double_value=double_value*double_var;                
                 ////cout<<"含有"<<max_same_num<<"个连续的"<<re_num3[0]<<re_num3[1]<<re_num3[2]<<"，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;  
                 avoid_repeat_flag = 1;
             }  
         }      

 //连续4位数字组合判断   
         if(avoid_repeat_flag==0){   
             max_same_num = 1;
             max_same_num1 = 1;
             char re_num4[4];
             for(int i=0;i<30;i++)
                 check_num_mark1[i]=0;
             for(int i=0;check_num[i]!='\0';i++){
                 for(int j=0;check_num[i+j]!='\0';j++){
                     if((check_num[i+j]==check_num[i+j+4])&&((check_num[i+j]!=check_num[i+j+1])||(check_num[i+j+1]!=check_num[i+j+2])||(check_num[i+j+2]!=check_num[i+j+3]))&&(check_num[i+j+1]==check_num[i+j+5])&&(check_num[i+j+2]==check_num[i+j+6])&&(check_num[i+j+3]==check_num[i+j+7])){
                        max_same_num1++;
                        re_num4[0] = check_num[i+j];
                        re_num4[1] = check_num[i+j+1];
                        re_num4[2] = check_num[i+j+2];
                        re_num4[3] = check_num[i+j+3];
                        check_num_mark1[i+j]=1;
                        check_num_mark1[i+j+1]=1;
                        check_num_mark1[i+j+2]=1;
                        check_num_mark1[i+j+3]=1;
                        check_num_mark1[i+j+4]=1;
                        check_num_mark1[i+j+5]=1;
                        check_num_mark1[i+j+6]=1;
                        check_num_mark1[i+j+7]=1;
                        i++;
                        j++;
                     }
                     else
                         break;
                 }
                 if(max_same_num1>max_same_num){
                     max_same_num=max_same_num1;
                 }
                 max_same_num1=1;
                 if(max_same_num<=1){
                     for(int i=0;i<30;i++)
                        check_num_mark1[i]=0;
                 }
             } 
             
             double_var = 1;
             
             switch( max_same_num ){
                 case 2:
                     double_var = 8;
                     break;
                 default:
                     double_var = 1;
                     break;  
             } 
             if(   max_same_num>1   ){      
                 for(int k=0;k<30;k++)
                     check_num_mark[k]=check_num_mark[k]+check_num_mark1[k];  
                 double_value=double_value*double_var;                
                 ////cout<<"含有"<<max_same_num<<"个连续的"<<re_num4[0]<<re_num4[1]<<re_num4[2]<<re_num4[3]<<"，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl; 
                 avoid_repeat_flag=1; 
             }
         }

 //连续5位数字组合判断   
         if(avoid_repeat_flag==0){    
             max_same_num = 1;
             max_same_num1 = 1;
             char re_num5[5];
             for(int i=0;i<30;i++)
                 check_num_mark1[i]=0;
             for(int i=0;check_num[i]!='\0';i++){
                 for(int j=0;check_num[i+j]!='\0';j++){
                     if((check_num[i+j]==check_num[i+j+5])&&((check_num[i+j]!=check_num[i+j+1])||(check_num[i+j+1]!=check_num[i+j+2])||(check_num[i+j+2]!=check_num[i+j+3])||(check_num[i+j+3]!=check_num[i+j+4]))&&(check_num[i+j+1]==check_num[i+j+6])&&(check_num[i+j+2]==check_num[i+j+7])&&(check_num[i+j+3]==check_num[i+j+8])&&(check_num[i+j+4]==check_num[i+j+9])){
                        max_same_num1++;
                        re_num5[0] = check_num[i+j];
                        re_num5[1] = check_num[i+j+1];
                        re_num5[2] = check_num[i+j+2];
                        re_num5[3] = check_num[i+j+3];
                        re_num5[4] = check_num[i+j+4];
                        check_num_mark1[i+j]=1;
                        check_num_mark1[i+j+1]=1;
                        check_num_mark1[i+j+2]=1;
                        check_num_mark1[i+j+3]=1;
                        check_num_mark1[i+j+4]=1;
                        check_num_mark1[i+j+5]=1;
                        check_num_mark1[i+j+6]=1;
                        check_num_mark1[i+j+7]=1;
                        check_num_mark1[i+j+8]=1;
                        check_num_mark1[i+j+9]=1;
                        i++;
                        j++;
                     }
                     else
                         break;
                 }
                 if(max_same_num1>max_same_num){
                     max_same_num=max_same_num1;
                 }
                 max_same_num1=1;
                 if(max_same_num<=1){
                     for(int i=0;i<30;i++)
                        check_num_mark1[i]=0;
                 }
             } 
             
             double_var = 1;
             
             switch( max_same_num ){
                 case 2:
                     double_var = 10;
                     break;
                 default:
                     double_var = 1;
                     break;  
             } 
             if(   max_same_num>1   ){      
                 for(int k=0;k<30;k++)
                     check_num_mark[k]=check_num_mark[k]+check_num_mark1[k]; 
                 double_value=double_value*double_var;                
                 ////cout<<"含有"<<max_same_num<<"个连续的"<<re_num5[0]<<re_num5[1]<<re_num5[2]<<re_num5[3]<<re_num5[4]<<"，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl; 
                 avoid_repeat_flag=1;  
             }
         }
         
 //对称数字判断 
         char reverse_num[11]={'*','*','*','*','*','*','*','*','*','*','*'};
         int reverse_count=1;
         int reverse_count_final=1;
         int middle_num = 0;
         int re_length = 0;
         for(int i=0;i<30;i++)
             check_num_mark1[i]=0;
         for(int i=1;check_num[i]!='\0';i++){
             for(int j=1;((j<=i)&&(check_num[i+j]!='\0'));j++){
                 if((check_num[i-j]==check_num[i+j])&&(check_num[i]!=check_num[i+1])){
                     reverse_count=reverse_count+2;
                     if(reverse_count>reverse_count_final){
                         reverse_count_final = reverse_count;
                         middle_num = i;
                     }
                     //cout<<i<<j<<middle_num<<endl;

                 }
                 else{
                     reverse_count=1; 
                     //cout<<"00000000"<<endl;
                     break;
                 } 
             }
             reverse_count=1;   
             if(reverse_count_final<5){ 
                 for(int k=0;k<30;k++)
                    check_num_mark1[k]=0;
             } 
         }
         for(int j=1;((j<=middle_num)&&(check_num[middle_num+j]!='\0'));j++){
             if((check_num[middle_num-j]==check_num[middle_num+j])&&(check_num[middle_num]!=check_num[middle_num+1])){
                 reverse_num[5]=check_num[middle_num];   
                 reverse_num[5+j]=check_num[middle_num+j];    
                 reverse_num[5-j]=check_num[middle_num-j];
                 re_length=j;
             }
         }
         if(reverse_count_final>4){
             for(int i=0;i<=re_length;i++){
                 check_num_mark[middle_num+i]++;
                 check_num_mark[middle_num-i]++;
                 //cout<<check_num_mark[middle_num-i]<<endl;
             }
             check_num_mark[middle_num]--;
             double_value = double_value*(reverse_count_final/2);
             ////cout<<"含有对称数字："<<reverse_num[0]<<reverse_num[1]<<reverse_num[2]<<reverse_num[3]<<reverse_num[4]<<reverse_num[5]<<reverse_num[6]<<reverse_num[7]<<reverse_num[8]<<reverse_num[9]<<reverse_num[10]<<"，系数*"<<reverse_count_final/2<<"，当前的系数是"<<double_value<<endl;  
         }
//等差数列判断
         int d=0;
         int d1=0;
         int d_final=0; 
         int max_dc=1; 
         int max_dc1=2; 
         for(int i=0;check_num[i]!='\0';i++){
             d=check_num[i]-check_num[i+1];
             d1=check_num[i+1]-check_num[i+2];
             if(d==d1){
                 max_dc1++;
                 check_num_mark1[i]=1;
                 check_num_mark1[i+1]=1;
                 check_num_mark1[i+2]=1;
             }
             else if(max_dc1>max_dc){
                 max_dc=max_dc1;
                 d_final=d;
                 max_dc1=0;
                 if(max_dc<3){
                     for(int k=0;k<30;k++)
                        check_num_mark1[k]=0;
                 }                     
             }
         }
         switch( abs(d_final) ){
             case 1:
                 double_var = max_dc*2;
                 break;
             case 2:case 3:case 4:case 5:
                 double_var = max_dc;
                 break;
             default:
                 double_var = 1;
                 break;  
         } 
         if( max_dc >3){
             for(int k=0;k<30;k++)
                 check_num_mark[k]=check_num_mark[k]+check_num_mark1[k];
             double_value = double_value*double_var;
             ////cout<<"含有"<<max_dc<<"位等差数列，公差："<<d_final<<" 系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;  
         }

//位数
         switch( length ){
             case 6:
                 double_var = 2;
                 break;
             case 7:
                 double_var = 1.5;
                 break;
             default:
                 double_var = 1;
                 break;  
         } 
         double_value = double_value*double_var;
         ////cout<<"你输入的是"<<length<<"位JJ号，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl; 

//高频数字

         int num_count[10] = {0};
         int max_num = -1;
         for(int i=0;i<length;i++){
             num_count[int(check_num[i])-int('0')]++;
         }
         int num_count_max = 0;
         for(int i=0;i<10;i++){
             if(num_count[i]>num_count_max){
                 num_count_max=num_count[i];
                 max_num = i;
             }
         }
         for(int i=0;i<10;i++){
             if((num_count[i]==num_count_max)&&(num_count_max>=4)){
                 for(int j=0;j<length;j++){
                     if((int(check_num[j])-int('0'))==i){
                         check_num_mark[j]++;
                         //cout<<"success"<<endl; 
                     }
                 } 
             }                 
         }
         switch(num_count_max){
             case 4:
                 double_var = 4;
                 break;
             case 5:case 6:
                 double_var = 3;
                 break;             
             case 7:case 8:case 9:case 10:
                 double_var = 2;
                 break;
             default:
                 double_var = 1;
                 break;                                        
         }
         if(num_count_max>=4){
             double_value = double_value*double_var;
             ////cout<<"你输入的号码有数字出现了"<<num_count_max<<"次，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;
         }
         
//数字个数 
         int count_num=0;
         for(int i=0;i<10;i++){
             if(num_count[i]>0)
                 count_num++;
         }
         switch(count_num){
             case 1:
                 double_var = 2;
                 break;
             case 2:
                 double_var = 2.5;
                 break;             
             case 3:
                 double_var = 2;
                 break;
             case 4:
                 double_var = 1.5;
                 break;
             default:
                 double_var = 1;
                 break;                                        
         } 
             
         if(count_num<5){
             double_value = double_value*double_var;
             ////cout<<"你输入的号码仅含有"<<count_num<<"个数字，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;
         }
         
//数字纯度 
         int prized_num = 0; 
         double prized_num_per = 0;
         for(int j=0;j<length;j++){
             if(check_num_mark[j]>0)
                 prized_num++;
         } 
         prized_num_per=((double)prized_num/(double)length)*100;
         if(prized_num_per>=100)
             double_var=5;
         else if(prized_num_per>=70)
             double_var=3;
         else if(prized_num_per>=50)
             double_var=3;
         else
             double_var=1;
         if(double_var>1){
             double_value = double_value*double_var;
             ////cout<<"该号码有"<<prized_num<<"位有规律的数字，纯度为："<<prized_num_per<<"%，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;
         }
         ////cout<<"每位数字涉及的规律数为："<<endl; 
         for(int j=0;j<length;j++){
             ///cout<<check_num_mark[j];
         } 
         ////cout<<endl; 
         //cout<<"该号码纯度为："<<prized_num_per<<"%，系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;
//是否在首尾          
         if((check_num_mark[0]>0)&&(check_num_mark[length-1]>0)){
             double_var=2;
            //// cout<<"规律数字在号码首尾。";
         } 
         else if(check_num_mark[0]>0){ 
             double_var=1.2;         
             ////cout<<"规律数字在号码首部。";
         } 
         else if(check_num_mark[length-1]>0){ 
             double_var=1.2;            
             ////cout<<"规律数字在号码尾部。";
         } 
         double_value = double_value*double_var;
         ////cout<<"系数*"<<double_var<<"，当前的系数是"<<double_value<<endl;
         
         
         value = base_value*double_value;

         ////cout<<endl; 
         ////cout<<"最终基数为："<<base_value<<endl;
         ////cout<<"最终系数为："<<double_value<<endl;
         ////cout<<"该号码价值为："<<value<<endl; 
         ////cout<<endl; 
         if(value>=50){
             SaveFile << a <<","<< value <<endl ;
         }
         loopcount++;
         if(loopcount%100000==0){
             percent = percent + 10;  
             cout<< percent <<"% percent finish."<<endl;
         }
    }
     SaveFile.close();
     cout<<"All Finish";
     system("pause");
     return 0;
} 
