/************************************************************
                LINEAR TRAVERSAL PATTERN
*************************************************************

Recognition Questions
---------------------
Before solving, ask yourself:

□ Can I solve this by visiting each element only once?
□ Do I need to compare every element?
□ Can I maintain the answer while traversing?
□ Is sorting unnecessary?

If YES → Think Linear Traversal

------------------------------------------------------------
THINKING FRAMEWORK (ITUR)
------------------------------------------------------------

I → Initialize
    • What variables do I need?
    • What should their initial values be?

T → Traverse
    • Visit every element exactly once.

U → Update
    • Under what condition should the variable(s) change?

R → Return
    • Return the final answer after traversal.

------------------------------------------------------------
UNIVERSAL TEMPLATE-

# Initialize

for element in arr:

    # Check Condition

    if condition:
        # Update Variable(s)

# Return Answer

------------------------------------------------------------
COMMON STATE VARIABLES
------------------------------------------------------------

Largest Element:-

largest = arr[0]

Update:
if current > largest

----------------------------------

Smallest Element:-

smallest = arr[0]

Update:
if current < smallest

----------------------------------

Count Problems:-
count = 0

Update:
if condition:
    count += 1

Examples:
✔ Count Even
✔ Count Odd
✔ Count Positive
✔ Count Negative

----------------------------------

Running Sum: 
sum = 0

Update:
sum += current

Examples:
✔ Sum of Array
✔ Average
✔ Total Marks

----------------------------------

Search:
Traverse

if current == target:
    return index

return -1

Concept:
✔ Early Return

----------------------------------

Multiple State Variables:
first = ...
second = ...

Update both carefully.

Examples:
✔ Second Largest
✔ Stock Buy & Sell
✔ Maximum Consecutive Ones

------------------------------------------------------------
INTERVIEW CHECKLIST
------------------------------------------------------------

□ What is my output?
□ What information should I carry?
□ When should I update it?
□ Can I stop early?
□ Do I need the index or the value?
□ Am I missing edge cases?

------------------------------------------------------------
COMMON EDGE CASES
------------------------------------------------------------

□ Empty Array
□ Single Element
□ All Elements Same
□ Negative Numbers
□ Duplicates
□ Already Sorted
□ Reverse Sorted

------------------------------------------------------------
TIME COMPLEXITY
------------------------------------------------------------

Traversal : O(n)

Space : O(1)

(Unless extra data structures are used.)

------------------------------------------------------------
COMMON QUESTIONS
------------------------------------------------------------

Easy
□ Largest Element
□ Smallest Element
□ Sum of Array
□ Linear Search
□ Count Elements
□ Check Sorted

Medium
□ Second Largest
□ Maximum Consecutive Ones
□ Best Time to Buy & Sell Stock

------------------------------------------------------------
BIGGEST LESSON
------------------------------------------------------------

Don't ask:

"Which loop should I write?"

Ask:

"What information do I need to carry while traversing?"

Everything else follows naturally.
************************************************************/