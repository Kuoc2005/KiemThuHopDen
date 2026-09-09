# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 8 (Tính Tổng Giai Thừa S = 1! + 2! + ... + n!)

## Mô tả bài toán
- Đầu vào: Số nguyên `n` (Yêu cầu $1 \le n \le 20$)
- Đầu ra: Giá trị của tổng $S = 1! + 2! + 3! + \dots + n!$

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (n) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC01 | n = 1 | Giá trị biên ($n = 1$) | Tong S = 1 |
| TC02 | n = 2 | Giá trị biên ($n = 2$) | Tong S = 3 |
| TC03 | n = 3 | Phân lớp tương đương | Tong S = 9 |
| TC04 | n = 5 | Phân lớp tương đương | Tong S = 153 |
| TC05 | n = 20 | Giá trị biên ($n = 20$ cận trên) | Tong S = 2561327494111820313 |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Biên (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (n) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC06 | n = 0 | Giá trị biên ($n = 0$) | n phai nam trong khoang 1 den 20. |
| TC07 | n = -3 | Phân lớp không hợp lệ ($n < 0$) | n phai nam trong khoang 1 den 20. |
| TC08 | n = 21 | Giá trị biên ($n = 21 > 20$) | n phai nam trong khoang 1 den 20. |
| TC09 | n = abc | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |
| TC10 | n = 3.14 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |