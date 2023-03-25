#include <stdio.h>
#include <stdlib.h>
int main() {
    int two_wheelers, four_wheelers;
    int total_vehicles, total_wheels;
    
    scanf("%d %d", &total_vehicles, &total_wheels); //do not change this line

    //Write your code here
    two_wheelers = abs(2*total_vehicles - total_wheels)/2;
    four_wheelers = abs(total_vehicles - two_wheelers);
    printf("%d %d\n", four_wheelers, two_wheelers); //do not change this line
  
}
