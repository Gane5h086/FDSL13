# Store the second year percentage of students in an array
percentages = [75.5, 82.4, 64.3, 91.2, 57.5]

def shell_sort(arr):
  # Implement shell sort
  gap = len(arr) // 2
  while gap > 0:
    for i in range(gap, len(arr)):
      temp = arr[i]
      j = i
      while j >= gap and arr[j - gap] > temp:
        arr[j] = arr[j - gap]
        j -= gap
      arr[j] = temp
    gap //= 2

def display_top_records(arr, n):
  # Display the top n records
  for i in range(n):
    print(f"{i+1}. {arr[i]}")

# Sort the array in ascending order using shell sort
shell_sort(percentages)

# Display the top 5 records
display_top_records(percentages, 5)