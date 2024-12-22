import pandas as pd
import os

# Directory containing the CSV files
folder_path = "custom_dataset"

# List CSV files in the folder
csv_files = [file for file in os.listdir(folder_path) if file.endswith('.csv')]

# Merge all CSV files into one DataFrame
merged_data = pd.concat([pd.read_csv(os.path.join(folder_path, file)) for file in csv_files])

# Drop the 'msg count' column
if 'msgCount' in merged_data.columns:
    merged_data = merged_data.drop(columns=['msgCount'])

# Rename specific columns
renamed_columns = {
    'Temperature': 'temperature_celsius',
    'COValue': 'air_quality_Carbon_Monoxide',
    'Humidity': 'humidity'
}

merged_data = merged_data.rename(columns=renamed_columns)

merged_data.sort_values(by='EventProcessedUtcTime')

# Save the resulting DataFrame to a new CSV file
merged_data.to_csv("merged_file_processed.csv", index=False)

print("CSV files processed successfully!")
