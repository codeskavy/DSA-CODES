#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2) {
    int carry = 0;
    string result;
    
    // Make sure both strings have the same length by padding with zeros
    int length = max(num1.size(), num2.size());
    num1 = string(length - num1.size(), '0') + num1;
    num2 = string(length - num2.size(), '0') + num2;
    
    for (int i = length - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';
        
        int total = digit1 + digit2 + carry;
        carry = total / 10;
        result += to_string(total % 10);
    }
    
    if (carry) {
        result += to_string(carry);
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

string subtractStrings(string num1, string num2) {
    int borrow = 0;
    string result;
    
    // Make sure both strings have the same length by padding with zeros
    int length = max(num1.size(), num2.size());
    num1 = string(length - num1.size(), '0') + num1;
    num2 = string(length - num2.size(), '0') + num2;
    
    for (int i = length - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0' + borrow;
        
        if (digit1 < digit2) {
            digit1 += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }
        
        result += to_string(digit1 - digit2);
    }
    
    reverse(result.begin(), result.end());
    
    // Remove leading zeros
    result.erase(0, result.find_first_not_of('0'));
    
    return result.empty() ? "0" : result;
}

string multiplyStrings(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    string result(len1 + len2, '0');
    
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + (result[i + j + 1] - '0');
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] += sum / 10;
        }
    }
    
    // Remove leading zeros
    result.erase(0, result.find_first_not_of('0'));
    
    return result.empty() ? "0" : result;
}

string divideStrings(string num1, string num2) {
    int dividend = stoi(num1);
    int divisor = stoi(num2);
    int quotient = dividend / divisor;
    
    return to_string(quotient);
}

int main() {
    string num1 = "12345678901234567890";
    string num2 = "98765432109876543210";

    // Addition
    string sum_result = addStrings(num1, num2);
    cout << "Addition: " << sum_result << endl;

    // Subtraction
    string diff_result = subtractStrings(num1, num2);
    cout << "Subtraction: " << diff_result << endl;

    // Multiplication
    string prod_result = multiplyStrings(num1, num2);
    cout << "Multiplication: " << prod_result << endl;

    // Division
    string div_result = divideStrings(num1, num2);
    cout << "Division: " << div_result << endl;

    return 0;
}
