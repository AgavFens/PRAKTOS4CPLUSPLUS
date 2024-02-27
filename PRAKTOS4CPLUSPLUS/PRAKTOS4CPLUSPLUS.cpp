#include <iostream>
#include <string>
#include <algorithm>
#include <random>


std::string reverse(const std::string& word) {
    std::string reversed_word = word;
    std::reverse(reversed_word.begin(), reversed_word.end());
    return reversed_word;
}

std::string removeVowels(const std::string& word) {
    std::string result = "";
    for (char ch : word) {
        if (tolower(ch) != 'a' && tolower(ch) != 'e' && tolower(ch) != 'i' && tolower(ch) != 'o' && tolower(ch) != 'u')
            result += ch;
    }
    return result;
}

std::string removeConsonants(const std::string& word) {
    std::string result = "";
    for (char ch : word) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
            result += ch;
    }
    return result;
}

std::string shuffle(const std::string& word) {
    std::string shuffled_word = word;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(shuffled_word.begin(), shuffled_word.end(), g);
    return shuffled_word;
}

int main() {
    setlocale(LC_ALL, "RUS");
    std::string word;
    std::cout << "Введите слово: ";
    std::cin >> word;

    int choice;
    std::cout << "Выберите действие:\n";
    std::cout << "1. Слово выводится задом наперед.\n";
    std::cout << "2. Вывести слово без гласных.\n";
    std::cout << "3. Вывести слово без согласных.\n";
    std::cout << "4. Рандомно раскидывать буквы заданного слова.\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Результат: " << reverse(word) << std::endl;
        break;
    case 2:
        std::cout << "Результат: " << removeVowels(word) << std::endl;
        break;
    case 3:
        std::cout << "Результат: " << removeConsonants(word) << std::endl;
        break;
    case 4:
        std::cout << "Результат: " << shuffle(word) << std::endl;
        break;
    default:
        std::cout << "Неверный выбор.\n";
    }
}
