#include <algorithm>
#include <iostream>
using namespace std;

int find_largest(int nums[], int n) {
    return *max_element(nums, nums + n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << "\nLargest element of the said array: " << find_largest(nums, n);
    return 0;
}

// 1.Malini goes to BestSave hyper market to buy grocery items. BestSave hyper market provides 10% discount on the bill amount B when ever the bill amount B is more than Rs.2000.
// The bill amount B is passed as the input to the program. The program must print the final amount A payable by Malini.
// Input Format:
// The first line denotes the value of B.
// Output Format:
// The first line contains the value of the final payable amount A.

// 2.The day corresponding to the first date of a given month is provided as input to the program. Then a specific date D of the month is provided. The program must print the day (one among MON, TUE, WED, THU, FRI, SAT, SUN) of the date D.
// Input Format:
// First line will contain the day (one among MON, TUE, WED, THU, FRI, SAT, SUN) of the first date of the month.
// Second line will contain the value of the date D as an integer value.
// Output Format:
// First line will contain the day of the date D

// #include <iostream>
// using namespace std;

// int main() {
//     float originalPrice, discountPercentage, finalPrice;

//     // Input original price and discount percentage
//     cout << "Enter the original price: ";
//     cin >> originalPrice;
//     cout << "Enter the discount percentage: ";
//     cin >> discountPercentage;

//     // Calculate discount amount
//     float discountAmount = (originalPrice * discountPercentage) / 100;

//     // Calculate final price
//     finalPrice = originalPrice - discountAmount;

//     // Output the results
//     cout << "Original Price: " << originalPrice << endl;
//     cout << "Discount Percentage: " << discountPercentage << "%" << endl;
//     cout << "Discount Amount: " << discountAmount << endl;
//     cout << "Final Price after Discount: " << finalPrice << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     float billAmount, finalAmount;

//     // Input the bill amount
//     cout << "Enter the bill amount: ";
//     cin >> billAmount;

//     // Calculate the final amount with the discount if applicable
//     if (billAmount > 2000) {
//          finalAmount = billAmount * 0.90; // Applying 10% discount
//     } else {
//         finalAmount = billAmount; // No discount
//     }

//     // Output the final payable amount
//     cout << "The final payable amount is: " << finalAmount << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string(s);
    getline(cin, s);
    int length =0;
    int i = s.length()-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i] !=' '){
        length++;
        i--;
    }
    cout<<length<<endl;
    return 0;
}