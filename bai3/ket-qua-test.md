# Báo Cáo Kết Quả Chạy Kiểm Thử Thực Tế - Bài 3

| TC ID | Input (a, b, c) | Kết quả mong đợi | Kết quả thực tế | Trạng thái |
| :--- | :--- | :--- | :--- | :--- |
| TC01 | a=1, b=-3, c=2 | x1 = 2.00, x2 = 1.00 | Phuong trinh co 2 nghiem x1 = 2.00, x2 = 1.00 | **PASS** |
| TC02 | a=1, b=-2, c=1 | x = 1.00 | Phuong trinh co nghiem kep x = 1.00 | **PASS** |
| TC03 | a=1, b=0, c=1 | Vô nghiệm | Phuong trinh vo nghiem. | **PASS** |
| TC04 | a=0, b=2, c=-4 | x = 2.00 | Phuong trinh co 1 nghiem x = 2.00 | **PASS** |
| TC05 | a=2, b=5, c=2 | x1 = -0.50, x2 = -2.00 | Phuong trinh co 2 nghiem x1 = -0.50, x2 = -2.00 | **PASS** |
| TC06 | a=0, b=0, c=0 | Vô số nghiệm | Phuong trinh vo so nghiem. | **PASS** |
| TC07 | a=0, b=0, c=5 | Vô nghiệm | Phuong trinh vo nghiem. | **PASS** |
| TC08 | a=abc, b=2, c=3 | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |
| TC09 | a=1, b=xyz, c=3 | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |
| TC10 | a=1, b=2, c=mno | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |