import java.util.Scanner;

public class VersionInicial {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		double numero1, numero2, resultado;
		
		System.out.println("PASCALINA v0.1\n");
		
		System.out.println("Introduce el primer número: ");
		numero1 = in.nextDouble();
		
		System.out.println("Introduce el segundo número: ");
		numero2 = in.nextDouble();
		
		resultado=numero1+numero2;
		
		System.out.println("El resultado de la suma es " + resultado);
		
		
	}

}
