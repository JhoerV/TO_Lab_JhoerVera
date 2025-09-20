#include <iostream>
#include <vector>
using namespace std;

int countChange(int money, const vector<int> &coins, int n) {
    if (money == 0) return 1;
    if (money < 0) return 0;
    if (n <= 0 && money > 0) return 0;

    return countChange(money, coins, n - 1) + countChange(money - coins[n - 1], coins, n);
}

int countChange(int money, const vector<int> &coins) {
    return countChange(money, coins, coins.size());
}

void showChange(int money, const vector<int> &coins, int n, vector<int> &current) {
    if (money == 0) {
        for (int c : current) cout << c << " ";
        cout << endl;
        return;
    }
    if (money < 0 || n <= 0) return;

    showChange(money, coins, n - 1, current);

    current.push_back(coins[n - 1]);
    showChange(money - coins[n - 1], coins, n, current);
    current.pop_back();
}

int main() {
    int n;
    cout << "Ingrese el numero de denominaciones de monedas: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Ingrese las denominaciones: ";
    for (int i = 0; i < n; i++) cin >> coins[i];

    int money;
    cout << "Ingrese la cantidad a cambiar: ";
    cin >> money;

    cout << "\nNumero de maneras de dar cambio de " << money << " es: "
         << countChange(money, coins) << "\n";

    cout << "\nCombinaciones posibles:\n";
    vector<int> current;
    showChange(money, coins, coins.size(), current);

    return 0;
}