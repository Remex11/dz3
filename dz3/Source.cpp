#include <iostream>
using namespace std;

int main() {
    const double USD_RATE = 80.0;     // ���� �������
    const double EURO_RATE = 90.0;    // ���� ����
    const double YUAN_RATE = 12.0;    // ���� ����
    const double FARIT_RATE = 0.15;   // ���� ������
    const double YEN_RATE = 0.73;      // ���� ����
    const double COMMISSION_RATE = 0.05; // ������������ ����

    double rubles;
    int choice;
    char repeat;

    do {
        cout << "������� ���������� ������ ��� ������: ";
        cin >> rubles;

        cout << "�������� ������ ��� �������:\n";
        cout << "1. ������\n";
        cout << "2. ����\n";
        cout << "3. ����\n";
        cout << "4. �����\n";
        cout << "5. ����\n";
        cout << "��� �����: ";
        cin >> choice;

        double commissionAmount = rubles * COMMISSION_RATE; // ������� ��������
        double netAmount = rubles - commissionAmount;        // ������� ����� ����� ������ ��������
        double exchangeAmount = 0.0;                         // ����� ����� ������

        switch (choice) {
        case 1:
            exchangeAmount = netAmount / USD_RATE; // ��� �������
            cout << "�� �������� " << exchangeAmount << " ��������." << endl;
            break;
        case 2:
            exchangeAmount = netAmount / EURO_RATE; // ��� ����
            cout << "�� �������� " << exchangeAmount << " ����." << endl;
            break;
        case 3:
            exchangeAmount = netAmount / YUAN_RATE; // ��� �����
            cout << "�� �������� " << exchangeAmount << " �����." << endl;
            break;
        case 4:
            exchangeAmount = netAmount / FARIT_RATE; // ��� �������
            cout << "�� �������� " << exchangeAmount << " �������." << endl;
            break;
        case 5:
            exchangeAmount = netAmount / YEN_RATE; // ��� ���
            cout << "�� �������� " << exchangeAmount << " ���." << endl;
            break;
        default:
            cout << "������������ �����. ���������� ��� ���." << endl;
            continue; // ������� � ��������� �������� �����
        }

        cout << "������ �������� ���? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y'); // ����������, ���� ������������ �����

    return 0;
}