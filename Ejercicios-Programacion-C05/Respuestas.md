
1.) El valor es de 51 para la variable del hijo, en este caso la variable tomará valores diferentes para cada proceso, mietras para el padre son 54 padre el hijo tomará un valor de 51 .

2.) Cualquiera de los pueden acceder al descriptor del archivo retornado por la funcion open, si ambos acceden a la vez el programa priorizará a uno de los dos y cuando este finalice continua con el otro

3.) Se utiliza la funcion sleep para esperar la respuesta de padre e hijo, de esta manera se garantiza que sea uno a la vez.

5.) La funcion wait retorna el PID del hijo y al usar wait en el hijo retorna un error como -1 dando a entender que wait es una funcion invalida para este proceso ya que no tiene un hijo al cual esperar.

6.) La función waitpid() es útil cuando se tienen varios procesos hijos o se necesita trabajar sobre uno en específico. Esta función suspende el proceso en curso hasta que un hijo que se especifica mediante el argumento pid ha finalizado.

7.) Cuando la funcion printf es llamada por el hijo esta imprime normalmente en la consola, pero al cerrarse la salida predeterminada bloquea esta instrucción.
