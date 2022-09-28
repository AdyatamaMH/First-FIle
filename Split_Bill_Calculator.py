Bill = int(input("The Total Bill:"))
People = int(input("Number of People:"))
Tip = int(input("Percentage of The Tip:"))

Payment = (round(float((Tip / 100) * Bill) / People))

print(f"Each person owes: ${Payment}")