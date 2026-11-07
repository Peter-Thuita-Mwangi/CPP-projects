////Hotel Management System.
// The System monitors revenue and room occupancy of hotels

#include <iostream>
#include <string>
using namespace std;
int main (){
    double weeklyRevenue, averageDairyRevenue ;
double revenue [7] = {15000, 20000, 30000, 40000, 49000, 36000, 50000 };

weeklyRevenue = revenue [0] + revenue [1] + revenue [2] + revenue [3] + revenue [4] + revenue [5] + revenue [6];

cout << "Total Weekly Revenue is: " <<weeklyRevenue <<endl;
averageDairyRevenue = weeklyRevenue / 7;

cout << "The average dairy revenue is: " <<averageDairyRevenue <<endl;

// room occupancy
//here, 1 represent occupied room and 0 represent vacancy
 int occupancy[5][10] = {{1, 0, 1, 1, 1, 0, 0, 0, 1, 1},
                        {0, 0, 1, 1, 1, 1, 0, 0, 0, 1},
                        {0, 1, 1, 0, 1, 0, 0, 1, 1, 1},
                        {1, 1, 1, 1, 0, 0, 1, 0, 1, 1},
                        {1, 0, 0, 1, 1, 1, 0, 1, 0, 1}};
    for (int i = 0; i < 5; i++){
    int occupied = 0;
    int vacant = 0;
    for (int j = 0; j < 10; j++){
        if (occupancy[i][j] == 1){
            occupied ++;}
            else {vacant ++;}
    }
    cout << "Floor " << i + 1
         << ": Occupied rooms = " <<occupied
         << ", Vacant rooms = " <<vacant <<endl; }

         //multiple branches
         //3 branches each with 5 floor, and 10 rooms per floor

                                  // First branch
         int chain[3] [5] [10] = { {{1, 0, 1, 1, 1, 0, 0, 1, 1, 1},
                                 {0, 1, 1, 1, 1, 1, 1, 0, 1, 1},
                                 {1, 1, 1, 1, 0, 0, 0, 1, 1, 1},
                                 {1, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                                 {1, 1, 1, 1, 1, 0, 0, 0, 1, 1}},


                                 // Second branch
                                 {{1, 0, 1, 0, 0, 0, 0, 1, 1, 1},
                                 {1, 1, 1, 1, 0, 0, 0, 1, 1, 1},
                                 {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                 {1, 1, 0, 0, 0, 0, 0, 0, 1, 0},
                                 {1, 1, 1, 1, 1, 0, 0, 0, 0, 0}},


                                 // Third Branch
                                 {{1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
                                 {1, 1, 1, 0, 0, 0, 0, 0, 1, 0},
                                 {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                 {0, 0, 0, 1, 0, 1, 1, 1, 0, 0},
                                 {1, 1, 1, 1, 1, 1, 1, 0, 1, 1}} };




                                 //calculating and displaying total number of occupied  rooms across all the 3 branches
                                 int occupied = 0;
                                 for (int i = 0; i < 3; i++){
                                    for (int j = 0; j < 5; j++){
                                 for (int k = 0; k < 10; k++){

                                    if (chain [i] [j] [k] ==1)
                                        occupied++;}}}
                                    cout << "The Total number of occupied rooms in all the 3 branches is: " <<occupied <<endl;

                                 return 0;}











