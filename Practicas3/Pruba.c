/*
Algoritmo: Descuntos
Analisis
    1000 -- unidad
    +12 hasta 24 -- -10%
    +24 ---- -%15 
    jubilados --- -%10
    Datos: cantUnid, total, descuento // numero reales
            jubilado // datos booleanos
    Resultado: descuento
    Relacion:
        mensaje: "No hay descuento" y se cumple (cantUnid < 12) y  (jubilado = false)
        o bien
        mensaje: "El descuento es %10" y se cumple (cantUnid < 12) y (jubilado = true)
                total <-- (1000 * cantUnid)
                total <-- total - 10%
        o bien
        mensaje: "El descuento es %10" y se cumple (cantUnid >= 12 & canUnid < 24) y (jubilado = false)
                total <-- (1000 * cantUnid)
                total <-- total - 10%
        o bien
        mensaje: "El descuento es %20" y se cumple (cantUnid >= 12 & canUnid < 24) y (jubilado = true)
                total <-- (1000 * cantUnid)
                total <-- total - 10% + 10%
        o bien
        mensaje: "El descuento es %15" y se cumple (cantUnid >= 24) y (jubilado = false)
                total <-- (1000 * cantUnid)
                total <-- total - 15% 
        o bien 
        mensaje: "El descuento es %25" y se cumple (cantUnid >= 24) y (jubilado = true)
                total <-- (1000 * cantUnid)
                total <-- total - 15% + 10%
       

Diseño
    lexico: cantUnid ∈ Z+
            precio ∈ Z+ 
            jubilado ∈ Logico
            res ∈ R+
    Inicio
        Entrada: cantUnid, jubilado
        precio <-- 1000
        segun:
            (cantUnid < 12) y (jubilado = true): mensaje <-- "El descunto es %10"
            (cantUnid < 12) y (jubilado = false): mensaje <-- "No hay descuento"
            (cantUnid >= 12 y canUnid < 24) y (jubilado = true): mensaje <-- "El descunto es %20"
            (cantUnid >= 12 y canUnid < 24) y (jubilado = false): mensaje <-- "El descunto es %10"
            (cantUnid >= 24) y (jubilado = true): mensaje <-- "El descuento es %25"
            (cantUnid >= 24) y (jubilado = false): mensaje <-- "El descuento es %15"
            
            
            Otros: mensaje <-- "No aplica descunto"
        fsegun
Fin
*/
#include <stdio.h>

const int precio = 1000;
int cantUnid, jubilado;
float total;
float res;
float porcentaje;

int main(){
    printf("Ingrese cantidad de leche: ");
    scanf("%d", &cantUnid);
    printf("Ingrese 1 si es jubilado, 0 si no: ");
    scanf("%d", &jubilado);
    
    if ((cantUnid < 12) && (jubilado == 1)){
        total = precio * cantUnid;
        porcentaje = (0.1) * total;
        res = total - porcentaje;
        
    }else if ((cantUnid < 12) && (jubilado == 1)){
        res = precio * cantUnid;
    }else if ((cantUnid >= 12 && cantUnid < 24) && (jubilado == 0)){
        total = precio * cantUnid;
        porcentaje = (0.1) * total;
        res = total - porcentaje;
    }else if ((cantUnid >= 12 && cantUnid < 24) && (jubilado == 1)) {
        total = precio * cantUnid;
        porcentaje = (0.2) * total;
        res = total - porcentaje;
    }else if ((cantUnid >= 24) && (jubilado == 0)){
        total = precio * cantUnid;
        porcentaje = (0.15) * total;
        res = total - porcentaje;
    }else if ((cantUnid >= 24) && (jubilado == 1)){
        total = precio * cantUnid;
        porcentaje = (0.25) * total;
        res = total - porcentaje;
    }
    printf("El monto final es de: %f", res);
    return 0;
    
}



/*
Algoritmo: Edad
Analisis:
    70 -- sector VIP
    menos 70 -- sector general
    cliente menor 70 --- sector cliente



    Datos: edad, cliente // datos de entrada
    Resultado: mensaje // sector conrrespondiente 
    relacion:   

        mensaje "Sector Vip" y se cumple (edad == 70)
        o bien 
        mensaje "Sector general" y se cumple (edad > 0 y edad < 70) y (cliente = false)
        o bien 
        mensaje "Sector cliente" y se cumple (edad > 0 y edad < 70) y (cliente = true)


Diseño

    Lexico
        edad ∈ Z+
        cliente ∈ Logico
    inicio
        entrada: edad, cliente

    si (edad >= 70) entonces
        mensaje <-- "Sector Vip"
    sino // tiene meno de 70 años
        si (edad > 0 y edad < 70) & (cliente == true) entonces
            mesaje <-- "Sector Clientes"
        sino // es menor de 70 años y no es cliente
                mensaje <-- "Sector General"
        fsi
    fsi
Fin


#include <stdio.h>

int edad, cliente;

int main(){
    printf("ingrese una edad: ");
    scanf("%d", &edad);
    printf("Ingrese 1 si es cliente, 0 si no lo es: ");
    scanf("%d", &cliente);

    if (edad == 70){
        printf("Sector Vip");
    }else if ((edad>0 && edad<70) && (cliente == 0)){
        printf("Sector General");
    }else if ((edad>0 && edad<70) && (cliente == 1)){
        printf("Sector Clientes");
    }
    return 0;
}



*/
/*
Algoritmo
lexico  
    num ∈ Z+
    resultado ∈ cadena
Inicio
    Entrada: num
    si (num >= 50) entonces
        resultado <-- "es mayor o igual e 50"
    sino // es menor e 50
        si (num <= 10) entonces
            resultado <-- "es menor o igual e 10"
        sino // enta entre 10 y 50
            resultado <-- "esta entre 10 y 50"
        fsi
    fsi
    Salida: resultado
Fin

*/