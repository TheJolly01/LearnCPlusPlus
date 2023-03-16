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
I tipi primitivi hanno un limite in byte e in grandezza numerica, che si posson ottenere con i comandi
        
        sizeof(type); //restituisce il risultato in byte
        std::numeric_limits<type>, //collegato alle funzioni max() e min() tramite :: ci restituisce il massimo e il minimo del tipo indicato tra <>

#### NUMERI INTERI

Il tipo <b>int</b> è utilizzato per rappresentare numeri interi, positivi o negativi.
È possibile alterare la dimensione degli int tramite l'uso di alcuni modificatori:

- short
- long
- long long
- signed
- unsigned

#### CARATTERI

Il tipo <b>char</b> è utilizzato per la rappresentazione di singoli caratteri o stringhe di testo.
È possibile utilizzare i modificatori di segno, ma non di dimensione.

#### VALORI BOOLEANi

Il tipo <b>bool</b> viene usato epr rappresentare due valori, vero (true) e falso (false).

#### VOID

Il tipo <b>void</b> è utilizzato per indicare un set di valori vuoto o indefinito. È un tipo incompleto, nel senso che non può essere allocato, non si possono usare reference o array di elementi void. È quindi definibile solo come puntatore o come tipo di ritorno per funzioni che non restituiscono un risultato.

### TIPI COMPOSTI
Sono tipi costituiti a partire da quelli fondamentali. Sono tipicamente definiti tramite costrutti struct o class e template.

#### STRINGHE
Uno dei più importanti tipi composti, nativo della libreria standard di C++, la String library, è il tipo string.
Questo consente di manipolare sequenze di caratteri in modo più agevole rispetto alla gestione di un array di char, grazie alla definizione di alcuni metodi che ci consentono di stabilire la dimensione della stringa, concatenare stringhe differenti e cercare o sostituire sequenze di caratteri.

Esistono tante varianti del tipo string, a seconda del tipo base sottostante:

        std:string(char)
        std:wstring(wchar_t)
        std:u16string(char16_t)
        std:u32string(char32_t)
        
Per utilizzare la libreria string è necessario includere il relativo header file con la seguente istruzione nei propri sorgenti.

## PROCESSO DI COMPILAZIONE

Inizialmente abbiamo il codice scritto da noi, più eventuali librerie incluse, pronti per essere compilati
Il processo di compilazione di C++ si articola in diverse fasi:

  1. Il codice passa per il preprocessore che farà ottenere un file modificato con l'espansione di macro e inclusioni degli headers, avente estensione .ii
  2. Passa per il compilatore, che lo trasforma in un file assembly, con estensione .s
  3. Viene tradotto dall'assemblatore (o assembler) in codice oggetto con estensione .o
  4. Infine passa per il linker che lo rende finalmente un file eseguibile.
