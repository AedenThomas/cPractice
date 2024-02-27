# In a kingdom there are two rivals named Sir a and sir b. they want to determine how many training rounds they need to undergo until their strenghts are equal. Your task is to write a function that calculates the number of training rounds requered. During each training round, the following rule is applied: • If Sir A's strength (A) is greater than Sir B's strength (B), Sir A's strength is reduced by B (A = An B). • If Sir B's strength is greater than Sir A's strength, Sir B's strength is reduceg by A -(B = B - A). The training rounds continue until sir a and sir b have equal strengths (a=b). the function should then return the number of rounds it took to achieve this balance. Note: Finite repetition of the above rule guarantees that you can achieve A=B Input Format The first line contains two space-seprated integers A B - denotes strength of Sir Of A and Sir B respectively

# Output Format Print an integer, denoting the number of rounds it takes to achieve balance. Sample Testcase #0 Testcase Input 7 9 Testcase Output 5 Explanation Given the initial strengths of Sir A and Sir B as A = 7 and B= 9, we need to determine the number of training rounds required for their strengths to become equal. • Initially, A is less than B, so we replace B with B - A, which becomes 2, while A remains the same as 7. Now A = 7 and B = 2. • Since A is greater than B this time, we replace A with A - B, which becomes 5, while B remains the same as 2. Now A = 5 and B = 2. • Since A is still greater than B, we repeat the process by replacing Anar with A - B again, resulting in A = 3 and B = 2. • This time, A is still greater than B, so we repeat the process once more by replacing A with A - B, resulting in A = 1 and B = 2. • Since A is less than B now, we replace B with B - A, which becomes 1, while A remains the same as 1. Now A = 1 and B = 1. • Finally, A and B are equal, and it took a total of 5 training rounds to achieve this balance. Therefore, the output is 5, indicating the number of training rounds required for Sir A and Sir B to have equal strengths.

# sample Testcase #1 Testcase Imput 3 8 Testcase Output: 4 Explanation Given the initial strengths of Sir A and Sir B as A = 3 and B = 8, we need to determine the number of training rounds required for their strengths to become equal. • Initially, A is less than B, so we replece B with B - A, which becomes 5, while A remains the same as 3. Now A = 3 and B = 5. • Since A is still less than B, we repeat the process by replacing B with B

# A again, resulting in B = 2 and A = 3. • This time, A is greater than B, so we replace A with A - B, which becomes 1, while B remains the same as 2. Now A = 1 and B = 2. • Since A is still less than B, we repeat the process once more by replacing B with B - A, resulting in B = 1 and A = 1. • Finally, A and B are equal, and it took a total of 4 training rounds to achieve this balance. Therefore, the output is 4. GIve code in python
# Sample input0:
# 7 9
# Sample output0:
# 5
# Sample input:
# 3 8
# Sample output1:
# 4


def calculate_training_rounds(A, B):
    rounds = 0
    
    while A != B:
        if A < B:
            B -= A
        else:
            A -= B
        rounds += 1
    
    return rounds

# Sample Test Cases
print(calculate_training_rounds(7, 9))  # Output: 5
print(calculate_training_rounds(3, 8))  # Output: 4
