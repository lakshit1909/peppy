**Password Security & User Protection**

A simple C program that analyzes a password's strength, checks it against a list of commonly used/breached passwords, and gives the user actionable feedback along with a numeric security score (0–100).

**Features**
  1)Common password detection — flags well-known weak passwords (e.g. 123456, password, qwerty, admin, etc.)
  2)Character composition checks — detects presence of:
  3)Uppercase letters
  4)Lowercase letters
  5)Numbers
  6)Special characters
  7)Length validation — warns if the password is shorter than 6 characters
  8)Actionable feedback — tells the user exactly what's missing (e.g. "Capital letter is not there, use at least one capital letter")
  9)Weighted scoring system (0–100) based on:
    -Password length
    -Number of character types used
    -Whether the password appears in the common password list
  Strength rating — classifies the final score into:
    -Very Weak (< 30)
    -Weak (< 50)
    -Moderate (< 70)
    -Strong (< 85)
    -Very Strong (>= 85)
  Acceptance check — confirms whether the password meets all baseline requirements (length ≥ 6, has uppercase, lowercase, number, special character, and is   not a common password)
  
How It Works
  The program reads a password (up to 99 characters) from user input.
  It checks the password against a hardcoded list of common/breached passwords.
  It scans each character to determine which character categories are present.
  Based on length and character diversity, it prints out missing requirements.
  A score is calculated:
  Points awarded for length (longer = more points, capped/tiered)
  Points awarded per character type used (up to 4 types × 10 points)
  Bonus (+20) if the password is not a common password, penalty (−20) if it is
  Score is clamped between 0 and 100
  The final score is mapped to a human-readable strength rating.
  The program prints whether the password is accepted, along with a suggested strong password example if it isn't.
  
Requirements for an "Accepted" Password
  At least 6 characters long
  Contains at least one uppercase letter
  Contains at least one lowercase letter
  Contains at least one number
  Contains at least one special character
  Is not found in the common password list
  
Example Session
  Enter password: qwerty123

  -Capital letter is not there, use atleast one capital letter
  -Special character is not there, use atleast one special character

  Password does not meet the requirements.
  Use a password like J@ngmo-o782

  Password Score: 55/100
  Password Rating: Moderate
