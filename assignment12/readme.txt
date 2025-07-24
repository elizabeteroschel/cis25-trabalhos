===========================
C++ Real-World Dataset Project
===========================

Student: Elizabete Roschel  
Course: CIS 25 
Project: Reading and Displaying Real-World Data from a CSV File  

1. Dataset Chosen:
-------------------
Dataset Name: Netflix Movies and TV Shows  
Source: Kaggle.com  
Link: https://www.kaggle.com/datasets/shivamb/netflix-shows  
File Used: netflix.csv

This dataset contains information about TV shows and movies available on Netflix as of 2021. It includes titles, directors, cast, genres, release year, country, and more.


2. Program Description:
------------------------
This C++ program demonstrates the use of file input, string parsing, object-oriented programming, and real-world data handling.

The program:
- Reads data from a CSV file (`netflix.csv`)
- Skips the header row
- Loads the first 10 rows of the file
- Extracts 5 fields from each row:
   - Title
   - Director
   - Country
   - Genre
   - Release Year
- Stores the extracted data in a custom class named `Movie`
- Displays the data in a readable format on the console


3. How to Compile:
-------------------
Make sure `main.cpp` and `Movie.h` are in the same directory as your CSV file.

Then run:

