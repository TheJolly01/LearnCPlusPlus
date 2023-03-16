# C++

## BASI

### COMMENTI

I commenti possono essere fatti su una o più righe. 
I commenti su una riga vengono fatti  tramite il doppio slash.

    // Questo è un commento in C++
    
I commenti su più righe invece vengono fatti contenere tra slash e asterisco

    /* Questo è un commento
       svolto su più righe
       in C++
    */
    
### DIRETTIVA AL PREPROCESSORE

Si intende un tipo di istruzione che verrà eseguita nella fase preliminare del processo di trasformazione del codice sorgente in eseguibile.
Quindi stiamo dicendo al compilatore che il nostro programma farà utilizzo di qualsiasi cosa noi dichiariamo in fase di precompilazione
Utilizziamo queste direttive, ad esempio, per dichiarare le librerie che andremo ad utilizzare.
Per indicare le direttive di preprocessore utilizziamo il carattere #

### DICHIARAZIONE LIBRERIE

Le librerie vanno dichiarate all'inizio del programma con il simbolo di direttiva al preprocessore #
Dopo andrà inserito il comando import che serve appunto per importare la libreria, e il nome della libreria contenuto tra <> o ""

    #include <iostream>
    
### CLASSI

Le classi si definiscono tramite la keyword class seguita dal nome della classe

    class Greater{
    
    }
    
    
### Metodi

I metodi sono definiti con il tipo di ritorno seguito dal nome del metodo e lparentesi in cui inserire eventuali parametri.
    
    void sayHello(){
    
    }
    
### MAIN

In C++ il metodo main ha tipo di ritono int.

    int main(){
      return 0;
    }
Possiamo notare che restituisce 0 alla fine della sua esecuzione, che in C++ viene gestito come terminazione normale del programma.


### TIPI PRIMITIVI O FONDAMENTALi

Sono i tipi che consentono di rappresentare informazioni semplici, come numeri, testo, booleani etc.

#### NUMERI INTERI

Il tipo <b>int</b> è utilizzato per rappresentare numeri interi, positivi o negativi.
È possibile alterare la dimensione degli int tramite l'uso di alcuni modificatori:

- short
- long
- long long
- signed
- unsigned

#### CARATTER

Il tipo <b>char</b> è utilizzato per la rappres


## PROCESSO DI COMPILAZIONE

Inizialmente abbiamo il codice scritto da noi, più eventuali librerie incluse, pronti per essere compilati
Il processo di compilazione di C++ si articola in diverse fasi:

  1. Il codice passa per il preprocessore che farà ottenere un file modificato con l'espansione di macro e inclusioni degli headers, avente estensione .ii
  2. Passa per il compilatore, che lo trasforma in un file assembly, con estensione .s
  3. Viene tradotto dall'assemblatore (o assembler) in codice oggetto con estensione .o
  4. Infine passa per il linker che lo rende finalmente un file eseguibile.
