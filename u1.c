// Name: Djouko Suzie ,Datum: 25.10.23

/*Aufgabe a :
Beschreibung: ein Programm f�r eine komplexere Darstellung einen Kalender*/

#include<stdio.h>
enum Monat { Januar, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember };

enum Tag { Mo, Di, Mi, Do, Fr, Sa, So };

int main() {

	int max;
	int count1 = 0; // definiere ein Zaeler 
	int count2 = 0;

	for (enum Monat monat = Januar; monat <= Dezember; monat++) {

		switch (monat) {
		case Januar: printf("\n Januar \n\t\t"); break;
		case Februar: printf("\n Febraur \n\t\t"); break;
		case Maerz: printf("\n Maerz \n\t\t"); break;
		case April: printf("\n April \n\t\t"); break;
		case Mai: printf("\n Mai \n\t\t"); break;
		case Juni: printf("\n Juni \n\t\t");  break;
		case Juli: printf("\n Juli \n\t\t"); break;
		case August: printf("\n August \n\t\t"); break;
		case September: printf("\n September \n\t\t"); break;
		case Oktober: printf("\n Oktober \n\t\t"); break;
		case November: printf("\n November \n\t\t");  break;
		case Dezember: printf("\n Dezember \n\t\t"); break;

		default:

			break;
		}
		switch (monat) {
		case Februar:
			max = 28; break;

		case April:
		case Juni:
		case September:
		case November:
			max = 30;
			break;
		default:
			max = 31;
			break;
		}

		printf(" Mo");
		printf("\t Di");
		printf("\t Mi");
		printf("\t Do");
		printf("\t Fr");
		printf("\t Sa");
		printf("\t So");

		printf("\n\n\t\t");

		if (count1 != 0) {
			for (int j = 1; j < count1; j++) { // count1 hilft dabei die Anzahl von Lehrzeichen , nachdem den maximum (28 , 30 , 31) erreicht wird 
				printf("\t");
			}
			count2 = count1 - 1;	// Ausgleich mit  Zeile 79
			// count2 ist die Anzahl auf /t die hinzugef�gt werden soll
		}

		for (int t = 1; t <= max; t++) {
			printf("%i\t", t);

			if ((t + count2) % 7 == 0) { // count2 ber�cksichtigen. wenn count2 = 0 (count1 = 1) , hei�t dass, das die  Zeile schon von Montag bis Sonntag gef�llt ist.  

				// jedes mal , wenn die Anzahl von Tage ein vielfaches von 7 ist , gehen wir eine Zeile runter 

				printf("\n\t\t"); // neue Zeile f�r die 7 Tagen 
				count1 = 0; // Renitialiere den Z�hler weil die Reihe schon von 7 Tage gef�llt ist 
			}
			count1++;	// Itterieren count1 , weil der Z�hler, muss ab den zweiten Aufruf nicht gleich 0 sein , sont wird   den oberen Teilcode nicht ausgef�hrt 


		}





		printf("\n\n");



	}

	/**/
	return 0;
}