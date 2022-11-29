from Account import Account
from Customer import Customer
from Bank import Bank

b1 = Bank("BNI")
custom = []

def main():
    y = 1
    while y == 1:
        option = int(input("Options:\n 1. Admin\n 2. Customer\n"))
        if option == 1:
            print("You have chosen Admin.")
            adminAns()
        elif option == 2:
            print ("You have chosen Customer.")
            cusAns()
        else:
            y += 1

def cusAns():
    optioncus = int(input("Choices available for Customer\n 1. Register\n 2. Deposit\n 3. Withdraw"))
    if optioncus == 1:
        f = input("First Name: ")
        l = input("Last Name: ")
        customPin = input("Pin: ")
        balance = input("Balance: $")
        custom.__data.append(
            {
            "f": f,
            "l": l,
            "customPin": customPin,
            "balance": int(balance)
                    }
                )
        b1.__bank.addCustomer(f, l, customPin)
        b1.__bank.getCustomer(len(b1.__data)-1).setAccount(Account(int(balance)))

    elif optioncus == 2:
        for h in custom:
            print (h)
        amount = int(input("How much do you want to deposit?: $."))
        deposit = print(b1.getCustomer().getAccount().deposit(amount))
    elif optioncus == 3:
        for h in custom:
            print (h)
        amount = int(input("How much do you want to withdraw?: $."))
        deposit = print(b1.getCustomer().getAccount().withdraw(amount))    
    else:
        return

def adminAns():
    optionAd = int(input("Choices available for Admin\n 1. Add customer\n 2. Delete customer\n 3. Check Customer Data\n"))
    if optionAd == 1:
        FName = input("Insert the customers first name")
        LName = input("Insert the customers last name")
        b1.addCustomer(FName, LName)
        custom.append(FName + " " + LName)
    elif optionAd == 2:
        for h in custom:
            print(h)
        deletecustom = int(input("Choose the customer you want to delete"))
        index = deletecustom - 1
        b1.deleteCustomer(index)
    elif optionAd == 3:
        for h in custom:
            print(h)
        datacustom = int(input("Choose the customers data you want to see"))
        index1 = datacustom - 1
        print(b1.getCustomer().getFirstName().getLastName())
        
    else:
        return
