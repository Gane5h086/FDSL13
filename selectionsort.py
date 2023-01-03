# Store the first year percentage of students in an array
percentages = [75.5, 82.4, 64.3, 91.2, 57.5]

def selection_sort(arr):
  # Implement selection sort
  for i in range(len(arr)):
    min_idx = i
    for j in range(i+1, len(arr)):
      if arr[min_idx] > arr[j]:
        min_idx = j
    arr[i], arr[min_idx] = arr[min_idx], arr[i]

def display_top_records(arr, n):
  # Display the top n records
  for i in range(n):
    print(f"{i+1}. {arr[i]}")

# Sort the array in ascending order using selection sort
selection_sort(percentages)

# Display the top 5 records
display_top_records(percentages, 5)