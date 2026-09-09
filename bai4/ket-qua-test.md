# Báo Cáo Kết Quả Chạy Kiểm Thử Thực Tế - Bài 4

| TC ID | Input (thang, nam) | Kết quả mong đợi | Kết quả thực tế | Trạng thái |
| :--- | :--- | :--- | :--- | :--- |
| TC01 | thang=1, nam=2024 | 31 ngày | Thang 1 nam 2024 co 31 ngay. | **PASS** |
| TC02 | thang=4, nam=2024 | 30 ngày | Thang 4 nam 2024 co 30 ngay. | **PASS** |
| TC03 | thang=2, nam=2024 | 29 ngày | Thang 2 nam 2024 co 29 ngay. | **PASS** |
| TC04 | thang=2, nam=2023 | 28 ngày | Thang 2 nam 2023 co 28 ngay. | **PASS** |
| TC05 | thang=12, nam=2024 | 31 ngày | Thang 12 nam 2024 co 31 ngay. | **PASS** |
| TC06 | thang=0, nam=2024 | Báo lỗi | Thang (1-12) va nam (>0) khong hop le. | **PASS** |
| TC07 | thang=13, nam=2024 | Báo lỗi | Thang (1-12) va nam (>0) khong hop le. | **PASS** |
| TC08 | thang=5, nam=0 | Báo lỗi | Thang (1-12) va nam (>0) khong hop le. | **PASS** |
| TC09 | thang=5, nam=-2024 | Báo lỗi | Thang (1-12) va nam (>0) khong hop le. | **PASS** |
| TC10 | thang=2, nam=1900 | 28 ngày | Thang 2 nam 1900 co 28 ngay. | **PASS** |
| TC11 | thang=2, nam=2000 | 29 ngày | Thang 2 nam 2000 co 29 ngay. | **PASS** |
| TC12 | thang=abc, nam=2024 | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |