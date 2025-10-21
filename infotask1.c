#include <stdio.h>
#define PI 3.14159

int main(void)
{

    // Aufgabe 1: Deklaration
    // Speicherplatz ist 4 Byte groß für ganze Zahlen (int) auf den meisten Systemen.

    int radius;
    printf("Speicher für 'radius': %zu Byte\n", sizeof(radius));

    // Aufgabe 2: Initialisierung
    // Initialisierung bedeutet, der Variablen beim Erstellen ihren ersten Wert zu geben.
    // Zuweisung dagegen überschreibt einen bereits vorhandenen Wert.

    radius = 5;

    // Aufgabe 3: Ausgabe des Werts

    printf("Radius = %d\n", radius);

    // Wenn die Variable nicht initialisiert wäre, würde sie einen "zufälligen" (undefinierten)
    // Speicherwert enthalten – z. B. -95371168 oder einen anderen beliebigen Wert.

    // Aufgabe 4: Berechnung der Kreisfläche

    double area = PI * radius * radius;

    // Aufgabe 5: Ausgabe der Kreisfläche

    printf("Kreisfläche = %.2f\n", area);

    // Aufgabe 6: Zeichenvariable

    char letter = 'a'; // 97
    printf("Buchstabe = %c\n", letter);

    // Ja, theoretisch kann man für Zeichen auch int oder short verwenden,
    // da Zeichen intern als ganze Zahlen gespeichert werden. In der Praxis nutzt man aber char,
    // weil er weniger Speicher braucht und speziell für Zeichen (z. B. ASCII) vorgesehen ist.

    // Aufgabe 7: Klein- zu Großbuchstabe konvertieren

    if (letter >= 'a' && letter <= 'z')
    {
        letter -= 32;
    }
    else
    {
        letter += 32;
    }

    printf("Als Großbuchstabe = %c\n", letter);

    // Aufgabe 8: Dezimalwert

    printf("Dezimalwert des Zeichens = %d\n", letter);

    return 0;
}