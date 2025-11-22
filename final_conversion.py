import os
import joblib
import treelite
import tl2cgen

# 1. Config
model_filename = 'irrigation_regressor.joblib'
output_dir = 'irrigation_regressor_model'

print(f"📂 Loading model from '{model_filename}'...")

# 2. Load Model
try:
    full_model = joblib.load(model_filename)
    
    # Extract booster
    if hasattr(full_model, 'booster_'):
        booster = full_model.booster_
    else:
        booster = full_model

    # Convert to Treelite format
    print("🔄 Converting to Treelite model...")
    tl_model = treelite.frontend.from_lightgbm(booster)
    print(f"📊 Model features: {tl_model.num_feature}")

except Exception as e:
    print(f"❌ Error loading model: {e}")
    exit(1)

# 3. Generate C Code using TL2cgen
print(f"📦 Generating C code into '{output_dir}/'...")

os.makedirs(output_dir, exist_ok=True)

try:
    tl2cgen.generate_c_code(
        tl_model, 
        dirpath=output_dir, 
        params={'parallel_comp': 4},
        verbose=True
    )
    
    print(f"\n✅ SUCCESS! C code generated in: {output_dir}")

except Exception as e:
    print(f"\n❌ Error during generation: {e}")