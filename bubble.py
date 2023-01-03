percentages = [75.5, 82.4, 64.3, 91.2, 57.5]

def bubble_sort(arr):
  
  for i in range(len(arr)):
    for j in range(0, len(arr)-i-1):
      if arr[j] > arr[j+1] :
        arr[j], arr[j+1] = arr[j+1], arr[j]

def display_top_records(arr, n):
  
  for i in range(n):
    print(f"{i+1}. {arr[i]}")


bubble_sort(percentages)

display_top_records(percentages, 5)