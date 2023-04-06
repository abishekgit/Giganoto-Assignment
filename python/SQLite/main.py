import sqlite3
conn = sqlite3.connect('students.db')
c = conn.cursor()

# Create a new student


def create_student(name, age, major):
    c.execute(
        "INSERT INTO students (name, age, major) VALUES (?, ?, ?)", (name, age, major))
    conn.commit()
    print("Student created successfully")

# Read a student's information


def read_student(student_id):
    c.execute("SELECT * FROM students WHERE id=?", (student_id,))
    student = c.fetchone()
    if student:
        print("Student found:")
        print(f"ID: {student[0]}")
        print(f"Name: {student[1]}")
        print(f"Age: {student[2]}")
        print(f"Major: {student[3]}")
    else:
        print("Student not found")

# Update a student's information


def update_student(student_id, name, age, major):
    c.execute("UPDATE students SET name=?, age=?, major=? WHERE id=?",
              (name, age, major, student_id))
    conn.commit()
    print("Student updated successfully")

# Delete a student


def delete_student(student_id):
    c.execute("DELETE FROM students WHERE id=?", (student_id,))
    conn.commit()
    print("Student deleted successfully")


# Example usage
create_student("John Doe", 20, "Computer Science")
read_student(1)
update_student(1, "Jane Doe", 21, "Electrical Engineering")
read_student(1)
delete_student(1)

# Close the cursor and the database connection
c.close()
conn.close()
