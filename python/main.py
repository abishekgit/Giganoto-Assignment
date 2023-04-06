import json

# The "as f" syntax is used to create a file object named f that can be used to read from or write to the file.

# Define the department to filter for
department_to_filter = "IT"

# Open the data.json file for reading
with open("data.json", "r") as f:
    # Load the JSON data from the file
    data = json.load(f)

# Filter the data based on the specified department
filtered_data = {"employees": [employee for employee in data["employees"] if employee["department"] == department_to_filter]}

# Open the filtered_data.json file for writing
with open("filtered_data.json", "w") as f:
    # Write the filtered data to the file
    json.dump(filtered_data, f)

# Print a message indicating the process is complete
print(f"Data filtered for department '{department_to_filter}' and written to 'filtered_data.json'")
