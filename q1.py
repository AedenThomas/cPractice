def minimize_variation(arr):
    """
    Given an array of integers representing the number of teachers in each school,
    minimize the maximum variation in the number of teachers by performing
    the following operations any number of times:
    - If the number of teachers in a particular school is even, it can be
      divided by 2.
    - If the number of teachers in a particular school is odd, it can be
      multiplied by 2.

    Variation is defined as the largest difference between any two elements
    in the array.

    Args:
        arr (list): The array of integers representing the number of teachers
            in each school.

    Returns:
        int: The minimum variation obtained after performing the given
            operations on the array.
    """

    # Sort the array in ascending order
    arr.sort()

    # Initialize the minimum variation to the difference between the largest
    # and smallest elements in the array
    min_variation = arr[-1] - arr[0]

    # Iterate over the array
    for i in range(1, len(arr) - 1):
        # If the current element is even, divide it by 2
        if arr[i] % 2 == 0:
            arr[i] //= 2

        # If the current element is odd, multiply it by 2
        else:
            arr[i] *= 2

        # Update the minimum variation
        min_variation = min(min_variation, arr[-1] - arr[0])

    # Check if the minimum variation is achieved
    if min_variation == 0:
        return 0

    # If the minimum variation is not achieved, check if all elements are even
    if all(x % 2 == 0 for x in arr):
        return arr[-1] - arr[0] // 2

    # If not all elements are even, return the minimum variation
    return min_variation


print(minimize_variation([1, 2, 3, 4, 5]))  # Expected output: 3
print(minimize_variation( [4, 1, 5, 20, 3, 3]))  # Expected output: 3
