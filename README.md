# Kalender

## Lernziele:
Vorgehensplanung, Schleifen, switch-Anweisung, enum, Ausgabeformatierung
## Aufgabe a):
• Schreiben Sie ein Programm, das eine einfache Kalenderdarstellung (Monate und
Tage) ausgibt.
• Dabei sollen die Monate von 1 bis 12 durchgezählt werden, und die Tage von 1 bis
zum maximalen Tag des Monats.
• Nach jeweils 7 Tagen soll eine neue Zeile begonnen werden.
• Beachten Sie, dass die Monate unterschiedlich viele Tage haben. Der Februar kann
mit 28 Tagen angenommen werden (kein Schaltjahr).
• Verwenden Sie für die Ermittlung der Tage je Monat eine switch/case-Anweisung,
und dabei die Werte der Monate als Sprungmarken (case).
## Aufgabe b) mit Aufzählungstyp enum:
• Geben Sie statt „Monat: 1“ den Namen des Monats aus, also „Januar“. für die
anderen 11 Monate entsprechend.
• Verwenden Sie für die Umsetzung der Namen einen switch und für die
Sprungmarken einen enum, den Sie selbst zuvor definieren.
Tipp: Machen Sie bevor Sie programmieren eine Vorgehensplanung. Skizzieren Sie
dabei in Stichworten oder mit einer Zeichnung, wie Sie die Funktionalität des Programms
erreichen möchten, welche Algorithmik Sie verwenden (wie das Programm ablaufen soll).
## Hinweise:
• Sie können Ihre Lösung der Kalender-Hausaufgabe als Ansatz verwenden
• Es ist in C möglich, „Schleifen in Schleifen“-Konstruktionen zu verwenden
(geschachtelte Schleifen). Schauen Sie sich die for-Schleife an.
• Im Formatstring von printf() können Sie das so genannte Tabulatorzeichen
verwenden, es wird in C als '\t' dargestellt.
Es dürfen keine globalen Variablen verwendet werden.
Das Programm muss sich fehlerfrei und ohne Warnungen mit der Compileroption -Wall
übersetzen lassen. Halten Sie sich an die Codeformatierungs-Regeln. Kommentieren Sie
den Quellcode und tragen Sie Ihren Namen und das Erstellungsdatum als Kopfzeile ein.

Januar
  1 2 3 4 5 6 7
  8 9 10 11 12 13 14
  15 16 17 18 19 20 21
  22 23 24 25 26 27 28
  29 30 31
Februar
  1 2 3 4 5 6 7
  8 9 10 11 12 13 14
  15 16 17 18 19 20 21
  22 23 24 25 26 27 28
März
  1 2 3 4 5 6 7
  8 9 10 11 12 13 14
  15 16 17 18 19 20 21
  22 23 24 25 26 27 28
  29 30 31
April
  1 2 3 4 5 6 7
  8 9 10 11 12 13 14
  15 16 17 18 19 20 21
  22 23 24 25 26 27 28
  29 30
Mai
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31
Juni
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30
Juli
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31
August
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31
September
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30
Oktober
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31
November
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30
Dezember
1 2 3 4 5 6 7
8 9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 
