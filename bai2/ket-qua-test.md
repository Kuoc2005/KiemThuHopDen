# Báo Cáo Kết Quả Chạy Kiểm Thử Thực Tế - Bài 2

| TC ID | Input (a, b) | Kết quả mong đợi | Kết quả thực tế | Trạng thái |
| :--- | :--- | :--- | :--- | :--- |
| TC01 | a=5, b=3 | S = 15.00 | Dien tich hinh chu nhat = 15.00 | **PASS** |
| TC02 | a=1, b=1 | S = 1.00 | Dien tich hinh chu nhat = 1.00 | **PASS** |
| TC03 | a=10, b=5 | S = 50.00 | Dien tich hinh chu nhat = 50.00 | **PASS** |
| TC04 | a=100, b=50 | S = 5000.00 | Dien tich hinh chu nhat = 5000.00 | **PASS** |
| TC05 | a=2.5, b=3.5 | S = 8.75 | Dien tich hinh chu nhat = 8.75 | **PASS** |
| TC06 | a=0, b=5 | Báo lỗi $\le 0$ | Chieu dai va chieu rong phai lon hon 0. | **PASS** |
| TC07 | a=-1, b=5 | Báo lỗi $\le 0$ | Chieu dai va chieu rong phai lon hon 0. | **PASS** |
| TC08 | a=5, b=0 | Báo lỗi $\le 0$ | Chieu dai va chieu rong phai lon hon 0. | **PASS** |
| TC09 | a=5, b=-1 | Báo lỗi $\le 0$ | Chieu dai va chieu rong phai lon hon 0. | **PASS** |
| TC10 | a=-5, b=-3 | Báo lỗi $\le 0$ | Chieu dai va chieu rong phai lon hon 0. | **PASS** |
| TC11 | a=abc, b=5 | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |
| TC12 | a=5, b=xyz | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |