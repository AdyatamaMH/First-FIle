Time = int(input("Enter the time of second:s"))

seconds = Time % (24 * 3600)
hour = Time // 3600
minutes = Time // 60
seconds = Time % 60

print(f"Hours:Minutes:Seconds -> {hour}:{minutes}:{seconds}")


