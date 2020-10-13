#include <stdio.h>
#include <string.h> // funktioner relaterande till str�ngar
#include <stdlib.h> // inneh�ller en massa kul grejer( atoi() )
#include <ctype.h> // inkluderad f�r tolower()


#define STRLEN 100


void labb1(void);
void labb2(void);
void labb3(void);
void labb4(void);
void labb5(void);
void labb6(void);
void labb7(void);
void labb8(void);
void labb9(void);
void labb10(void);




void main(void)
{
	labb1();
	labb2();
	labb3();
	labb4();
	labb5();
	labb6();
	labb7();
	labb8();
	labb9();
	labb10();
}
void labb1(void)
/*
	Be anv�ndaren att mata in ett tal.
		Kontrollera om talet �r st�rre �n 10.
		Meddela anv�ndaren om talet �r st�rre �n 10- Talet �r st�rre �n 10.
		Om det �r mindre �n 10 meddela anv�ndaren � Talet �r mindre �n 10
*/
{
	int tal = 0, kontroll = 10;

	printf("Mata in tal: ");
	scanf("%d", &tal);
	if (tal > kontroll)
	{
		printf("\nTalet ar storre an 10.");
	}
	else if (tal < kontroll)
	{
		printf("\nTalet ar mindre an 10.");
	}
}
void labb2(void)
/*
	Be anv�ndaren att mata in hur m�nga paket mj�lk som finns kvar.
		�r det mindre �n 10 skriv- Best�ll 30 paket.
		�r det mellan 10 och 20 skriv- Best�ll 20 paket.
		Annars skriv-Du beh�ver inte best�lla n�gon mj�lk.
*/
{
	int nr_milk_cartons = 0;
	printf("\nHur manga mjolk paket finns kvar?: ");
	scanf("%d", &nr_milk_cartons);
	if (nr_milk_cartons < 10)
	{
		printf("\nBestall 30 paket.");
	}
	else if (nr_milk_cartons >= 10 && nr_milk_cartons <= 20) // booleskt uttryck && == "and" i python
	{
		printf("\nBestall 20 paket mannen.");
	}
	else printf("\nBehover ingen mjolk.");
}
void labb3(void)
/*
	Be anv�ndaren mata in temperaturen tagen fr�n en febertermometer.
		Om tempen �r �ver 37.8 skriv- Du har feber.
		Om den �r �ver 39.5 skriv-Du b�r upps�ka l�kare.
		Om den �r mindre �n 37.8 skriv- Du har inte feber.
*/
{
	float temperature = 0;
	printf("\nMata in temperatur: ");
	scanf("%d", &temperature);
	if (temperature > 39.5) printf("\nDu bor uppsoka lakare.");
	else if (temperature > 37.8) printf("\nDu har feber");
	else printf("\nDu har inte feber.");
}
void labb4(void)
/*
	Be anv�ndaren mata in sin �lder.
		Om den �r mindre �n 18 �r anv�ndaren ej myndig. Om den �r �ver 65 �r den pension�r.
		Annars �r den myndig men inte pension�r. Meddela anv�ndaren om vad som g�ller beroende p� dennes �lder.
		Kontrollera ocks� att anv�ndaren har matat in ett riktigt tal.
		Har den matat in andra tecken �n siffror meddela anv�ndaren att den har ar matat in en felaktig �lder.
*/
{
	char input[STRLEN];
	int age = 1;
	printf("\nAnge alder: ");
	scanf("%s", input);

	if (age = atoi(input))
		/* atoi() returnerar int v�rdet av input om det g�r annars returnerar den 0
		*  I C s� �r 0 == False n�r den utv�rderas som ett booleskt uttryck
		*  s� den h�r if satsen kollar om det g�r att konvertera input till en integer
		*/
	{
		if (age < 18) printf("\nEj myndig");
		else if (age >= 18 && age <= 65) printf("\nMyndig, ej pensionar");
		else if (age < 65) printf("\nPensionar!");
		else printf("\nFelaktig alder");
	}
	else printf("\nFelaktig inmatning");
}
void labb5(void)
/*
	Be anv�ndaren ange vilken kategori den tillh�r-vuxen, pension�r, student.
		Om den �r pension�r eller student kostar resan 20 kr.
		Om den �r vuxen kostar resan 30 kr.
		Annars skall anv�ndaren informeras att den har angett en felaktig kategori.

	Vill stefan att man ska anv�nda str�ngar h�r? kommer ju senare
*/
{
	int category = 0;
	printf("\nAnge kategori(1, vuxen, 2 student, 3 pensionar): ");
	scanf("%d", &category);
	if (category == 2 || category == 3) printf("\nResan kostar 20 kr"); // dubbla strecken || == "or" i python.
	else if (category == 1) printf("\nResan kostar 30 kr");
	else printf("\nFelaktig inmatning");
}
void labb6(void)
/*
	Be anv�ndaren mata in sitt f�delse �r.
		Om det �r st�rre eller lika med 1980 men mindre �n 1990 skriv ut �Du �r f�dd p� 1980-talet.
		Om det �r mindre �n 2000 men st�rre �n eller lika med 1990 skriv ut- Du �r f�dd p� 1990-talet.
		Om det �r mindre �n 1980 eller st�rre �n eller lika med 2000, skriv- Du �r inte f�dd p� 1990 eller 1980-talen.
*/
{
	int birth_date = 0;
	printf("\nAnge fodelsear: ");
	scanf("%d", &birth_date);
	if (birth_date >= 1980 && birth_date < 1990) printf("\nFodd pa 80-talet");
	else if (birth_date >= 1990 && birth_date < 2000) printf("\nFodd pa 90-talet-basta talet");
	else printf("\nInte fodd pa 90 eller 80 -talen");
}
void labb7(void)
/*
	Skapa en inloggning d�r anv�ndaren f�rst f�r ange anv�ndarnamn och sedan l�senord.
		Ange det som du anser vara riktiga uppgifter i tv� konstanter i koden.
		Kontrollera sedan om det �r riktigt inmatat och meddela anv�ndare om
		den antingen �r inloggad eller matat in fel l�senord eller fel anv�ndarnamn
*/
{
	char username[] = "admin", password[] = "password";
	char input_username[STRLEN], input_password[STRLEN];
	printf("\nMata in anvandarnamn: ");
	scanf("%s", input_username);
	printf("Mata in losenord: ");
	scanf("%s", input_password);
	if (!strcmp(username, input_username) && !strcmp(password, input_password)) printf("\ninloggad");
	// strcmp() fr�n <string.h> j�mf�r str�ngar, returnerar 0 om de �r lika. uttropstecknet i C �r lika med "not" i python
	// s� !strcmp(username, input_username) ger True ifall str�ngarna matchar, det �r lite dubbel negativ.
	// strcmp ger 0 som �r lika med False om str�ngarna matchar, men med v�rat "!" s� letar vi efter False som d� blir utv�rderad som True
	// f�r vi hittade vad vi letade efter! kanske �r lite r�rigt.
	else
	{
		if (strcmp(username, input_username)) printf("\nFel anvandarnamn"); // h�r kollar vi om strcmp() inte ger 0, dvs str�ngarna matchar inte!
		if (strcmp(password, input_password)) printf("\nFel losenord");
	}
}
void labb8(void)
/*
	Be anv�ndaren att mata in namnet p� ett land d�r den bor.
		Om det �r Sverige, Danmark, eller Norge skall anv�ndare informeras att-Du bor i Skandinavien.
		Om inte meddela anv�ndaren att den inte bor i Skandinavien.
*/
{
	char scandinavian_countries[] = "sverigedanmarknorge";
	char your_country[STRLEN];
	printf("\nMata in ditt land: ");
	scanf("%s", your_country);
	for (int index = 0; index < strlen(your_country); index++)
		your_country[index] = tolower(your_country[index]);
	/*
		Okej f�rst har vi en loop som g�r igenom str�ngen d�r vi tryckte in v�r input
		sen p� varje plats i den h�r str�ngen ers�tter vi char:en med en lowercase av den char:en
		genom funktionen tolower() som tar en char som argument och returnerar en lowercase version
		av den char:en
	*/
	if (strstr(scandinavian_countries, your_country)) printf("\nDu bor i skandinavien");
	/*
		strstr() letar efter substr�ngen(your_country) i huvudstr�ngen(scandinavian_countries) och returnerar en pekare(n�nting)
		till den f�rsta platsen den hittar den och NULL om inte. Rent praktiskt om du anv�nder den i if sats s� betyder den utv�rderas
		till True ifall den hittar substr�ngen. d� i C s� �r typ allt == True
	*/
	else printf("\nDu bor inte i skandinavien");
}
void labb9(void)
/*
	Be anv�ndaren mata in ett bilm�rke.
	Om det inte �r lika med Volvo skall du kontrollera om det �r en Volkswagen, BMW eller Audi. Skriv ut att bilen �r tysk.
	Om den �r Renault eller Peugeot eller Citroen skriv att den �r fransk.
	Annars skriv ut att bilen inte �r tysk eller fransk eller svensk.
	Skriv inget om bilen �r en Volvo.
*/
{
	char car_brand[STRLEN];

	printf("\nMata in bilmarke: ");
	scanf("%s", car_brand);
	for (int index = 0; index < strlen(car_brand); index++)
		car_brand[index] = tolower(car_brand[index]);
	if (strcmp(car_brand, "volvo"))
	{
		if (strstr("volkswagenbmwaudi", car_brand)) printf("\nBilen ar tysk");
		else if (strstr("renaultpeugeotcitroen", car_brand)) printf("\nBilen ar fransk");
		else printf("\nEj fransk eller tysk");
	}
}
void labb10(void)
/*	Be anv�ndaren mata in en summa p� hur mycket pengar den har.
		Be sedan anv�ndaren att ange om den har rabatt.
		a. Om summan �r mellan 15 och 25 och anv�ndaren inte har rabatt skriv � Du kan k�pa en liten hamburgare. b
		. Om summan �r mellan 15 och 25 och anv�ndaren har rabatt skriv � Du kan k�pa en liten hamburgare och en pommes frites.
		c. Om summan �r st�rre �n 25 och mindre �n eller lika med 50 och anv�ndaren inte har rabatt skriv � Du kan k�pa en stor hamburgare.
		d. Om summan �r st�rre �n 25 och mindre �n eller lika med 50 och anv�ndaren har rabatt skriv � Du kan k�pa en stor hamburgare och pommes frites.
		e. Om summan �r st�rre �n 60 eller om den �r 50 och 60 och anv�ndaren har rabatt skriv � Du kan k�pa ett meal med dryck.
*/
{
	int summa = 0;
	char rabatt = 'n';
	printf("Skriv in hur mycket du har: ");
	scanf("%d%*c", &summa);
	printf("Har du rabatt?(j/n): ");
	scanf("%c", &rabatt);
	if (summa >= 15 && summa <= 25)
	{
		if (rabatt == 'j') printf("\nLiten Hamburgare & Pommes");
		else printf("\nLiten Hamburgare");
	}
	else if (summa > 25 && summa <= 50)
	{
		if (rabatt = 'j') printf("\nStor hamburgare & pommes");
		else printf("\nStor hamburgare");
	}
	else if ((summa > 60 || summa == 50 || summa == 60) && rabatt == 'j') printf("\nMeal med dryck"); // parenteser mannen!

}