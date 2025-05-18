/*
 * Program to sort cities lexicographically with tie-breaking based on
 * literacy level and population
 */

#include <stdio.h>
#include <string.h>

// Structure to store city information
struct City {
    char name[50];
    float literacy;
    int population;
};

// Function to sort cities
void sortCities(struct City cities[], int n) {
    struct City temp;
    int i, j;
    
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            // Compare city names lexicographically
            int nameComparison = strcmp(cities[j].name, cities[j+1].name);
            
            // If names are same, compare literacy
            if (nameComparison == 0) {
                if (cities[j].literacy == cities[j+1].literacy) {
                    // If literacy is same, compare population
                    if (cities[j].population > cities[j+1].population) {
                        // Swap
                        temp = cities[j];
                        cities[j] = cities[j+1];
                        cities[j+1] = temp;
                    }
                } else if (cities[j].literacy > cities[j+1].literacy) {
                    // Swap
                    temp = cities[j];
                    cities[j] = cities[j+1];
                    cities[j+1] = temp;
                }
            } else if (nameComparison > 0) {
                // Swap if first city name is lexicographically greater
                temp = cities[j];
                cities[j] = cities[j+1];
                cities[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    
    struct City cities[n];
    
    // Input city information
    for (i = 0; i < n; i++) {
        printf("\nEnter details for city %d:\n", i+1);
        printf("Name: ");
        scanf("%s", cities[i].name);
        printf("Literacy level (%%): ");
        scanf("%f", &cities[i].literacy);
        printf("Population: ");
        scanf("%d", &cities[i].population);
    }
    
    // Sort cities
    sortCities(cities, n);
    
    // Display sorted cities
    printf("\nCities sorted lexicographically (with tie-breaking):\n");
    printf("%-20s %-15s %-15s\n", "City Name", "Literacy (%)", "Population");
    printf("------------------------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%-20s %-15.2f %-15d\n", cities[i].name, cities[i].literacy, cities[i].population);
    }
    
    return 0;
}