/*
	#include �r C:s motsats till import i Python d�r man g�r ett bibliotek med funktioner(metoder?) tillg�ngliga f�r programmet.
	detta bibliotek (stdio.h) inneh�ller funktioner relaterad till input/output, s� print funktioner, input funktioner och funktioner
	f�r att komma �t filer

	De b�r placeras l�ngst upp i filen d� kompilatorn l�ser uppifr�n och ned. Om du placerar en funktion fr�n stdio.h innan du inkluderad
	den kommer kompilatorn inte fatta vad du menar f�r den har inte l�st in det biblioteket �n, dvs kompilatorn kommer f� ett sm�rre sammanbrott.

*/
# include <stdio.h>

/*
	H�r �r v�ran main funktion, utg�ngspunkten f�r hela v�rt program som du m�ste(s� vitt jag vet iaf) inkludera s� att datorn fattar vart den ska
	b�rja k�ra ifr�n. Super duper duper viktigt, min bok har en stor varningstriangel bara f�r att man ska fatta hur viktig.

	C �r en s� kallad "static typed language" vilket betyder att du m�ste f�rklara typ allt f�r kompilatorn/preprocessorn ska f�rst� vad den h�ller p�
	med. Har att g�ra med n�got skumt minnes hokus pokus som vi kommer komma in lite p� senare(mallooooooc � bits � bytes)
	Iaf, rent praktiskt betyder att om du vill ha variabel med en int i s� m�ste du skriva int innan.

	t.ex "int whateva = 0;"
	eller
	"float down_here = 0;"
	"char charizard = 'A';" - inga str typer dock

	P� samma s�tt beh�ver vi deklarera funktioner ocks�, s� datorn vet vad funktionen kommer returnera(annars h�rdsm�lta).
	Allts� en funktion som returnerar summan av tv� ints kommer ha deklarationen int innan f�r att den returnerar en int.

	main funktionen �r int f�r... standarder?
	main brukar returnera 0 s� man vet att programmet inte kraschat eller gjort n�got skumt, vissa kompilatorer brukar klaga
	om du inte returnerar 0. GCC(min... v�ran kompilator?) brukar inte bry sig om du utel�mnar "return 0;"

	Okej sista innan vi hoppar in i funktionen!
	"void" betyder bara att vi inte stoppar in n�nting som funktionsargument, nada! du skulle tillochmed kunna skippa att
	skriva void d�r om du ville, men det brukar vara bra praxis att skriva void om du saknar funktionsargument

*/

int main(void)
{
	/*
		Det h�r �r c motsvarighet till Pythons print som skriver ut v�ran str�ng
		"Hello World" och "\n" som �r en "new-line character" dvs den s�ger �t
		v�ran printf funktionen att skapa en ny rad(du kan s�tta en ny rad vart du vill
		i str�ngen)

		Och det suuuuper viktiga i C s� avslutar du med ett litet semi-colon ";" s� att
		kompilatorn/preprocessorn fattar att du vill exekvera(k�ra) det kommandot
		skriv ; efter allt, allts� allt allt;
	*/
	printf("Hello World!\n");
} //  <-- jag gl�mde n�stan de h�r, de definerar kodblock, allt du indenterar p� i python, s�tter du s�nna h�r p� i C(wiktigt)

/*
															K�RA PROGRAMMET

	I Visual Studio borde det r�cka med att installerat C++ developer suite(vad det nu �n hette), du kan k�ra set-up igen om du gl�mde.
	D�refter bara debugga, jag hade lite problem med det f�rst,(Anti-Virus trodde min .exe var virus) och du kan beh�va byta fr�n
	"x86" till "x64" men det kan vara f�r att jag har GCC installerat(local windows debugger st�r det f�r mig)

	N�r du startar din debug s� kompileras filen och det skapas en .exe fil som k�rs
	och Hello World skrivs ut i din terminal ****HITTAR INGET EXE****


	LITE MER MANUELLT -

	Du kan alltid ladda ner GCC https://osdn.net/projects/mingw/releases/
	och sj�lv bygga dina filer fr�n en terminal(typ Powershell eller liknande).
	Det �r inte sv�rt jag lovar och man k�nner sig lite mer haxxor n�r man skriver fr�n terminal

	N�r den �r installerad s� �r det bara att navigera till den folder d�r du har din source fil(intro.c)
	skriva "gcc intro.c -o intro.exe" sen har du en exekverbar fil som du kan k�ra
	(I windows) ".\intro.exe" f�r att k�ra

	P� s� s�tt kan du skriva koden i vilken editor du vill och kompilera och k�ra den sj�lv.
	Seri�st, du kan skriva din kod i .txt fil om du vill och kompilera
*/