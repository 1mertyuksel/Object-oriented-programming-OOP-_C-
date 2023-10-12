#include <iostream>

class dikdortgen{
public:
    int en;
    int boy;
    int alan(){
    return en * boy;
    }

    int cevre(){
    return 2 * (en + boy);
    }
};

int main() {
dikdortgen ilk;

ilk.en = 50;
ilk.boy = 100;

dikdortgen ikinci;
ikinci.en = 150;
ikinci.boy = 200;


std::cout << "1.Çevre: " << ilk.cevre() << std::endl;
std::cout<< "1.Alan:"<< ilk.alan()<< std::endl;



std::cout<< "2.Çevre:"<< ikinci.cevre()<< std::endl;
std::cout<< "2.Alan:"<< ikinci.alan()<< std::endl;



    return 0;
}