#include <iostream>
#include <stdlib.h>
//void time_need_format(char[],const int);

//int main(int argc,char* argv[]){
//}
const   int maxlength {9};
void time_need_format(char time_need1[],const int maxlength){
    int hour;
    //const   int maxlength {9};
    char time_need[maxlength] {};
    std::cin.getline(time_need,maxlength);
   // time_need_format(time_need,maxlength);
    if (time_need[1]=='2' && (time_need[3]!='0' || time_need[4]!='0' )) {exit(1);}
    if (time_need[6]=='a' ){
    std::cout<<time_need[0]<<time_need[1]<<time_need[3]<<time_need[4]<<std::endl;
    }
  if (time_need[5]=='a' ){
    std::cout<<"0"<<time_need[0]<<time_need[2]<<time_need[3]<<std::endl;
    }
 if (time_need[6]=='p' ){//11:57 pm=23 57
    hour=10*(time_need[0] -'0')+time_need[1] - '0' +12;
    time_need[0]=hour/10 + '0';
    time_need[1]=hour%10 + '0';
    std::cout<<time_need[0]<<time_need[1]<<time_need[3]<<time_need[4]<<std::endl;
    }
 if (time_need[5]=='p' ){//8:57 pm=20 57
    hour=time_need[0] - '0'  +12;
    time_need[0]=hour/10 + '0';
    time_need[1]=hour%10 + '0';
    std::cout<<time_need[0]<<time_need[1]<<time_need[2]<<time_need[3]<<std::endl; 
     }
}
