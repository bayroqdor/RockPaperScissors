#include <iostream>
#include <cstdlib> // rand() va srand() funksiyalari uchun kutubxona
#include <ctime> // time() funksiyasi uchun kutubxona

int main() {
    srand(time(0)); // Tasodifiy sonlar uchun boshlang'ich qiymat
    int computerChoice = rand() % 3; // 0, 1 yoki 2 orasida tasodifiy tanlov
    std::string userChoice;
    
    std::cout << "tosh, qaychi yoki qogozni tanlang: "; 
    std::cin >> userChoice; // Foydalanuvchi tanlovi

    std::string computerChoiceStr; // Komyuter tanlovi
    if (computerChoice == 0) {
        computerChoiceStr = "tosh";
    } else if (computerChoice == 1) {
        computerChoiceStr = "qogoz";
    } else {
        computerChoiceStr = "qaychi";
    }

    std::cout << "Komyuter tanlovi: " << computerChoiceStr << std::endl; 

    if (userChoice == computerChoiceStr) {
        std::cout << "Durrang!" << std::endl;
    } else if ((userChoice == "tosh" && computerChoiceStr == "qaychi") ||
               (userChoice == "qogoz" && computerChoiceStr == "tosh") ||
               (userChoice == "qaychi" && computerChoiceStr == "qogoz")) {
        std::cout << "Siz yutdingiz!" << std::endl;
    } else {
        std::cout << "Kompyuter yutdi!" << std::endl;
    }

    return 0;
}
