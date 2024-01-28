#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    bool available;
    double rentalPrice;
    string rentedBy;
    int rentedDays;

public:
    Car(string make, string model, double rentalPrice) : make(make), model(model), available(true), rentalPrice(rentalPrice), rentedBy(""), rentedDays(0) {}

    string getMake() {
        return make;
    }

    string getModel() {
        return model;
    }

    bool isAvailable() {
        return available;
    }

    double getRentalPrice() {
        return rentalPrice;
    }

    string getRentedBy() {
        return rentedBy;
    }

    void rentCar(string customerName, int days) {
        if (available) {
            available = false;
            rentedBy = customerName;
            rentedDays = days;
            cout << "Car rented successfully to " << customerName << " for " << days << " days!" << endl;
        } else {
            cout << "Car is not available for rent." << endl;
        }
    }

    void returnCar() {
        if (!available) {
            available = true;
            rentedBy = "";
            cout << "Car returned successfully!" << endl;
        } else {
            cout << "Car is already available." << endl;
        }
    }

    int getRentedDays() {
        return rentedDays;
    }

    double calculateRentalEarnings() {
        return rentedDays * rentalPrice;
    }

    void modifyRentalPrice(double newPrice) {
        rentalPrice = newPrice;
        cout << "Rental price modified successfully!" << endl;
    }
};

class CarRentalSystem {
private:
    vector<Car> cars;

public:
    void addCar(string make, string model, double rentalPrice) {
        cars.push_back(Car(make, model, rentalPrice));
    }

    void rentCar(int carIndex, string customerName, int days) {
        if (carIndex >= 0 && carIndex < cars.size()) {
            cars[carIndex].rentCar(customerName, days);
        } else {
            cout << "Invalid car index." << endl;
        }
    }

    void returnCar(int carIndex) {
        if (carIndex >= 0 && carIndex < cars.size()) {
            cars[carIndex].returnCar();
        } else {
            cout << "Invalid car index." << endl;
        }
    }

    void displayAvailableCars() {
        cout << "Available Cars:" << endl;
        for (int i = 0; i < cars.size(); ++i) {
            if (cars[i].isAvailable()) {
                cout << i << ". " << cars[i].getMake() << " " << cars[i].getModel() << " - Rental Price: $" << cars[i].getRentalPrice() << "/day" << endl;
            }
        }
    }

    void displayRentedCars() {
        cout << "Rented Cars:" << endl;
        for (int i = 0; i < cars.size(); ++i) {
            if (!cars[i].isAvailable()) {
                cout << cars[i].getMake() << " " << cars[i].getModel() << " - Rented by: " << cars[i].getRentedBy() << endl;
            }
        }
    }

    double calculateTotalEarnings() {
        double totalEarnings = 0.0;
        for (size_t i = 0; i < cars.size(); ++i) {
            if (!cars[i].isAvailable()) {
                totalEarnings += cars[i].calculateRentalEarnings();
            }
        }
        return totalEarnings;}

    void modifyCarRentalPrice(int carIndex, double newPrice) {
        if (carIndex >= 0 && carIndex < cars.size()) {
            cars[carIndex].modifyRentalPrice(newPrice);
        } else {
            cout << "Invalid car index." << endl;
        }
    }
};

int main() {
    CarRentalSystem rentalSystem;

    rentalSystem.addCar("Toyota", "Corolla", 50.0);
    rentalSystem.addCar("Honda", "Civic", 60.0);
    rentalSystem.addCar("Ford", "Fiesta", 45.0);

    int rentChoice;
    int returnChoice;
    string customerName;
    int days;
    double newPrice;

    int choice;
    do {
        cout << "\n1. Rent a Car\n2. Return a Car\n3. Display Available Cars\n4. Display Rented Cars\n5. Calculate Total Earnings\n6. Modify Car Rental Price\n7. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                rentalSystem.displayAvailableCars();
                cout << "Enter the car number to rent: ";
                cin >> rentChoice;
                cout << "Enter rental duration (in days): ";
                cin >> days;
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin, customerName);
                rentalSystem.rentCar(rentChoice, customerName, days);
                break;
            }
            case 2: {
                rentalSystem.displayRentedCars();
                cout << "Enter the car number to return: ";
                cin >> returnChoice;
                rentalSystem.returnCar(returnChoice);
                break;
            }
            case 3: {
                rentalSystem.displayAvailableCars();
                break;
            }
            case 4: {
                rentalSystem.displayRentedCars();
                break;
            }
            case 5: {
                cout << "Total earnings: $" << rentalSystem.calculateTotalEarnings() << endl;
                break;
            }
            case 6: {
                rentalSystem.displayAvailableCars();
                cout << "Enter the car number to modify rental price: ";
                cin >> rentChoice;
                cout << "Enter new rental price: ";
                cin >> newPrice;
                rentalSystem.modifyCarRentalPrice(rentChoice, newPrice);
                break;
            }
            case 7: {
                cout << "Exiting the program. Thank you!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 7);

    return 0;
}