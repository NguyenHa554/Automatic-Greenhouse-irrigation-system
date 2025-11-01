import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

#---- Load datasets ----#


climate_df = pd.read_csv('GreenhouseClimate.csv', low_memory=False)
weather_df = pd.read_csv('Weather.csv', low_memory=False)
grodan_df = pd.read_csv('GrodanSens.csv', low_memory=False)

#------ Data frame merged ----#

merged_df = pd.merge(climate_df, weather_df, on='%time', how='inner')
full_df = pd.merge(merged_df, grodan_df, on='%time', how='inner')

print("Hợp nhất thành công!")
print(f"  - Bộ dữ liệu tổng hợp có {full_df.shape[0]} dòng và {full_df.shape[1]} cột.")

print("\nBắt đầu làm sạch và chuẩn hóa...")

# 3.1. Chuyển đổi cột '%time' sang định dạng datetime chuẩn
# Định dạng thời gian trong Excel là số ngày kể từ mốc '1899-12-30'
full_df['datetime'] = pd.to_datetime(full_df['%time'], unit='D', origin='1899-12-30')

# Đặt cột datetime làm chỉ mục (index) của DataFrame, rất tiện cho việc xử lý chuỗi thời gian
full_df.set_index('datetime', inplace=True)
full_df.drop('%time', axis=1, inplace=True) # Bỏ cột '%time' cũ

print("  - Đã chuyển đổi và đặt cột thời gian làm index.")


print(f"  - Số giá trị thiếu TRƯỚC khi xử lý:\n{full_df.isnull().sum().sort_values(ascending=False).head()}")