#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> fizzBuzz(int n);

int main(){
    std::cout << "Enter the number.\n";
    int num;
    std::cin >> num;
    std::vector<std::string> vector = fizzBuzz(num);
    for(int i = 0; i < num; ++i){
        std::cout << vector[i];
    }
    return 0;
}

std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> vector1;
    
    for(int i = 1; i <= n; ++i){
        if((i % 3 == 0) && (i % 5 == 0)){
            vector1.push_back("FizzBuzz");
        }
        else if(i % 5 == 0){
            vector1.push_back("Buzz");
        }
        else if(i % 3 == 0){
            vector1.push_back("Fizz");
        }
        else{
            vector1.push_back(std::to_string(i));
        }
    }
    return vector1;
}
