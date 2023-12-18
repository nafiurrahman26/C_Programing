#include <stdio.h>

int main() {
    int retirement_age;
    scanf("%d", &retirement_age);

    // Ronaldo's age is retirement_age, and Messi is younger by two years
    int messi_age = retirement_age - 2;

    // Calculate the minimum number of goals Messi needs to score each year
    int goals_needed = 0;

    if (messi_age >= retirement_age) {
        // If Messi is already older than Ronaldo, he won't be able to surpass Ronaldo's goals
        printf("0\n");
    } else {
        // Calculate the number of years Messi will play after Ronaldo's retirement
        int years_after_retirement = retirement_age - messi_age;

        // Calculate the minimum number of goals Messi needs to score each year
        goals_needed = (801 - 756) / years_after_retirement;
        printf("%d\n", goals_needed);
    }

    return 0;
}
