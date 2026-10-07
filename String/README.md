# 📚 STRING DSA — COMPLETE NOTES & PROBLEM ROADMAP

Strings are one of the most important topics in DSA. They are heavily asked in coding interviews and are closely related to arrays, hashing, two pointers, sliding window, recursion, and dynamic programming.

---

# 🧠 1. STRING BASICS

## Declaration

```cpp
string s = "hello";
Input
cin >> s;

For input containing spaces:

getline(cin, s);
Length
s.length();
s.size();
Access Character
s[0];
s[i];
Modify Character
s[0] = 'A';
Concatenation
string a = "hello";
string b = "world";

string c = a + b;
Loop Through String
for(int i = 0; i < s.length(); i++) {
    cout << s[i];
}

Or:

for(char c : s) {
    cout << c;
}
🔤 2. IMPORTANT STRING FUNCTIONS
Function	Purpose
s.length()	Length of string
s.size()	Length of string
s.push_back()	Add character
s.pop_back()	Remove last character
s.substr()	Get substring
s.find()	Find character/substring
s.erase()	Delete characters
s.insert()	Insert characters
s.compare()	Compare strings
reverse()	Reverse string
sort()	Sort string
Example
string s = "abcdef";

cout << s.substr(1, 3);

Output:

bcd
🔢 3. CHARACTER HANDLING
Character to Integer
int x = s[i] - '0';

Example:

char c = '7';

int x = c - '0';

cout << x;

Output:

7
Character to Index

For lowercase English letters:

int index = s[i] - 'a';

Example:

char c = 'd';

int index = c - 'a';

cout << index;

Output:

3
ASCII Values
'A' = 65
'Z' = 90

'a' = 97
'z' = 122

'0' = 48
'9' = 57
Useful Character Functions
isdigit(c);
isalpha(c);
islower(c);
isupper(c);
tolower(c);
toupper(c);
📊 4. FREQUENCY ARRAY

One of the MOST IMPORTANT string techniques.

For lowercase English letters:

int freq[26] = {0};

for(char c : s) {
    freq[c - 'a']++;
}

Example:

s = "banana"

Frequency:

a = 3
b = 1
n = 2
Access Frequency
cout << freq['a' - 'a'];

Output:

3
Why use Frequency Array?

Use it when:

Character set is fixed
Only lowercase letters are involved
You need character counts
You need to compare character frequencies

Common problems:

Anagram
Permutation
Duplicate characters
Character frequency
Sliding window problems
🗺️ 5. HASHING WITH MAP
unordered_map
unordered_map<char, int> freq;

for(char c : s) {
    freq[c]++;
}
map
map<char, int> freq;

for(char c : s) {
    freq[c]++;
}
Difference
array
→ fastest when character set is fixed

unordered_map
→ general frequency counting
→ average O(1) lookup

map
→ sorted keys
→ O(log n) lookup
🔄 6. REVERSE A STRING
STL
reverse(s.begin(), s.end());
Two Pointer Method
int i = 0;
int j = s.length() - 1;

while(i < j) {
    swap(s[i], s[j]);
    i++;
    j--;
}

Pattern:

L ---------------- R
↑                    ↑

Move L forward
Move R backward

Time:

O(n)

Space:

O(1)
🔍 7. PALINDROME

A palindrome reads the same from both directions.

Examples:

madam
racecar
level

Not palindrome:

hello
coding
Code
bool isPalindrome(string s) {

    int i = 0;
    int j = s.length() - 1;

    while(i < j) {

        if(s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}
Pattern
Two Pointers
Complexity
Time = O(n)
Space = O(1)
🔀 8. ANAGRAM

Two strings are anagrams if they contain the same characters with the same frequencies.

Example:

s1 = "listen"
s2 = "silent"

→ Anagram
Frequency Array Solution
bool isAnagram(string s1, string s2) {

    if(s1.length() != s2.length())
        return false;

    int freq[26] = {0};

    for(char c : s1)
        freq[c - 'a']++;

    for(char c : s2)
        freq[c - 'a']--;

    for(int i = 0; i < 26; i++) {

        if(freq[i] != 0)
            return false;
    }

    return true;
}
Complexity
Time = O(n)
Space = O(1)
🔢 9. SORTING A STRING
sort(s.begin(), s.end());

Example:

string s = "dcba";

sort(s.begin(), s.end());

cout << s;

Output:

abcd

Useful for:

Anagrams
Group Anagrams
Lexicographical problems
Comparing strings

Complexity:

O(n log n)
🔎 10. SUBSTRING

A substring is a continuous part of a string.

Example:

s = "abcdef"

Substrings:

a
ab
abc
bcd
cde
abcdef
Get Substring
string t = s.substr(start, length);

Example:

string s = "abcdef";

string t = s.substr(2, 3);

cout << t;

Output:

cde
🧩 11. SUBSEQUENCE

A subsequence does NOT need to be continuous.

Example:

s = "abcde"

Valid subsequences:

ace
abd
abc
ae

Invalid:

aec

because the order changes.

Important:

Substring
→ continuous

Subsequence
→ not necessarily continuous
→ order must remain same
🪟 12. SLIDING WINDOW

One of the MOST IMPORTANT string patterns.

Use sliding window when the problem talks about:

Substring
Longest substring
Shortest substring
Permutation
Anagram
Frequency inside a window
At most K characters
Exactly K characters
📌 13. FIXED SLIDING WINDOW

When window size is fixed:

int windowSize = k;

for(int i = 0; i < s.length(); i++) {

    // Add current character

    if(i >= windowSize) {

        // Remove character leaving window
    }

    // Process window
}

General pattern:

L -------- R

When R moves:

Add s[R]

When window becomes too large:

Remove s[L]
L++
🔥 14. LEETCODE 567 — PERMUTATION IN STRING

Problem:

Given two strings s1 and s2, return true if s2 contains a permutation of s1.

Example:

s1 = "ab"
s2 = "eidbaooo"

Output = true

Because:

"ba"

is a permutation of:

"ab"
Main Pattern
Frequency Array
+
Fixed Sliding Window
Important Logic
1. Count characters of s1
2. Window size = s1.length()
3. Create window in s2
4. Compare frequencies
5. Slide window
6. Add new character
7. Remove old character
8. Compare again
C++ Code
class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]) {

        for(int i = 0; i < 26; i++) {

            if(freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {

        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windowSize = s1.length();

        int windowFreq[26] = {0};

        for(int i = 0; i < s2.length(); i++) {

            windowFreq[s2[i] - 'a']++;

            if(i >= windowSize) {
                windowFreq[s2[i - windowSize] - 'a']--;
            }

            if(i >= windowSize - 1) {

                if(isFreqSame(freq, windowFreq)) {
                    return true;
                }
            }
        }

        return false;
    }
};

Complexity:

Time = O(26 × n)
     = O(n)

Space = O(26)
      = O(1)
🧪 15. STRING + HASHING

Important pattern:

String
+
Frequency
+
HashMap

Common problems:

Valid Anagram
First Unique Character
Group Anagrams
Longest Substring Without Repeating Characters
Character Frequency
👥 16. GROUP ANAGRAMS

Example:

["eat","tea","tan","ate","nat","bat"]

Output:

[
    ["eat","tea","ate"],
    ["tan","nat"],
    ["bat"]
]

Main idea:

Sort each word
+
Use sorted word as key

Example:

eat → aet
tea → aet
ate → aet

Therefore they belong to the same group.

🪟 17. LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS

Example:

s = "abcabcbb"

Answer:

3

Because:

"abc"

is the longest substring without repeating characters.

Pattern:

Variable Sliding Window
+
Hashing

Basic idea:

left = 0

for right = 0 → n-1

    add s[right]

    while duplicate exists:
        remove s[left]
        left++

    update answer
🔥 18. FIND ALL ANAGRAMS IN A STRING

Example:

s = "cbaebabacd"
p = "abc"

Answer:

[0, 6]

Because:

cba
bac

are anagrams of "abc".

Pattern:

Frequency Array
+
Fixed Sliding Window
🔥 19. LONGEST REPEATING CHARACTER REPLACEMENT

Pattern:

Sliding Window
+
Frequency
+
Maximum Frequency

Important formula:

window length - maximum frequency <= k

If false:

Shrink window
🔥 20. LONGEST PALINDROMIC SUBSTRING

Example:

s = "babad"

Answer:

"bab"

or

"aba"

Common approaches:

1. Expand Around Center
2. Dynamic Programming
3. Manacher's Algorithm

For interviews:

Learn Expand Around Center first.
🔥 21. MINIMUM WINDOW SUBSTRING

Important hard-level problem.

Pattern:

Variable Sliding Window
+
Frequency Map
+
Two Pointers

General idea:

Expand right
      ↓
Satisfy required characters
      ↓
Shrink left
      ↓
Find minimum valid window
🧠 22. STRING + TWO POINTERS

Use two pointers when:

Problem involves both ends

Common problems:

Reverse String
Valid Palindrome
Palindrome-related problems
Compare characters from both sides

Basic template:

int left = 0;
int right = s.length() - 1;

while(left < right) {

    // process

    left++;
    right--;
}
🧠 23. STRING + SLIDING WINDOW

Use sliding window when the problem contains:

Longest
Shortest
Substring
Window
At most K
Exactly K
Permutation
Anagram
Repeating characters

Ask yourself:

Can I maintain a valid window
instead of checking every substring?

If yes:

Sliding Window
🧠 24. STRING + HASHING

Use hashing when you need:

Frequency
Duplicate detection
Fast lookup
Character tracking
Last occurrence

Example:

unordered_map<char, int> mp;
🧠 25. STRING + BINARY SEARCH

Less common but important.

Used when:

Answer can be searched
+
String condition is monotonic

Examples include:

Minimum length satisfying condition
Maximum possible value
String construction problems
🧠 26. STRING + DYNAMIC PROGRAMMING

Important advanced combination.

Topics:

Longest Common Subsequence
Longest Common Substring
Edit Distance
Distinct Subsequences
Word Break
Palindrome Partitioning
Interleaving String
🧬 27. ADVANCED STRING ALGORITHMS

After mastering normal string problems, learn:

KMP Algorithm
Rabin-Karp
Z Algorithm
Manacher's Algorithm
Trie
Rolling Hash
Suffix Array
Suffix Tree

Priority:

⭐⭐⭐ KMP
⭐⭐⭐ Trie
⭐⭐ Rabin-Karp
⭐⭐ Z Algorithm
⭐⭐ Manacher
⭐ Suffix Array
⭐ Suffix Tree

For normal placement preparation:

KMP + Trie

are much more important than suffix trees.

💻 28. IMPORTANT STRING PROBLEMS
🟢 EASY
Reverse String
Valid Palindrome
Valid Anagram
First Unique Character in a String
Longest Common Prefix
Length of Last Word
Roman to Integer
Integer to Roman
Find the Index of the First Occurrence in a String
Valid Parentheses
Add Binary
Reverse Words in a String III
🟡 MEDIUM
Group Anagrams
Longest Substring Without Repeating Characters
Longest Palindromic Substring
Permutation in String
Find All Anagrams in a String
Longest Repeating Character Replacement
String Compression
Decode String
Compare Version Numbers
String to Integer (atoi)
Remove All Adjacent Duplicates in String II
Minimum Remove to Make Valid Parentheses
Simplify Path
Palindromic Substrings
Word Break
🔴 HARD
Minimum Window Substring
Edit Distance
Distinct Subsequences
Regular Expression Matching
Wildcard Matching
Word Break II
Palindrome Partitioning II
Shortest Palindrome
Text Justification
Scramble String
⭐ 29. MUST-DO STRING PROBLEMS FOR PLACEMENTS

If your goal is top-company placements, prioritize these:

1. Valid Anagram
2. Valid Palindrome
3. Reverse String
4. Longest Common Prefix
5. First Unique Character
6. Group Anagrams
7. Longest Substring Without Repeating Characters
8. Permutation in String
9. Find All Anagrams in a String
10. Longest Repeating Character Replacement
11. Longest Palindromic Substring
12. Palindromic Substrings
13. String Compression
14. Decode String
15. Minimum Window Substring
16. Word Break
17. Edit Distance
18. Longest Common Subsequence
19. Implement strStr()
20. Trie problems
📚 30. STRING LEARNING ORDER

Follow this exact order:

1. String Basics
        ↓
2. Character & ASCII
        ↓
3. String Functions
        ↓
4. Character Array
        ↓
5. Frequency Array
        ↓
6. HashMap / Hashing
        ↓
7. Reverse String
        ↓
8. Two Pointers
        ↓
9. Palindrome
        ↓
10. Anagram
        ↓
11. Sorting Strings
        ↓
12. Substring
        ↓
13. Subsequence
        ↓
14. Fixed Sliding Window
        ↓
15. Variable Sliding Window
        ↓
16. String + Hashing
        ↓
17. String + Two Pointers
        ↓
18. String + Sliding Window
        ↓
19. String + Binary Search
        ↓
20. String + DP
        ↓
21. Trie
        ↓
22. KMP
        ↓
23. Rabin-Karp
        ↓
24. Z Algorithm
        ↓
25. Manacher's Algorithm
⏱️ 31. COMPLEXITY CHEAT SHEET
Operation	Complexity
Access s[i]	O(1)
length()	O(1)
Traverse	O(n)
Reverse	O(n)
Search	O(n)
Sort	O(n log n)
Frequency Array	O(n)
HashMap Frequency	O(n) average
Sliding Window	O(n)
Two Pointers	O(n)
🎯 32. HOW TO IDENTIFY THE PATTERN

Before solving any string problem, ask:

Question 1

Is the problem about character frequency?

YES → Frequency Array / HashMap
Question 2

Is it asking about a substring?

YES → Think Sliding Window
Question 3

Does the problem involve both ends?

YES → Two Pointers
Question 4

Is the order irrelevant?

YES → Frequency / Sorting
Question 5

Is the character set fixed?

YES → Array[26] / Array[128]
Question 6

Is window size fixed?

YES → Fixed Sliding Window
Question 7

Does window size change?

YES → Variable Sliding Window
Question 8

Is the problem about prefixes?

YES → Trie / Prefix techniques
Question 9

Is it comparing two sequences?

YES → DP / Two Pointers depending on problem
📝 33. HOW TO SOLVE EVERY STRING PROBLEM

Follow this process:

Step 1
Understand the problem
        ↓
Step 2
Write examples
        ↓
Step 3
Find brute force
        ↓
Step 4
Identify the pattern
        ↓
Step 5
Optimize
        ↓
Step 6
Write code
        ↓
Step 7
Test edge cases
        ↓
Step 8
Analyze Time Complexity
        ↓
Step 9
Analyze Space Complexity
        ↓
Step 10
Write the pattern in your notes
⚠️ 34. IMPORTANT EDGE CASES

Always test:

Empty string
Single character
Same characters
All characters same
No matching characters
Different lengths
Uppercase/lowercase
Spaces
Special characters
Repeated characters
Very long string

Example:

s = ""
s = "a"
s = "aaaa"
s1 = "abc"
s2 = "abc"
s1 = "abc"
s2 = "def"
🧠 35. IMPORTANT TEMPLATES
Frequency Array
int freq[26] = {0};

for(char c : s) {
    freq[c - 'a']++;
}
Two Pointers
int left = 0;
int right = s.length() - 1;

while(left < right) {

    if(s[left] != s[right])
        return false;

    left++;
    right--;
}
Fixed Sliding Window
int left = 0;

for(int right = 0; right < s.length(); right++) {

    // Add s[right]

    if(right - left + 1 > k) {

        // Remove s[left]
        left++;
    }

    // Process window
}
HashMap
unordered_map<char, int> mp;

for(char c : s) {
    mp[c]++;
}
🚀 36. STRING MASTERY CHECKLIST
Basics
 String declaration
 Input
 Output
 Length
 Character access
 Modification
 Concatenation
 Substring
 String functions
Character
 ASCII
 Character to integer
 Lowercase conversion
 Uppercase conversion
 Character checking
Patterns
 Frequency Array
 HashMap
 Sorting
 Two Pointers
 Fixed Sliding Window
 Variable Sliding Window
 Binary Search
 Dynamic Programming
Advanced
 Trie
 KMP
 Rabin-Karp
 Z Algorithm
 Manacher's Algorithm
Problems
 Valid Palindrome
 Valid Anagram
 Reverse String
 First Unique Character
 Longest Common Prefix
 Group Anagrams
 Longest Substring Without Repeating Characters
 Permutation in String
 Find All Anagrams in a String
 Longest Repeating Character Replacement
 Longest Palindromic Substring
 Palindromic Substrings
 String Compression
 Decode String
 Minimum Window Substring
 Word Break
 Edit Distance
 Longest Common Subsequence
 Trie Problems
 KMP Problems
