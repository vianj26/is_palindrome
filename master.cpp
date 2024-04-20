#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string);

int main()
{

    string word;

    cout << "Enter the word to check if palindrome.\n>>";
    getline(cin, word);

    cout << (is_palindrome(word) ? "It is a palindrome." : "It is not a palindrome.") << endl;

    if(word.length() == 1) cout << "One word letter is technically a palindrome." << endl;
    if(word.length() == 0) cout << "Technically it is still a palindrome." << endl;

    return 0;


}

bool is_palindrome(string word)
{
    int start = 0;
    int end = word.length() - 1;
    bool result = true;
    if (end == 0 || end == 1) return result;
    

    while(end > start)
    {
        if(word[start] != word[end])
        {
            result = false;
            break;
        }
        start++;
        end--;

    }

    return result;
}