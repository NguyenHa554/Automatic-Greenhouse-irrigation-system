import joblib
import treelite
from treelite import frontend
import sys

print(f"🐍 Python version: {sys.version}")
print(f"🌲 Treelite version: {treelite.__version__}")

model_filename = 's.joblib'

try:
    full_model = joblib.load(model_filename)
    if hasattr(full_model, 'booster_'):
        booster = full_model.booster_
    else:
        booster = full_model

    tl_model = frontend.from_lightgbm(booster)
    
    print("\n--- DANH SÁCH CÁC HÀM CÓ SẴN TRONG MODEL ---")
    # Lệnh này sẽ in ra tất cả các hàm mà tl_model đang sở hữu
    attributes = dir(tl_model)
    methods = [a for a in attributes if not a.startswith('_')]
    print(methods)
    print("----------------------------------------------")

except Exception as e:
    print(f"Lỗi: {e}")