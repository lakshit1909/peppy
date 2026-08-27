# **Password Security & User Protection**

A simple C program that analyzes a password's strength, checks it against a list of commonly used/breached passwords, and gives the user actionable feedback along with a numeric security score (0–100).

## **Features**
  1. Common password detection — flags well-known weak passwords (e.g. 123456, password, qwerty, admin, etc.)
  2. Character composition checks — detects presence of:
  3. Uppercase letters
  4. Lowercase letters
  5. Numbers
  6. Special characters
  7. Length validation — warns if the password is shorter than 6 characters
  8. Actionable feedback — tells the user exactly what's missing (e.g. "Capital letter is not there, use at least one capital letter")
  9. Weighted scoring system (0–100) based on:
     a. Password length
     b. Number of character types used
     c. Whether the password appears in the common password list
  10. Strength rating — classifies the final score into:
    a. Very Weak (< 30)
    b. Weak (< 50)
    c. Moderate (< 70)
    d. Strong (< 85)
    e. Very Strong (>= 85)
  Acceptance check — confirms whether the password meets all baseline requirements (length ≥ 6, has uppercase, lowercase, number, special character, and is   not a common password)
  
## **How It Works**
  1. The program reads a password (up to 99 characters) from user input.
  2. It checks the password against a hardcoded list of common/breached passwords.
  3. It scans each character to determine which character categories are present.
  4. Based on length and character diversity, it prints out missing requirements.
  5. A score is calculated:
  6. Points awarded for length (longer = more points, capped/tiered)
  7. Points awarded per character type used (up to 4 types × 10 points)
  8. Bonus (+20) if the password is not a common password, penalty (−20) if it is
  9. Score is clamped between 0 and 100
  10. The final score is mapped to a human-readable strength rating.
  11. The program prints whether the password is accepted, along with a suggested strong password example if it isn't.
  
## **Requirements for an "Accepted" Password**
  1. At least 6 characters long
  2. Contains at least one uppercase letter
  3. Contains at least one lowercase letter
  4. Contains at least one number
  5. Contains at least one special character
  6. Is not found in the common password list
  
## **Example Session**
  Enter password: qwerty123

  1. Capital letter is not there, use atleast one capital letter
  2. Special character is not there, use atleast one special character
  3. Password is commonly used, choose a different password

  Password does not meet the requirements.
  Use a password like J@ngmo-o782

  Password Score: 85/100
  Password Rating: Very Strong
