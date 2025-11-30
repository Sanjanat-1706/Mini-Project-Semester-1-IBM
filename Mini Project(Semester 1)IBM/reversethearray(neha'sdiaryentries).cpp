/*
Problem 1: Reverse the Array (Neha’s Diary Entries)
🧩 Problem Story:

Neha keeps a diary of her daily exercise times (in minutes).
She wants to review her progress, but she prefers to see the latest day’s record first.

Write a program to help Neha reverse the order of her recorded exercise times.

✅ Task:

Given n numbers representing Neha’s daily exercise time, print them in reverse order.

🧠 Input Format:

The first line contains an integer n — the number of days.

The second line contains n space-separated integers representing exercise times.
Output Format:

Print the exercise times in reverse order on a single line separated by spaces.

🧩 Example 1:

Input
5
10 20 30 40 50

Output
50 40 30 20 10

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> exercise_times(n);
    for (int i = 0; i < n; ++i) {
        cin >> exercise_times[i];
}
    for (int i = n - 1; i >= 0; --i) {
        cout << exercise_times[i] << (i == 0 ? "" : " ");
    }

    cout <<endl;

    return 0;
}

