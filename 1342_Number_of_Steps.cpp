#include<iostream>


int numberOfSteps(int num);

int main(){

    int input_number;

    std::cout << "Give me a number!\n";
    std::cin >> input_number;
    std::cout << numberOfSteps(input_number) << " steps need to zero.";
}

int numberOfSteps(int num){
    int count = 0;

    while (num != 0){
        if(num % 2 == 0){
            num /= 2;
        }
        else{
            num--;
        }
        count++;
    }

    return count;
}