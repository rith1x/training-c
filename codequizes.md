# Question 1


Plantation
 
A certain crop grown in a sunny and hot climate needs more water per day than the same crop grown in a cloudy and cooler climate. There are, however, apart from sunshine and temperature, other climatic factors which influence the crop water need. These factors are humidity and wind speed. When it is dry, the crop water needs are higher than when it is humid. In windy climates, the crops will use more water than in calm climates.


 
The highest crop water needs are thus found in areas which are hot, dry, windy and sunny. The lowest values are found when it is cool, humid, and cloudy with little or no wind.
 

Given 3 crops along with the range of the amount of water required and the temperature range.
Crop 1: Rice – 5 to 10 cm , 20 to 27 degree celcius, all  inclusive.
Crop 2: Wheat – 12 to 15 cm, 21 to 24 degree celcius, all inclusive.
Crop 3: Cotton – 6 to 13 cm, 18 to 30 degree celcius, all inclusive.

Note: Follow the above crops order.

Determine what all crops can be planted, given the rainfall and temperature.

Input format:
The first input is an integer which corresponds to the water required.
The second input is an integer which corresponds to the temperature.

Output format:
Output is a string or a list of strings.
If there are multiple strings in the output, the order to be followed is Rice, Wheat, Cotton.

Sample Input 1:
6
20
Sample Output 1:
Rice
Cotton

Sample Input 2:
15
21
Sample Output 2:
Wheat

## Code

```c

```
# Question 2

Project predictor
 
In the three-field system, the sequence of fields use involved an autumn planting of grain (wheat, barley, or rye) and a spring planting of peas, beans, oats, or barley. The third was left fallow, in order to allow the soil of that field to regain its nutrients.
 


The 3 durations(4 months each) are,
Duration 1: 1-4 (all inclusive)
Duration 2: 5-8 (all inclusive)
Duration 3: 9-12 (all inclusive)

The 2 crops that were used are, 
Crop 1: Winter Wheat
Crop 2: Beans

The initial crops in three fields at month 1 are,
Field 1: Winter Wheat
Field 2: Beans
Field 3: Left Fallow

Given the month number and field number, write a program to print the crop name.

Input Format:
The first input is an integer corresponds to month number.
The second input is an integer corresponds to field number.

Output Format:
The output is the string.

Sample Input 1:
5
2
Sample Output 1:
Winter Wheat
 
Sample Input 2:
2
3
Sample Output 2:
Left Fallow
 
Sample Input 3:
2
2
Sample Output 3:
Beans
Problem Requirements:
C
Keyword	Min Count	Max Count
switch	1	1

# Question 3


DISNEY - LEAP YEAR
 
Patrick and Johnny found a notice in Disneyland stating that special adventures will be opened if the current year is a leap year. They were very excited and wanted to know that the year is leap year or not. Help them by writing a  program to check whether a given year is a leap year or not.

                                                                  

Input Format:

Input consists of a single integer.

Output Format:

Output consists of a single line. Refer sample output for details.

 

Sample Input 1:

1988

Sample Output 1:

1988 is a leap year

 

Sample Input 2:

1994

Sample Output 2:

1994 is not a leap year

 

Hint:

In general terms, the algorithm for calculating a leap year is as follows.

A year will be a leap year if it is divisible by 4 but not by 100. If a year is divisible by 4 and by 100, it is not a leap year unless it is also divisible by 400.

Thus years such as 1996, 1992, 1988 and so on are leap years because they are divisible by 4 but not by 100. For century years, the 400 rule is important. Thus, century years 1900, 1800 and 1700 while all still divisible by 4 are also exactly divisible by 100. As they are not further divisible by 400, they are not leap years.

# Question 4


Area Split

Pandu, the farmer, has three sons named, Bhima, Arjuna, and Nakula. He has also planned for Three field crop rotation and hand over each field to his three sons.


 

His sons are fond of even numbers. So they wanted to split the field only if he is able to split it into 3 even number (w.r.to area) fields. Pandu was so particular that the difference in the area of the fields should be minimum because he equally liked his three sons. He would split the field only if it is possible, else he would do normal farming.

Note that it is possible to split only if all three land have a positive area.

Write a program to help Pandu in splitting the land.
 

Input Format:

The first (and the only) input line contains an integer that corresponds to the area of the field.
Note: Assume inputs are positive.

Output Format:

In the first line of the output, print "Yes", if the field can be divided into three parts as per the requirements of Pandu, else print "No".
 

If the first line of the output is "Yes", the next line of the output consists of 3 integers separated by a space, which corresponds to the areas of the divided field. In case of distinct integers, the smallest number should appear first.

Sample Input 1:
6
Sample Output 1:
Yes
2 2 2
 
Sample Input 2:
7
Sample Output 2:
No

# Question 5

CALCULATE GRADE

 

Write a program that accepts the marks in 3 subjects of a student, calculates the average mark of the student, and prints the student's grade. If the average mark is greater than 90, then the grade is 'A'. If the average mark is between 80 and 90, then the grade is 'B'. If the average mark is between 70 and 80, then the grade is 'C'. If the average mark is between 60 and 70, then the grade is 'D'. If the average mark is between 50 and 60, then the grade is 'E'. If the average mark is less than 50, then the grade is 'F'.

 

Input Format:

Input consists of 3 lines. Each line consists of an integer.

 

Output Format:

Output consists of a single line. Refer sample output for the format.

 

Sample Input 1 :

45

45

45

 

Sample Output 1 :

The grade is F

 

Sample Input 2:

91

95

100

 

Sample Output 2:

The grade is A

 

 

Problem Requirements:
C
Keyword	Min Count	Max Count
switch	0	0

# Question 6

Demand for organic food

The demand for organic food is growing so fast that consumer demand is outstripping some domestic supplies.
 


The demand for organic food increases every year by 8.9%.

Write a program to find the increase in revenue after 3 years. Given the revenue in the first year is ‘x’ crores.

Input Format:
The first line of the input is an float that corresponds to the ‘x’ value.

Output Format:
Output is a float value that corresponds to the revenue after 3 years, rounded off to 2 decimal places.

Sample Input:
4
Sample Output:
5.17

# Question 7

Crop cultivation strategy
 
If a crop is grown for once, the fertility of the soil reduces by 30. After cultivation, if the land is left free for one month, the fertility increases by a factor of 2. If the fertility becomes 0, the crop cannot be grown further. Write a program to get the initial fertility and get the number of months the land is left free after every cultivation and find the number of times the crops are successfully grown before the fertility becomes 0.

 

Note 1: If the fertility becomes 0 in the middle of the growth of crop, the crop stops growing.

Note 2: Stop getting the input if the fertility becomes 0.

 

Input Format:

First input is an integer that corresponds to the initial fertility of the soil.

Next inputs are number of months the land is left free after every cultivation.

Output Format:

Number of times the crops are grown successfully.
 

Sample Input 1:
35
3
1
Sample Output 1:
2

Explanation:

35->after first cultivation fertility become 5

3-> after 3 months the fertility becomes 40( 5*2 = 10, 10*2 = 20, 20*2 = 40); After second cultivation the fertility becomes 10

1-> after 1 month the fertility becomes 20; In the middle of the crop growth the fertility becomes 0, so stop.So the total number of successful cultivations = 2.

Sample Input 2:
40
3
1
1
0
0
0
0
Sample Output 2:
7

Sample Input 3:
29
Sample Output 3:
0

# Question 8


Number Series Generation

Write a program to generate numbers between the given range and print the numbers which are divisible by 2 and not divisible by 3 and 5.

 

Input Format :

Input consists of range values a and b (integers) . Always a<b.

Output Format :

Output consists of integers between the range.

Refer Sample Input and Output for further details.

 

Sample Input and Output  1 :

[ All text of bold corresponds to Input and the rest output]

Enter the Range :
1
40
2 4 8 14 16 22 26 28 32 34 38

 

Sample Input and Output  2 :

Enter the Range :
20
80
22 26 28 32 34 38 44 46 52 56 58 62 64 68 74 76

 

Problem Requirements:
C
Keyword	Min Count	Max Count
for	1	-
if	1	-


# Question 9

Plants under shade

There are certain plants that needs to be grown under the shade of huge trees and the dead leaves from the trees become the natural manure for the plants. So willow trees are planted throughout the village at certain positions.



The position(distance from the first tree) follows the following series
0 6 10 17 22 30 36....

Input format:
Input is an integer which corresponds to number of willow trees, n.

Output format:
Output is the series that contains 'n' numbers.

Sample Input 1:
7
Sample Output 1:
0 6 10 17 22 30 36

Sample Input 2:
5
Sample Output 2:
0 6 10 17 22

# Question 10


Seven Segment Display
 
The Event Organizing Company "Buzzcraft" wanted to procure seven segment displays to display any numeric information display boards, scrolling ad banners, etc., to place it in their Events. The Company contracted out their order to MDC team at Orange labs who designs embedded sensing nodes and provides connectivity to tie them to the internet of things.

They are working on building seven segment displays. But the Company wanted to know how many seven segment displays will they need to represent an Integer x. They use one seven segment display to represent one digit of an Integer. For example: Integer "100" needs "3" seven segment boards to be represented.

Help them find out how many displays are needed?
 
Input Format:
First and only line consists of one positive integer that needs to be represented using seven segment displays.

Output Format:
Output a single line containing the number of digits of that integer.
Refer sample input and output for formatting specifications.

Sample Input 1:
1

Sample Output 1:
1

Sample Input 2:
1000

Sample Output 2:
4

# Question 11


Valid - While Continue

A number is said to be valid if it is divisible by 8.

Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers entered using a while loop and continue statement.


Input Format:

Input consists of integers.

Output Format:

Refer Sample Input and Output for formatting specifications.

[All text in bold corresponds to input and the rest corresponds to output]
 

Sample Input and Output:

Enter the number

8

Enter the number

16

Enter the number

96

Enter the number

6

The number of valid numbers entered is 3

Problem Requirements:
C
Keyword	Min Count	Max Count
while ....	1	1
continue	1	1
for	0	0


# Question 12


Lucky Prize -III

On the eve of the Silver Jubilee Celebrations of the college, the college management has decided to give Lucky Prizes for students whose enrollment numbers

does not contain any even digits
does not start or end with 1
 Given the enrollment number of a student, write a program to find whether the student is eligible for the lucky prize or not.
 

Input format:

Input consists of the enrollment number of the student.

Output Format:
Output consists of a string that is either 'yes' or 'no'.
Print ‘yes’ if the student is eligible and print ‘no’ otherwise.
Refer sample input and output for formatting specifications.

Note: Please provide input exactly as mentioned in below samples. No extra print statements should be present for prompting input.
 

Sample Input 1:
379517
Sample Output 1:
yes
Sample Input 2:
1371
Sample Output 2:
no
Sample Input 3:
3234
Sample Output 3:
no
Sample Input 4:
135
Sample Output 4:
no
Sample Input 5:
371
Sample Output 5:
no

# Question 13

Finding The Secret Code
 
Imagine you are participating in a code-breaking challenge. The challenge involves a secret five-digit code, but you are only given four digits of the code. To complete the code, you must determine the fifth digit and place it at either end of the provided four digits. However, there's a catch – the code is only considered valid if it forms a palindrome, meaning it reads the same forwards and backwards.

Your task is to create a program that helps you find the possible fifth digit to form a valid palindrome with the given four digits. If it is impossible to create a valid code, the program should display "Impossible," indicating that the secret code cannot be correct.


Input Format:
Input is a four digit integer. Assume that the input will always be a 4 digit number.

Output format:
The output is either a single digit integer if a palindrome is formed; or a string "Impossible", if a palindrome cannot be formed.
 
Sample Input 1:
3435
Sample Output 1:
5
 
Sample Input 2:
2315
Sample Output 2:
Impossible

Problem Requirements:
C
Keyword	Min Count	Max Count
while ....	0	0
do	0	0
for	0	0

