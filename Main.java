import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, ratos, sapos, coelhos, quantCobaias, total;
	    char tipo;
	    double percentualR, percentualS, percentualC;
		
	    System.out.print("Quantos casos de teste serao digitados? ");
	    N = sc.nextInt();
	    
	    ratos = 0;
		sapos = 0;
		coelhos = 0;
		
		for (int i = 0; i < N; i++) {
			System.out.print("Quantidade de cobaias: ");
			quantCobaias = sc.nextInt();
			System.out.print("Tipo de cobaia: ");
			tipo = sc.next().charAt(0);
			
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
		    
		    System.out.println();
		    System.out.println("RELATORIO FINAL:");
		    System.out.println("Total: " + total + " cobaias");
		    System.out.println("Total de coelhos: " + coelhos);
		    System.out.println("Total de ratos: " + ratos);
		    System.out.println("Total de sapos: " + sapos);
		    System.out.println("Percentual de coelhos: " + String.format("%.2f", percentualC));
		    System.out.println("Percentual de ratos: " + String.format("%.2f", percentualR));
		    System.out.println("Percentual de sapos: " + String.format("%.2f", percentualS));
		    
		    sc.close();    
	    
	}

}
