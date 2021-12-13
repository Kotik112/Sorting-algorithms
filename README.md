# Grupp inlamning - algoritm
 
## 1. Uppgift
Uppgiften är att implementera åtminstone tre olika sorteringsalgoritmer och
jämföra dem. Ni skall alltså experimentellt undersöka deras tidskomplexitet
genom att köra dem med olika input och mäta hur lång tid de tar att köra.
Ni skall också jämföra era implementationer med “standardimplmentationen” i 
det språk ni skriver i (std::sort i C++, qsort i C, list.sort i Python,
List.sort i Java)

## 2. Krav för godkänt
#### 2.1. Allmänna krav
- C/C++-kod skall kompilera utan varningar med -Wall.
Koden skall komma med en instruktion för hur man kompilerar/kör den. Det
kan vara en Makefile, ett shell-skript eller bara en textfil med instruktioner.
- Dataflödena i programmet skall vara genomtänkta. 
- Onödig minneskopieringskall undvikas.
- Minnet skall hanteras korrekt, minne man har fått av malloc/new skall frias
med free/delete.
- Ni skall skriva era egna implementationer av datastrukturer/algoritmer, inte
använda bibliotek annat än när det specifikt efterfrågas.

#### 2.2. Krav på lösningen
- Ni skall skapa plottar som visar exekveringstid som funktion av antal element.
Se till att köra så många element att ni får rimligt långa tider, några tiondelar
i alla fall.
- En eller flera plottar, tex med gnuplot eller excel.
- Ni skall också kunna resonera kring resultaten.
## 3. Krav för väl godkänt
- Implementera minst en algoritm med komplexitet n log n. Testa med olika typer
av input, inte bara slumpmässig utan också redan sorterad, omvänt sorterad och
“nästan sorterad”.

## 4 Extra uppgifter
- Skriv en sorteringsalgoritm som går snabbare än n log n i det allmänna fallet.
