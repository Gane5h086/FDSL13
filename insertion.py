# Store the second year percentage of students in an array
percentages = [75.5, 82.4, 64.3, 91.2, 57.5]

def insertion_sort(arr):
  # Implement insertion sort
  for i in range(1, len(arr)):
    key = arr[i]
    j = i-1
    while j >= 0 and key < arr[j] :
      arr[j + 1] = arr[j]
      j -= 1
    arr[j + 1] = key

def display_top_records(arr, n):
  # Display the top n records
  for i in range(n):
    print(f"{i+1}. {arr[i]}")

# Sort the array in ascending order using insertion sort
insertion_sort(percentages)

# Display the top 5 records
display_top_records(percentages, 5)