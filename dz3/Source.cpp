#include <iostream>
using namespace std;

int main() {
    const double USD_RATE = 80.0;     // Курс доллара
    const double EURO_RATE = 90.0;    // Курс евро
    const double YUAN_RATE = 12.0;    // Курс юаня
    const double FARIT_RATE = 0.15;   // Курс фарита
    const double YEN_RATE = 0.73;      // Курс йены
    const double COMMISSION_RATE = 0.05; // Комиссионный сбор

    double rubles;
    int choice;
    char repeat;

    do {
        cout << "Введите количество рублей для обмена: ";
        cin >> rubles;

        cout << "Выберите валюту для покупки:\n";
        cout << "1. Доллар\n";
        cout << "2. Евро\n";
        cout << "3. Юань\n";
        cout << "4. Фарит\n";
        cout << "5. Йена\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        double commissionAmount = rubles * COMMISSION_RATE; // Считаем комиссию
        double netAmount = rubles - commissionAmount;        // Считаем сумму после вычета комиссии
        double exchangeAmount = 0.0;                         // Сумма после обмена

        switch (choice) {
        case 1:
            exchangeAmount = netAmount / USD_RATE; // Для доллара
            cout << "Вы получите " << exchangeAmount << " долларов." << endl;
            break;
        case 2:
            exchangeAmount = netAmount / EURO_RATE; // Для евро
            cout << "Вы получите " << exchangeAmount << " евро." << endl;
            break;
        case 3:
            exchangeAmount = netAmount / YUAN_RATE; // Для юаней
            cout << "Вы получите " << exchangeAmount << " юаней." << endl;
            break;
        case 4:
            exchangeAmount = netAmount / FARIT_RATE; // Для фаритов
            cout << "Вы получите " << exchangeAmount << " фаритов." << endl;
            break;
        case 5:
            exchangeAmount = netAmount / YEN_RATE; // Для йен
            cout << "Вы получите " << exchangeAmount << " йен." << endl;
            break;
        default:
            cout << "Некорректный выбор. Попробуйте еще раз." << endl;
            continue; // Переход к следующей итерации цикла
        }

        cout << "Хотите обменять ещё? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y'); // Продолжать, пока пользователь хочет

    return 0;
}