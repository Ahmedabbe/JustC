#include <stdio.h>
#include <stdlib.h>
/*
	<stdlib> = standard library
	anv�nder f�r att f� tillg�ng tills abs(x) som returner det absoluta v�rdet av x som en int 
*/

#define STRLEN 100
/*
	definerar en global konstant STRLEN = 100 som ska vara v�ran max l�ngd/storlek f�r de str�ngar
	vi anv�nder

	Konstanter brukar skrivas med bara STORA BOKST�VER
*/



void labb1(void);
void labb2(void);
void labb3(void);
void labb4(void);
void labb5(void);
void labb6(void);
void labb7(void);
void labb8(void);
void newlabb(void); // skapar bara lite nya rader mellan labbarna




int main(void)
{
	// k�r v�ra labbar i sekvens
	labb1();
	labb2();
	labb3();
	labb4();
	labb5();
	labb6();
	labb7();
	labb8();
}

void labb1(void) // Skriv ut Hello + ditt namn i Console applikationen p� sk�rmen
{
	newlabb();
	char namn[STRLEN] = "skriv in ditt namn har";
	/*
		Deklarerar en array av char(characters) av l�ngden STRLEN som �r 100
		och initierar den med str�ngen "skriv in ditt namn h�r"
	*/

	printf("Hello %s", namn);
	/*
		Skriver ut str�ngen "hello %s" d�r %s �r "format specifier" f�r en "str�ng" dvs en array av chars.
		printf stoppar in namn arrayen i str�ngen p� platsen d�r vi placerat v�ran format specifierare
	*/

}

void labb2(void)
/*
	Skapa en Application.
		a. Skapa en variabel string name med ditt namn
		b. Skapa en int age med din �lder.
		c. Skriv sedan ut Jag heter Kalle (inneh�llet i name) och �r 27(inneh�llet i age) �r.
*/
{
	newlabb();
	char namn[STRLEN] = "skriv in ditt namn har";
	int age = 0; // skriv in din �lder h�r, bra vana att initiera dina variabler.

	printf("Jag heter %s och ar %d ar gammal", namn, age);
	/*
		skriver ut str�ngen och ers�tter de placerade format specifiers med variablerna.
		viktigt att t�nka p� att de m�ste vara i samma ordning fr�n v�nster till h�ger.
		s� "%s... %d" , namn(str�ng), age(integer).
	*/
}

void labb3(void)
/*
	Skapa en applikation d�r anv�ndaren matar in f�r och efternamn.
		a. Skriv ut Skriv in ditt f�rnamn: . Ta emot v�rdet i en variabel
		b. L�t mark�ren v�nta p� din inmatning p� samma rad.
		c. G�r p� samma s�tt med efternamnet.
		d. Skriv sedan ut namnen i omv�nd ordning.
		e. Se till att resultatet ser ut s� h�r.(stefans bild!)
*/
{
	newlabb();
	char fornamn[STRLEN], efternamn[STRLEN];
	printf("skriv in ditt fornamn: ");
	scanf("%s", fornamn);
	/*
		beh�ver inte anv�nda address-of operat�r "&" f�r arrayers d� de
		arrayer redan anv�nder "pass-by-reference" ist�llet f�r "pass-by-value"
	*/
	printf("\nskriv in ditt efternamn: ");
	scanf("%s", efternamn);
	printf("\nDu heter %s, %s", efternamn, fornamn); // ordningen �r viktig

}
void labb4(void)
/*
	Skapa en applikation d�r anv�ndaren matar in tv� tal
		a. Skriv in Mata in tal 1:
		b. Ta emot detta tal i en variabel
		c. Skriv in Mata in tal 2:
		d. Ta emot v�rdet p� detta tal
		e. Skriv ut p� sk�rmen - Summan av tal1 och tal 2 �r: summan
*/
{
	newlabb();
	int tal1 = 0, tal2 = 0; // g�r att deklarera och initiera variabler av samma typ p� en rad

	printf("Mata in tal 1: ");
	scanf("%d", &tal1);
	/*
		grunddatatyper beh�ver du anv�nda address-of operat�r "&" f�r "pass-by-reference"
		f�r att scanf(scan format?) ska kunna �ndra variabel
	*/
	printf("\nMata in tal 2: ");
	scanf("%d", &tal2);
	printf("\nSumman av tal1 och tal2 �r: %d", tal1 + tal2);
}

void labb5(void)
/*
	Skriv ett program som tar in ett f�delse �r fr�n anv�ndaren.
		a. Ta emot f�delse�ret och r�kna ut personens �lder
		b. Skriv p� sk�rmen- Din �lder �r : �lder
		c. Pr�va att s�tta dagens datum i en variabel och utg� fr�n �rtalet i detta datum i din ber�kning.
*/
{
	newlabb();
	int date_of_birth = 0, current_year = 2020;
	printf("Skriv in fodelsear: ");
	scanf("%d", &date_of_birth);
	printf("\nDu ar %d ar gammal", current_year - date_of_birth);
}

void labb6(void)
/*
	Mata in tv� tal och returnera medelv�rde, summa och differens mellan dessa tal
		a.Skriv in Mata in tal 1:. Ta emot i en variabel
		b.Skriv Mata in tal 2: . Ta emot i en variabel
		c.R�kna ut medelv�rde, summa och differens mellan dessa tv� tal
		d. Skriv ut de ber�knade v�rdena p� sk�rmen
*/
{
	newlabb();
	int tal1, tal2;
	printf("Mata in tal1: ");
	scanf("%d", &tal1);
	printf("\nMata in tal2: ");
	scanf("%d", &tal2);
	printf("\nMedelvarde: %.2f\nSumma: %d\nDifferens: %d", (float)(tal1 + tal2) / 2, tal1 + tal2, abs(tal1 - tal2));
	/*
		H�r h�nder det lite grejer.
			"Medelvarde: %.2f" d�r v�ran format specifier s�ger vi att ska trycka ut en float med tv� decimalpunkter.
			det syns genom tv�an efter punkten ".2f".
			"(float)" �r en explicit kastning av utr�kningen (tal1 + tal2)/2 fr�n int till float.
			hade vi inte kastat om utr�kningen hade datorn rundat av utr�kningen till ett heltal(int).
			"abs(tal1-tal2)" vi stoppar in skillnaden mellan tal1 och tal2 in i en funktion "abs()" fr�n <stdlib.h>
			som returnerar det absoluta v�rdet(positiva) av dess argument.
	*/
}
void labb7(void)
/*
	Be anv�ndaren mata in en summa.
		L�gg p� 25% moms dvs summan g�nger 0,25 och skriv p� sk�rmen den nya summan med moms
*/
{
	newlabb();
	int summa = 0;
	printf("Mata in din summa: ");
	scanf("%d", &summa);
	printf("Med moms: %.2f", summa * 1.25);
}
void labb8(void)
/*
	Skapa ett program d�r anv�ndaren matar in ett antal minuter(minst 60 minuter). Programmet omvandlar sedan detta till timmar och minuter.
		a. Skriv in �Mata in antal minuter:�
		b. Ta emot detta tal
		c. R�kna om detta till antal timmar och minuter
		d. Skriv ut p� sk�rmen- Detta �r .. timmar och � minuter
*/
{
	newlabb();
	int minutes = 0, hours = 0;
	do
	{
		printf("Mata in antal minuter: ");
		scanf("%d", &minutes);
	} while (minutes < 60);
	hours = minutes / 60; // minuter delat p� m�ngden minuter i en timme
	minutes = minutes % 60; // modul, rest division(maths)
	printf("Detta ar %d timmar och %d minuter", hours, minutes);
}
void newlabb(void)
{
	printf("\n\n");
}