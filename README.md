# Bank_Management_System
 A simple Bank Management System built using C++, designed for educational purposes. This project demonstrates the practical use of object-oriented programming (OOP) concepts like classes, encapsulation, and function overloading, along with basic file handling and console-based UI.
# 💳 Bank Management System in C++

A console-based **Bank and ATM Management System** built in **C++**, designed for learning and simulating basic banking operations such as account registration, cash deposits and withdrawals, bill payments, and balance inquiry. Includes both Bank and ATM modes with a simple login mechanism.

---

## 📘 Project Overview

This project provides a real-world simulation of basic banking functions using Object-Oriented Programming in C++. It is a text-based interface that allows bank staff and customers to perform different operations like creating accounts, withdrawing or depositing money, checking balances, and making bill payments. 

It serves as a mini-project for students learning C++, especially those focusing on OOP concepts and console-based application development.

---

## 🧠 C++ Theory (Relevant Concepts)

### ✅ Object-Oriented Programming (OOP)
C++ is an object-oriented language that supports:
- **Classes & Objects** – The `bank` class encapsulates all functions related to banking.
- **Encapsulation** – Data like PIN, balance, and user details are kept private.
- **Abstraction** – Only necessary operations are exposed to users via menu functions.

### ✅ Key Concepts Used
- **Standard Input/Output** (`cin`, `cout`)
- **String Handling** (`string` class, `getline`)
- **File Handling** *(optional extension)*
- **System Utilities** – `system("cls")` to clear screen, `getch()` for secure PIN input
- **Loops and Switch Cases** – For menu navigation and control flow
- **Functions** – Each operation is modularized into its own function

---

## 🏦 Bank Management System Theory

A **Bank Management System** is software used to manage banking operations such as:

### Core Components:
- **Account Creation** – Register new users with ID, name, contact, and account number.
- **Deposit/Withdrawal** – Add or remove money from an account.
- **Bill Payment** – Simulate payment for utilities or services.
- **Balance Inquiry** – Check remaining account balance.
- **ATM Interface** – Lightweight interface for customers only (no account creation here).

This system focuses on the **functional model** of banking, aiming to streamline operations in a simulated environment, especially for learning and demonstration purposes.

---

## 📋 Features

### 🔐 Login System
- Secure access via Account Number and 4-digit PIN

### 🏦 Bank Management Panel
- Register a new user
- Deposit cash
- Withdraw cash
- Bill payments
- Check balance

### 🏧 ATM Management Panel
- Check balance
- Deposit money
- Withdraw money

---

## 🧰 Technologies Used

- **C++** (with Object-Oriented Programming)
- **Console I/O**
- **Windows Headers**: `conio.h`, `windows.h` for console control

---

## 🚀 Getting Started

### 🛠 Requirements

- C++ Compiler (g++, MSVC, Turbo C++)
- Windows OS (for `conio.h` and `system("cls")` compatibility)

### ▶️ How to Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/your-username/bank-management-system.git
   cd bank-management-system
