	import java.util.*;

public class VersionInicial {
	 
	    public static void main(String[] args)  {
	    	
	        Scanner sn = new Scanner(System.in);
	        Scanner waitForKeypress = new Scanner(System.in);
	        		
	        boolean salir = false;
	        int opcion;
	        
    		double numero1, numero2, resultado;
	 
	        while (!salir) {
	        	System.out.println("PASCALINA v0.6\n\n");
	        	
	            System.out.println("+---------------------------------------------------------------------+");
	            System.out.println("| \t\t¿Qué operación deseas realizar? \t\t      |");
	            System.out.println("+---------------------------------------------------------------------+");
	            System.out.println("|\t      Pulsa 1 si deseas realizar una suma\t\t      |");
	            System.out.println("|\t      Pulsa 2 si deseas realizar una resta\t\t      |");
	            System.out.println("|\t      Pulsa 3 si deseas realizar una multiplicación\t      |");
	            System.out.println("|\t      Pulsa 4 si deseas realizar una división\t\t      |");
	            System.out.println("+---------------------------------------------------------------------+");
	            System.out.println("|\t      Pulsa 0 si deseas salir\t\t\t\t      |");
	            System.out.println("+---------------------------------------------------------------------+");

	 
	            try {
	 
	                System.out.print("|\t      Escribe una de las opciones: ");
	                opcion = sn.nextInt();
	                System.out.println("+---------------------------------------------------------------------+\n");
	                switch (opcion) {
                    	case 0:
                    		salir = true;
                    		break;
	                	case 1:
	                		
	                		System.out.print("|\t      Introduce el primer número: ");
	                		numero1 = sn.nextDouble();
	                		
	                		System.out.print("|\t      Introduce el segundo número: ");
	                		numero2 = sn.nextDouble();
	                		
	                		resultado=numero1+numero2;
	                		
	                		System.out.println("|\t      El resultado de la suma es " + resultado + "\n");
	                		System.out.print("|\t      Presiona la tecla Enter para continuar");
	                		waitForKeypress.nextLine(); 
	                		
	                        break;
	                    case 2:
	                    	
	                		System.out.print("|\t      Introduce el primer número: ");
	                		numero1 = sn.nextDouble();
	                		
	                		System.out.print("|\t      Introduce el segundo número: ");
	                		numero2 = sn.nextDouble();
	                		
	                		resultado=numero1-numero2;
	                		
	                		System.out.print("|\t      El resultado de la resta es " + resultado + "\n");
	                		System.out.print("|\t      Presiona la tecla Enter para continuar");
	                		waitForKeypress.nextLine(); 
	                		
	                        break;
	                    case 3:
	                		System.out.print("Introduce el primer número: ");
	                		numero1 = sn.nextDouble();
	                		
	                		System.out.print("Introduce el segundo número: ");
	                		numero2 = sn.nextDouble();
	                		
	                		resultado=numero1*numero2;
	                		
	                		System.out.println("|\t      El resultado de la multiplicación es " + resultado + "\n");
	                		System.out.print("|\t      Presiona la tecla Enter para continuar");
	                		waitForKeypress.nextLine(); 
	                        break;
	                        
	                    case 4:
	                		System.out.println("|\t      Introduce el primer número: ");
	                		numero1 = sn.nextDouble();
	                		
	                		System.out.println("|\t      Introduce el segundo número: ");
	                		numero2 = sn.nextDouble();
	                		
	                		resultado=numero1/numero2;
	                		
	                		System.out.println("|\t      El resultado de la multiplicación es " + resultado + "\n");
	                		System.out.print("|\t      Presiona la tecla Enter para continuar");
	                		waitForKeypress.nextLine(); 
	                        break;

	                    default:
	                        System.out.println("|\t      Por favor, introduce una opción correcta");
	                        System.out.print("|\t      Presiona la tecla Enter para continuar");
	                		waitForKeypress.nextLine(); 
	                }
	            } catch (InputMismatchException e) {
	                System.out.println("|\t      Tienes que insertar un número\n");
	                sn.next();
	                System.out.print("|\t      Presiona la tecla Enter para continuar");
            		waitForKeypress.nextLine(); 
	            }
	        }
	        

	    }
	 
	}
