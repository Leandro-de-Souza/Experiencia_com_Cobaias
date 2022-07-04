#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

      int N, ratos, sapos, coelhos, quantCobaias, total;
      char tipo;
      double percentualR, percentualS, percentualC;

      cout << "Quantos casos de teste serao digitados? ";
      cin >> N;

      ratos = 0;
	  sapos = 0;
	  coelhos = 0;

	  for (int i = 0; i < N; i++) {
           cout << "Quantidade de cobaias: ";
           cin >> quantCobaias;
           cout << "Tipo de cobaia: ";
           cin >> tipo;

        if (tipo == 'R') {
        ratos = ratos + quantCobaias;
        }
        else if (tipo == 'S') {
            sapos = sapos + quantCobaias;
        }
        else {
            coelhos = coelhos + quantCobaias;
        }
    }

    total = ratos + sapos + coelhos;
    percentualC = ((double)coelhos / total) * 100.0;
    percentualR = ((double)ratos / total) * 100.0;
    percentualS = ((double)sapos / total) * 100.0;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualC << endl;
    cout << "Percentual de ratos: " << percentualR << endl;
    cout << "Percentual de sapos: " << percentualS << endl;


    return 0;
}
