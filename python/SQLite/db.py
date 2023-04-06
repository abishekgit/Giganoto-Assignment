import sqlite3

conn = sqlite3.connect('students.db')

c = conn.cursor()

# Create the students table
c.execute('''CREATE TABLE students (
                id INTEGER PRIMARY KEY,
                name TEXT,
                age INTEGER,
                major TEXT
            )''')

# Commit the changes and close the connection
conn.commit()
conn.close()
