// Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG) ќе испечати

//на стандарден излез порака DA или NEво зависност од тоа дали внесениот датум е правилен или не.

// При одредување на валидноста на датумот во предвид да се земат сите фактори:
// дали месецот е број помеѓу 1 и 12

// дали денот одговара со бројот на денови во тој месец
// доколку е 29.02. да се внимава дали станува збор за престапна година
// престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.
#include <stdio.h>

int main() {
    int date,
            Day,
            Month,
            Year,
            validDate = 0,
            leapYear = 0;
    scanf("%d", &date);

    Year = date % 10000;
    date /= 10000;
    Month = date % 100;
    date /= 100;
    Day = date % 100;
    date /= 100;

    if(Year > 0 && Month > 0  && Month <= 12 && Day > 0 && Day <= 31) {

        if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0)) {
            if(Day <= 29) {
                validDate = 1;
                leapYear = 1;
            }
        } else {
            switch (Month) {
                case 1:   case 3: case 5: case 7: case 8: case 10: case 12:
                    if (Day <= 31) {
                        validDate = 1;
                    }
                    break;
                case 4: case 6: case 11:
                        if(Day <= 30) validDate = 1;
                    break;
                case 2:
                    if(Day <= 28){
                        validDate = 1;
                    }
                    break;
                default:
                    printf("Not a valid month."); // NE
                    break;
            }
        }
    }

    if(validDate) {
        if(leapYear)printf("Leap Year\n");
        printf("Valid date: %d / %d / %d", Day, Month, Year); //DA

    }
    else printf("Not a valid date."); // NE

    return 0;
}

