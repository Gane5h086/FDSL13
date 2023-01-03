# Store the first year percentage of students in an array
percentages = [75.5, 82.4, 64.3, 91.2, 57.5]

def quick_sort(arr, low, high):
  # Implement quick sort
  if low < high:
    pi = partition(arr, low, high)
    quick_sort(arr, low, pi-1)
    quick_sort(arr, pi+1, high)

def partition(arr, low, high):
  i = low-1
  pivot = arr[high]
  for j in range(low, high):
    if arr[j] <= pivot:
      i += 1
      arr[i], arr[j] = arr[j], arr[i]
  arr[i+1], arr[high] = arr[high], arr[i+1]
  return i+1

def display_top_records(arr, n):
  # Display the top n records
  for i in range(n):
    print(f"{i+1}. {arr[i]}")

# Sort the array in ascending order using quick sort
quick_sort(percentages, 0, len(percentages)-1)

# Display the top 5 records
display_top_records(percentages, 5)