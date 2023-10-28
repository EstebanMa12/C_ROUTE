// Modificadores de placeholders
//
// %d o %i: Entero con signo
// %u: Entero sin signo
// %o: Entero octal
// %x: Entero hexadecimal
// %f: Punto flotante
// %e: Notación científica
// %g: Punto flotante o notación científica
// %c: Caracter
// %s: Cadena de caracteres
// %p: Puntero
// %n: Número de caracteres escritos hasta el momento
// %%: Imprime un signo de porcentaje
//
// MODIFICADORES
// printf("Aquí viene un número: %2$i, %1$i\n",1234,5678);
// Output: Aqui viene un número: 5678, 1234
// En este caso al poner un número y el signo dollar indicamos la posición del argumento que queremos tomar
//
// printf("Aquí viene un número: %*i\n",10,1234);
// Output: Aqui viene un número:       1234
// En este caso el asterisco indica que se va a tomar el número que se encuentra en la siguiente posición
// como el número de espacios que se van a dejar antes de imprimir el número
//
// printf("Aquí viene un número: %0*i\n",10,1234);
// Output: Aqui viene un número: 0000001234
// En este caso el cero indica que se van a rellenar los espacios con ceros
//
// printf("Aquí viene un número: %*.*f\n",10,2,1234.5678);
// Output: Aqui viene un número:    1234.57
// En este caso el primer asterisco indica que se va a tomar el número que se encuentra en la siguiente posición  
// como el número de espacios que se van a dejar antes de imprimir el número
// El segundo asterisco indica que se va a tomar el número que se encuentra en la siguiente posición  
// como el número de decimales que se van a imprimir
//
// También se puede alinea lo quie se quiere imprimir, para dar una sensación de belleza
// printf("Aquí viene un número: %10.2f\n",1234.5678);
// Output: Aqui viene un número:    1234.57
// En este caso el número 10 indica que se van a dejar 10 espacios antes de imprimir el número
// El número 2 indica que se van a imprimir 2 decimales
//
// printf("Aquí viene un número: %-10.2f\n",1234.5678);
// Output: Aqui viene un número: 1234.57
// En este caso el número 10 indica que se van a dejar 10 espacios antes de imprimir el número
// El número 2 indica que se van a imprimir 2 decimales
// El signo menos indica que se va a alinear a la izquierda
//
// En los hexadecimales 
// printf("Aquí viene un número: %x\n",1234);
// Output: Aqui viene un número: 4d2
// printf("Aquí viene un número: %X\n",1234);
// Output: Aqui viene un número: 4D2
//
//Cuando  se utiliza la almohadilla como a continuación, se establece que siempre imprima el 0x antes de cada hexadecimal 
// printf("Aquí viene un número: %#x\n",1234);
// Output: Aqui viene un número: 0x4d2
//
