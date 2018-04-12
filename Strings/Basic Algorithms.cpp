
#include <bits/stdc++.h>
using namespace std;

int isvowel(char ch) {
   char vowel[6] = "aeiou";
   for (int j = 0; vowel[j]; j++)
      if (vowel[j] == ch)
         return 1;
   return 0;
}

int main() {

   string s1;
   getline(cin, s1);
   char str[s1.length()];
   strcpy(str, s1.c_str());

   //Count digits, letters, vowels, consonants
   int i, digits, alphas, vowels, consonants;
   for (i = digits = alphas = vowels = consonants = 0; str[i]; i++) {
      str[i] = tolower(str[i]);
      digits += isdigit(str[i]) ? 1 : 0;
      alphas += isalpha(str[i]) ? 1 : 0;
      vowels += isvowel(str[i]);
   }
   consonants = alphas - vowels;
   cout << str << endl;
   cout << digits << " " << vowels << " " << consonants << endl;

   //Check if string contains a substr
   int has1234 = (strstr(str, "1234") != NULL);
   cout << has1234 << endl;

   //Tokenize a string
   char * p;
   vector < string > tokens;
   map < string, int > freq;
   for (p = strtok(str, " ."); p; p = strtok(NULL, " .")) {
      tokens.push_back(p); // casting from C string to C++ string is automatic
      freq[p]++;
   }
   sort(tokens.begin(), tokens.end());
   cout << tokens[0].c_str() << " " << tokens[tokens.size() - 1].c_str() << endl;

   return 0;
}
