#include <iostream>
#include <string>
#include <algorithm>
#include <random>

namespace Praktos4 {
    using namespace std;

    string reverse(const string& word) {
        string reversed_word = word;
        reverse(reversed_word.begin(), reversed_word.end());
        return reversed_word;
    }

    string removeVowels(const string& word) {
        string result;
        for (char c : word) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                result += c;
            }
        }
        return result;
    }

    string removeConsonants(const string& word) {
        string result;
        for (char c : word) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                result += c;
            }
        }
        return result;
    }

    string shuffle(const string& word) {
        random_shuffle(word.begin(), word.end());
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    using namespace std;
    string word;
    cout << "Введите слова: ";
    cin >> word;

    int choice = 0;
    while (choice != 5) {
        cout << "\nМеню:\n";
        cout << "1. Реверснуть слова\n";
        cout << "2. Вывести слова без гласных\n";
        cout << "3. Вывести слова без согласных\n";
        cout << "4. Слова будут в перемешку\n";
        cout << "5. Выход\n";
        cout << "Выбери че хочешь: ";
        cin >> choice;

        string result;
        if (choice == 1) {
            result = Praktos4::reverse(word);
        }
        else if (choice == 2) {
            result = Praktos4::removeVowels(word);
        }
        else if (choice == 3) {
            result = Praktos4::removeConsonants(word);
        }
        else if (choice == 4) {
            result = Praktos4::shuffle(word);
        }
        else if (choice == 5) {
            cout << "Выход...\n";
            break;
        }
        else {
            cout << "Неправильный выбор, выбери че дано было!!!.\n";
            continue;
        }
        cout << "Результат: " << result << "\n";
    }
}
