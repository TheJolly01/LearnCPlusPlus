# IL LINGUAGGIO C++

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

#### Numeri interi

Il tipo <b>int</b> è utilizzato per rappresentare numeri interi, positivi o negativi.
È possibile alterare la dimensione degli int tramite l'uso di alcuni modificatori:

- short
- long
- long long
- signed
- unsigned

#### Caratteri

Il tipo <b>char</b> è utilizzato per la rappresentazione di singoli caratteri o stringhe di testo.
È possibile utilizzare i modificatori di segno, ma non di dimensione.

#### Valori booleani

Il tipo <b>bool</b> viene usato epr rappresentare due valori, vero (true) e falso (false).

#### Void

Il tipo <b>void</b> è utilizzato per indicare un set di valori vuoto o indefinito. È un tipo incompleto, nel senso che non può essere allocato, non si possono usare reference o array di elementi void. È quindi definibile solo come puntatore o come tipo di ritorno per funzioni che non restituiscono un risultato.

### TIPI COMPOSTI
Sono tipi costituiti a partire da quelli fondamentali. Sono tipicamente definiti tramite costrutti struct o class e template.

#### Stringhe
Uno dei più importanti tipi composti, nativo della libreria standard di C++, la String library, è il tipo <b>string</b>.
Questo consente di manipolare sequenze di caratteri in modo più agevole rispetto alla gestione di un array di char, grazie alla definizione di alcuni metodi che ci consentono di stabilire la dimensione della stringa, concatenare stringhe differenti e cercare o sostituire sequenze di caratteri.

Esistono tante varianti del tipo string, a seconda del tipo base sottostante:

    std:string(char)
    std:wstring(wchar_t)
    std:u16string(char16_t)
    std:u32string(char32_t)
        
Per utilizzare la libreria string è necessario includere il relativo header file con la seguente istruzione nei propri sorgenti.

    #include <string>

### ENUMERAZIONI

Un <b>enumerazione</b> è un tipo che può assumere un valore in base a un insieme ristrerro di valori interi costanti, alla quale viene associato un nome.
La coppia nome-costante è detta <b>enumeratore</b>.
Per definire un enumerazione si utilizza la parola chiave <b>enum</b>

    enum nomeIdentificativo{
        enumeratore,
        enumeratore,
        ...,
        enumeratore
        };
            
Con questa sintassi, non abbiamo bisogno di definire il valore di ciascun enumeratore, in quanto viene assegnato automaticamente, partendo da 0.
Se vogliamo possiamo assegnare un valore al nostro enumeratore seguendolo da un uguale.

    enum nomeIdentificativo{
        enumeratore1
        enumeratore2 = 10,
        enumeratore3
        enumeratore4 = 54,
        enumeratore5
        };

Se assegniamo a un determinato enumeratore un valore, e l'enumeratore seguente non ha nessun valore assegnato, allora assumerà il valore seguente all'enumeratore precedente. Nell'esempio di prima avremo quindi:
    
    enumeratore1 = 0
    enumeratore2 = 10
    enumeratore3 = 11
    enumeratore4 = 54
    enumeratore5 = 55
    
#### Enumerazioni con definizione esplicita del tipo sottostante

Da C++ 11 è possibile indicare esplicitamente anche il tipo dell'enumerazione in questo modo

    enum nomeIdentificativo : tipo{
        enumeratore = valore,
        enumeratore = valore,
        enumeratore = valore,
        ...,
        enumeratore = valore
        };
            
Sono ammessi i tipi char, int, short int, long int, long long, e bool
I tipi float, double e long double non sono ammessi e producono errore di compilazione se usati.
Con i char puo ammettere valori anche numerici purchè siano rappresentabili in 8 bit

Grazie alla definizione esplicita del tipo possiamo dichiarare in precedenza un enumerazione e inizializzarla in un secondo momento in una parte diversa del codice.

    enum frutta : int;
        
Gli enumeratori senza ambito di visibilità sono implicitamente convertiti a variabili di tipo numerico quando necessario:

    enum colore : {rosso, verde, blu};
    int c1 = rosso; // ok, 'colore' non è una enum class
    colore c2 = 2; // errore: la conversione implicita non è bidirezionale!
    colore c3 = (colore) 2; // ok
        
#### Enumerazioni con campo di visibilità

Quando definiamo una enumerazione però possiamo incorrere in dei problemi dato dal fatto che i nomi degli identificatori e quelli delle variabili non possono essere uguali in quanto entrano in conflitto. Da C++ 11 però sono state introdotte le enumerazioni con campo di visibilità che permettono dunque di definire degli enumeratori non utilizzabili nel resto del codice se non tramite un apposito comando.
La definizione di questo tipo di enumerazioni è la seguente:
        
    enum class nomeIdentificativo : tipo
        enumeratore 1,
        enumeratore 2,
        ...,
        enumeratore3
        };
            
Per utilizzare un enumeratore contenuto nell'enumerazione dobbiamo chiamarlo utilizzando l'identificativo dell'enumerazione che noi abbiamo assegnato, però bisogna convertire il nostro enumeratore al tipo desiderato, altrimenti non funzionerà:

    std::cout<< (cast) nomeIdentificativo::enumeratore1<<endl;

Allo stesso modo possiamo assegnare un valore dell'enumeratore a una variabile

    int x = (cast) enum::var

Possiamo ora creare una variabile del tipo enum creato assegnandogli un valore

    enum class forma{ quadrato, cerchio, triangolo};
    forma f1 = fomra::cerchio;

### PUNTATORI

    tipo* identificatore;
    identificatore = new tipo;
    delete identificatore;
        
Nella prima riga possiamo vedere la dichiarazione di un puntatore, composta dal tipo, dal segno * e dal nome dell'identificatore.

Nella seconda riga invece possiamo vedere come quel puntatore viene allocato uno spazio abbastanza grande da contenere un int e dunque inizializzato.

Nella terza riga, tramite la parola chiave delete possiamo cancellare il puntatore, liberando la memoria nello heap.

Accedere a un puntatore non inizializzato o cancellato può portare a comportamenti imprevedibili del compilatore, ma è buona norma cancellare questi puntatori per preservare l'efficienza e la stabilità del programma.
È buona norma cancellare smpre i puntatori anche perchè se un puntatore viene eliminato automaticamente dallo stack, esso occuperà comunque memoria che sarà inutilizzabile fino alla fine del programma, andando incontro a un memory leak!

Se si vuole inizializzare un puntatore senza dargli un valore, anzichè utilizzare lo 0 o la macro NULL, bisogna utilizzare la keyword nullptr

    int* p = nullptr;
    p = new int;
        


#### Suddivisione memoria

- STACK
- HEAP
- BSS SEGMENT - può cambiare durante l'esecuzione
- DATA SEGMENT - può cambiare durante l'esecuzione
- READ ONLY DATA SEGMENT - non cambia durente l'esecuzione
- CODE SEGMENT - non cambia durente l'esecuzione

##### Stack

Lo stack è una struttura dati di tipo lista dove gli elementi sono accessibili con una politica LIFO. Gli elementi dello stack sono detti stack frame e ognuno di essi contiene tutte le variabili definite in un blocco compreso tra parentesi graffe.
Durante l'esecuzione del programma lo stack frame in testa è quello relativo al blocco che contiene l'istruzione correntemente in fase di esecuzione, mentre quelli successivi corrispondono ai blocchi esterni secondo il loro ordine di annidamento.
Le operazioni di allocazione e distruzione dello stack sono molto rapide. Tuttavia lo stack ha un limite preciso, che varia in base a tanti fattori. Quando si supera questo limite si va incontro a un errore, chiamato stack overflow. Quando vogliamo tenere in memoria una grande quantità di dati quindi ci affidiamo all'heap.

##### Heap

Heap ignifica quantità, ed è una grande area di memoria virtuale riservata al programma.
Per gestire la memoria dello heap serve far ricorso a istruzioni particolari che necessitano l'utilizzo di puntatori.
Anche un heap ha una memoria limitata, pertanto una corretta gestione della memoria è fondamentale.
L'heap è meno efficiente rispetto allo stack ma è indispensabile per la gestione della memoria estesa.

#### Operatori di referenziazione e dereferenziazione

##### Referenziazione

Per assegnare, a un puntatore, un determinato valore non possiamo passargli il valore effettivo, in quanto il puntatore è un tipo che punta alla locazione di memoria del valore che punta. Quindi dovremo dargli un indirizzo di memoria collegato a quel valore. Per fare ciò utilizziamo l'operatore unario di referenziazione <b>&</b>, che restituisce l'indirizzo del dato a cui viene applicato.

      
    int a = 1;
    int* ptr = &a; // dereferenziazione di una variabile
    int** ptr2ptr = &ptr; // dereferenziazione di un puntatore
    
    int**ptr2ptr = &(&a) // errore!

L'operatore non può apparire a sinistra dell'operatore di assegnamento, e non può essere applicato 2 volte di fila.

##### Dereferenziazione

L'operatore contrario alla referenziazione, quindi quello che passa da un puntatore il valore che esso contiene, è l'operatore di deferenziazione <b>*</b>

    int b = *ptr; //referenziazione di un puntatore

L'operatore non può apparire a destra dell'operatore di assegnamneto.

Infine possiamo alternare operatori di referenziazione e di dereferenziazione, ma ciò è superfluo in quanto eseguendo un operazione di referenziazione e una di dereferenziazione otterremo il valore dell'elemento a cui stiamo effettuando le operazioni, in quanto si annullano a vicenda.

### VARIABILI REFERENCE

Le variabili reference sono un metodo di indirizzament odella memoria alternativo all'utilizzo dei puntatori. La particolarità delle variabili reference consiste nella modialità di accesso, che maschera l'operatore di dereferenziazione necessaria per leggere o scrivere un valore nella locazione di memoria contenuta in un normale puntatore. A parte la loro definizione, per le variabili reference ci sono le stesse regole sintattiche valide per l'accesso ad una variabile oridnaria. La variabile reference però non ha una propria locazione di memoria ma punta a quella di una variabile oridnaria esistente. Perciò la loro inizializzazione deve avvnire alla dichiarazione.

	int a = 1;
	int& ref_a = a; // Dichiarazione e inizializzazione variabile reference
	int b = 2;
	ref_a = b; // Errore: non possiamo cambiare riferimento.
	int& r; // errore, una variabile reference deve essere inizializzata.

D'ora in poi quindi qualsiasi modifica su a e su ref_a riflettono l'una sull'altra.
Diciamo quindi che le variabili reference sono come un nome alternativo per quelle ordinarie. Infatti vengono chiamate anche variabili alias.
Le variabili reference e i puntatori sono molto simili, ma a volte è meglio un utilizzo di puntatori, mentre altre è meglio usare le variabili reference. Dipende dai casi.

#### Tipi di variabili reference
A differenza di una variabile ordinaria e una variabile puntatore, che sono considerate come due tipi diversi, una variabile reference è considerata dal compilatore allo stesso modo in cui è considerata la variabile ordinaria. Quindi se una variabile reference punta a una ordinaria di tipo int, la nostra variabile reference sarà di tipo int.

### FUNZIONI
Una funzione è un blocco di codice richiamabile in qualsiasi momento, utile per riutilizzare lo stess codice senza doverlo scrivere più volte.
Questo è un esempio di dichiarazione di una funzione:

	int nomeFunzione(int a, int b, int c);

Il primo tipo nella dichiarazione della funzione è il tipo di ritorno, a seguire abbiamo il nome della funzione e i parametri che la funzione richiede per poter essere richiamata.
Quando si utilizza una funzione in tante parti del codice è opportuna definirla in un header che ne contenga la sola dichiarazione. L'header poi viene richiamato con la keyword #include
	
	//percentuale.h
	float percentuale(int totale, float quota);
	-----------------------------------------------
	//percentuale.cpp
	#include "percentuale.h"
	float percentuale(int totale, float quota){
		return(totale/100.0f) * quota;
	}
	-----------------------------------------------
	//main.cpp
	#include <iostream>
	#include "percentuale.h"
	int main(){
		int a = 500l
		float b = 20.0f;
		std::cout << percentuale(a, b) << std::endl; // 20% di 500
		return 0;
	}
	
Il return seguito da un valore o espressione è l'ultima istruzione eseguita dentro il corpo della funzione. Dopo il return la funzione si chiude e restituisce il valore indicato nel return.

#### Passaggio di parametri per valore o per riferimento

Nelle funzioni qualunque azione che eseguiamo sulle variabili non viene effettuata realmente alle nostre variabili, ma sono a una copia di esse, che sono variabili temporanee e che spariranno una volta che la funzione termina. Questo meccanismo si chiama <b>passaggio per valore</b>. Come esplicita il nome noi passiamo solo il valore attuale di quelle variabili, ma qualunque modifica eseguiamo non cambia il vero valore iniziale, ma solo la sua copia.
Questo meccanismo è utile per preservare lo stato delle variabili e non commettere errori accidentali.

Tuttavia in C++ abbiamo la possibilità di definire funzioni che accettano riferimenti alla memoria come parametri. Questo secondo meccanismo è detto <b>passaggio per riferimento</b>, e prevede l'utilizzo di parametri di tipo puntatore a variabile o variabili reference.

	#include <iostream>
	void swapPointer(int* a, int* b) //swap tramite utilizzo di puntatori
	{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	}
	void swapReference(int& a, int& b) //swap tramite utilizzo di variabili reference
	{
	int tmp = a;
	a = b;
	b = tmp;
	}
	int main()
	{
	int x = 1;
	int y = 2;
	swapPointer(&x, &y);
	std::cout << "x: " << x;
	std::cout << "y: " << y;
	swapReference(x, y);
	std::cout << "x: " << x;
	std::cout << "y: " << y;
	return 0;
	}

Possiamo notare come l'utilizzo di variabili reference e quello di puntatori non cambia, però utilizzando le variabili reference avremo un codice decisamente più leggibile.


## PROCESSO DI COMPILAZIONE

Inizialmente abbiamo il codice scritto da noi, più eventuali librerie incluse, pronti per essere compilati
Il processo di compilazione di C++ si articola in diverse fasi:

  1. Il codice passa per il preprocessore che farà ottenere un file modificato con l'espansione di macro e inclusioni degli headers, avente estensione .ii
  2. Passa per il compilatore, che lo trasforma in un file assembly, con estensione .s
  3. Viene tradotto dall'assemblatore (o assembler) in codice oggetto con estensione .o
  4. Infine passa per il linker che lo rende finalmente un file eseguibile.
