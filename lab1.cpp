#include <iostream>
int main(){
 /*   Преобразование 12-часового времени, например "8:30 am" или "8:30 pm", в 24-часовое 
(например, "0830" или "2030")  
 
Вам необходимо определить функцию, на вход которой будут поданы час (всегда в диапазоне от 
1 до 12, включительно), минута (всегда в диапазоне от 0 до 59, включительно) и период (либо 
"am", либо "pm"). 
 
Ваша задача - вернуть четырехсимвольную строку, кодирующую это время в 24-часовом 
формате. */
//размер значения указателя (хранимый адрес) не зависит от типа указателя.(хоть int double char)
 
// Примечания
const int max_length {8};
char time[max_length] {};
int hour;
std::cin.getline(time,max_length);
//std::cin.getline(text, max_length, '!'); символ завершения ввода .не будет включаться в строку
if (time[1]!=':'){//это 12 

    if (time[6]=='a'){//полночь 12 am
        time[0]='0';
        time[1]='0';
        //остальное неизменно
    }
    // 12 pm полдень
    else {
        time[0]='1';
        time[1]='2';
    }
}
else{//все остальные 
    hour=int(time[0]);
    if (time[5]=='p')//8 pm=20 
       hour+=12;
    //не важно какой часовой пояс
    time[0]=char(hour/10);
    time[1]=char(hour%10);

//    std::cout<<time[0]<<time[1]<<time[];

}

 std::cout<<time[0]<<time[1]<<time[3]<<time[4]<<std::endl; 

    return 0;
}