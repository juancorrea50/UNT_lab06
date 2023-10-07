#include <iostream>
// FIXME include vector library
#include <vector>
using namespace std;

int main() {
   /* Type your code here. */
   vector<int> jerseyNum;
   vector<int> ratingNum;
   unsigned int i;
   int jerseyIn;
   int ratingIn;
   for(i =0; i<5;i++){
      cout << "Enter player " << i+1 << "'s jersey number:" << endl;
      cin >> jerseyIn;

      cout << "Enter player " << i+1 << "'s rating:" << endl << endl;
      cin >> ratingIn;
      
      jerseyNum.push_back(jerseyIn);
      ratingNum.push_back(ratingIn);
   }
   cout << "ROSTER" << endl;
   for(i=0;i<jerseyNum.size();i++){
      cout << "Player " << i+1 << " -- " << "Jersey number: " << jerseyNum.at(i) << ", Rating: " << ratingNum.at(i) << endl;
   }
   cout << endl;
   
   char choice = 'x';
   while(choice == 'x' || choice != 'q'){
      cout << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl << endl;

      cout <<"Choose an option:" << endl;
      cin >> choice;
   
   switch(choice){
      case 'q':
         //exit program
      break;
      case 'o':
         //output player list
         cout << "ROSTER" << endl;
         for(i=0;i<jerseyNum.size();i++){
               cout << "Player " << i+1 << " -- " << "Jersey number: " << jerseyNum.at(i) << ", Rating: " << ratingNum.at(i)<< endl;
            }
         cout << endl;
      break;
      case 'a':
         cout << "Enter a new player's jersey number:" << endl;
         cin >> jerseyIn;
         cout << "Enter the player's rating:" << endl;
         cin >> ratingIn;
         jerseyNum.push_back(jerseyIn);
         ratingNum.push_back(ratingIn);
         cout << endl;
      break;
      case 'd':
         cout << "Enter a jersey number:" << endl;
         cin >> jerseyIn;
         
         for(i=0;i<jerseyNum.size(); i++){
            if(jerseyNum.at(i) == jerseyIn){
               jerseyNum.erase(jerseyNum.begin() + i);
               ratingNum.erase(ratingNum.begin() + i);
            }
         }
      break;
      case 'u':
         cout << "Enter a jersey number:" << endl;
         cin >> jerseyIn;
         for(i=0;i<jerseyNum.size();i++){
            if(jerseyNum.at(i) == jerseyIn){
               cout << "Enter a new rating for player:" << endl;
               cin >> ratingIn;
               ratingNum.at(i) = ratingIn;
            }
         }
      break;
      case 'r':
         cout << "Enter a rating:" << endl;
         cin >> ratingIn;
         
         cout << "ABOVE " << ratingIn << endl;
         for(i=0;i<jerseyNum.size();i++){
            if(ratingNum.at(i) > ratingIn){
               cout << "Player " << i+1 << " -- " << "Jersey number: " << jerseyNum.at(i) << ", Rating: " << ratingNum.at(i) << endl;
            }
         }
         cout << endl;
      break;
      }
   }


   return 0;
}