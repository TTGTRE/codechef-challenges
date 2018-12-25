#include <iostream>

int main() {

    int contestants, boundary;
    std::cin>>contestants;
    std::cin>>boundary;

    int ratings[contestants];

    for(int a=0;a<contestants;a++) {
        std::cin>>ratings[a];
    }

    for(int a=0;a<contestants;a++) {
        if(ratings[a]<boundary){
            std::cout<<"Bad boi"<<std::endl;
            continue;
        }
        std::cout<<"Good boi"<<std::endl;
    }

    return 0;
}