import os
import sys
import joblib
import numpy as np
import treelite
import treelite_runtime
from treelite import frontend

os.makedirs(os.path.join(sys.prefix, "Library", "bin"), exist_ok=True)

model_filename = 'lgbm_irrigation_model.joblib'
output_c_dir = 'irrigation_model'

print(f" Đang tải mô hình LightGBM từ '{model_filename}'...")
model = joblib.load(model_filename)

num_features = model.n_features_in_
print(f" Mô hình yêu cầu {num_features} features đầu vào.")

tl_model = frontend.from_lightgbm(model.booster_)


print("Xuất gói mã nguồn C từ Treelite...")

os.makedirs(output_c_dir, exist_ok=True)

tl_model.compile(
    dirpath=output_c_dir,
    params={'parallel_comp': 4},
    verbose=True
)

print(f" Xuất mã nguồn thành công tại thư mục '{output_c_dir}/'.")


print(" Biên dịch thành thư viện chia sẻ (.so / .dll)...")

lib_path = os.path.join(output_c_dir, 'irrigation_model.so')

tl_model.export_lib(
    toolchain='gcc',          
    libpath=lib_path,
    params={'parallel_comp': 4},
    verbose=True
)

print("\n Hoàn tất quá trình chuyển đổi và biên dịch mô hình LightGBM")
