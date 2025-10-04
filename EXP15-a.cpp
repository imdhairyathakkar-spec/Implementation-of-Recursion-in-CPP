//Dhairya Thakkar
//24070123037
//A2

#include <iostream>
int funf(int a){
    if (a==1){
        return 1;
    }
    else{
        return (a*funf(a-1));
    }
}
int main(){
    int d;
    std::cout<<"enter the value ";
    std::cin>>d;
    std::cout<<"output is : "<<funf(d);

return 0;
}

/*  output is 
enter the value 10
output is : 3628800
*/
