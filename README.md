# Day14-of-43-of-Teachersdaychallenge
A. Presents
Problem Description: Given an array p of size n, where p[i] is the friend that friend i+1 gave a gift to. Each friend received exactly one gift. The task is to find, for each friend i, who gave a gift to them.

Key Idea/Logic:

This problem is about finding an inverse permutation.

The input tells us that friend i+1 gave a gift to friend p[i]. We want to know who gave a gift to friend j.

A simple way to solve this is to create a result array, let's call it ans, of size n.

Iterate through the input array p. For each i from 1 to n:

The i-th person gave a gift to p[i-1].

This means that the person who received the gift, p[i-1], got it from person i.

So, we can set ans[p[i-1] - 1] = i.

After the loop, the ans array will contain the solution.

Time Complexity: O(N) where N is the number of friends, as we perform a single pass through the input array to build the result.

Space Complexity: O(N) to store the result array.

Example:
Input:

4
2 3 4 1
Output: 4 1 2 3
Explanation:

Friend 1 gave a gift to 2.

Friend 2 gave a gift to 3.

Friend 3 gave a gift to 4.

Friend 4 gave a gift to 1.
The inverse is:

Friend 1 received a gift from 4.

Friend 2 received a gift from 1.

A. Dubstep
Problem Description: Vasya makes dubstep remixes by inserting "WUB" strings before, between, and after the original words of a song. Given a remix string, restore the original song.

Key Idea/Logic:

The core of the problem is to replace all occurrences of "WUB" with a single space.

Additionally, any leading or trailing "WUB"s should simply be removed, and multiple "WUB"s in a row should be replaced by a single space.

Approach:

Read the input string s.

Replace all occurrences of "WUB" with a space.

The resulting string might have multiple spaces in a row. Use a method to remove duplicate spaces and any leading/trailing spaces. Many languages have a split() function that can handle this, or you can do it with a loop.

Finally, print the words separated by single spaces.

Time Complexity: O(L) where L is the length of the string. String replacement and splitting can be done in linear time.

Space Complexity: O(L) to store the modified string.

Example:
Input: WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
Output: WE ARE THE CHAMPIONS MY FRIEND
Explanation:

WUBWEWUBARE... ->  WE ARE THE...

WUBWUB becomes a single space.

Leading and trailing WUBs are removed.
Friend 3 received a gift from 2.



