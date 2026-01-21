#include <iostream>

int main () {

    float rides;              // number of subway or local bus rides
    float express;            // number of express bus rides

    char living;              // living or visiting

    std::cout << "====================================================\n";
    std::cout << "Welcome to the MetroCard Calculator! - New York City.\n";
    std::cout << "====================================================\n";
    std::cout << "\n";

    std::cout << "The fare for a subway or local bus ride:       $2.75\n");
    std::cout << "The fare for an express bus ride:              $6.50\n");
    std::cout << "\n";

    std::cout << " Do you live here or are you visiting? (Input L/V):");
    std::cin >> living;

    if (living == 'L' || living == '1') {

        float monthlycost;    // monthly cost using single fare rides

        std::cout << "\n";
        std::cout << "How many times do you use the subway/bus a week?: ";
        scanf("%f", &rides);

        printf("\n");
        printf("How many times do you use the express bus a week?:");
        scanf("%f", &rides);

        monthlycost = (4 * rides * 2.75) + (4 * express * 6.50);

        printf("\n");
        printf("============\n");    
        printf("MONTHLY COST\n");
        printf("============\n\n")

        printf(" - Using Single Fare Rides            $%0.2f\n", monthlycost);
        printf(" - Using 7-Day Unlimited Card (x4)    $128.00\n");
        printf(" - Using 30-day Unlimited Card        $121.00\n");
        
        printf("==============================================\n\n");

        if (monthlycost > 121) {

            printf("It would be better to use the 30-Day Unlimited.\n");
            printf("You would save $%0.2f per month.\n", monthlycost - 121);

        }
        else {

            printf("It would be better to use Single Fare Rides.\n");
            printf("You would save $%0.2f per month.\n", 121 - monthlycost);

        }
    }
    else if (living == 'V' || living == 'v') {

        float days;        // number of days
        int weeks;         // number of weeks (rounded up)

        float tripcost;       // trip cost using single fare rides
        float unlimited;      // trip cost using 7-day unlimited

        printf("\n");
        printf("How many days total are you staying in New York?:");
        scanf("%f", &days);

        printf("\n");
        printf("How many times total do you use the subway/bus per day?:");
        scanf("%f", &rides);

        printf("\n");
        printf("How many times do you use the express bus per day?:");
        scanf("%f", &express);

        tripcost = (days * rides * 2.75) + (days * express * 6.50);

        if (days <= 7)
        {
            weeks = 1;
        }
        else if (days <= 14)
        {
            weeks = 2;
        }
        else if (days <= 21)
        {
            weeks = 3;
        }
        else if (days <= 28)
        {
            weeks = 4;
        }
        else if (days <= 35)
        {
            weeks = 5;
        }
        else if (days <= 42)
        {
            weeks = 6;
        }
        else if (days <= 49)
        {
            weeks = 7;
        }

        unlimited = weeks * 32.00;

        printf("\n");
        printf("=========\n");
        printf("PRINT COST\n");
        printf("=========\n\n");

        printf(" - Using Single Fare Rides ")
        printf(" - Using 




