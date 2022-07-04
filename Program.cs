using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_EXPERIENCIAS {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, ratos, sapos, coelhos, quantCobaias, total;
            char tipo;
            double percentualR, percentualS, percentualC;

            Console.Write("Quantos casos de teste serao digitados? ");
            N = int.Parse(Console.ReadLine());

            ratos = 0;
            sapos = 0;
            coelhos = 0;

            for (int i = 0; i < N; i++) {
                Console.Write("Quantidade de cobaias: ");
                quantCobaias = int.Parse(Console.ReadLine());
                Console.Write("Tipo de cobaia: ");
                tipo = char.Parse(Console.ReadLine());

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

            Console.WriteLine();
            Console.WriteLine("RELATORIO FINAL:");
            Console.WriteLine("Total: " + total + " cobaias");
            Console.WriteLine("Total de coelhos: " + coelhos);
            Console.WriteLine("Total de ratos: " + ratos);
            Console.WriteLine("Total de sapos: " + sapos);
            Console.WriteLine("Percentual de coelhos: " + percentualC.ToString("F2", CI));
            Console.WriteLine("Percentual de ratos: " + percentualR.ToString("F2", CI));
            Console.WriteLine("Percentual de sapos: " + percentualS.ToString("F2", CI));

        }
    }
}
