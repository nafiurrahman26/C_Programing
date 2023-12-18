#include <stdio.h>

// Function to sort the gadgets based on their features in descending order
void sortGadgets(int n, int p[], int f[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (f[j] < f[j + 1]) {
                // Swap features
                int tempF = f[j];
                f[j] = f[j + 1];
                f[j + 1] = tempF;
                
                // Swap prices to maintain corresponding order
                int tempP = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tempP;
            }
        }
    }
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int p[n], f[n];

    // Input prices
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    // Input features
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }

    // Sort gadgets based on features in descending order
    sortGadgets(n, p, f);

    int maxFeatures = 0;
    int spentBudget = 0;

    // Greedy approach to choose gadgets within the budget
    for (int i = 0; i < n; i++) {
        if (spentBudget + p[i] <= x) {
            spentBudget += p[i];
            maxFeatures += f[i];
        }
    }

    // Output the result
    printf("%d\n", maxFeatures);

    return 0;
}
