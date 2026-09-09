# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 6 (Tính Tổng S = 1 - 2 + 3 - 4 + ... + n)

## Mô tả bài toán
- Đầu vào: Số nguyên `n` (Yêu cầu $n > 0$)
- Đầu ra: Giá trị của tổng $S = 1 - 2 + 3 - 4 + \dots + (-1)^{n-1}n$

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (n) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC01 | n = 1 | Giá trị biên ($n = 1$) | Tong S = 1 |
| TC02 | n = 2 | Giá trị biên ($n$ chẵn nhỏ nhất) | Tong S = -1 |
| TC03 | n = 5 | Phân lớp tương đương ($n$ lẻ) | Tong S = 3 |
| TC04 | n = 10 | Phân lớp tương đương ($n$ chẵn) | Tong S = -5 |
| TC05 | n = 100 | Phân lớp tương đương ($n$ lớn) | Tong S = -50 |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Ngoại lệ (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (n) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC06 | n = 0 | Giá trị biên ($n = 0$) | n phai la so nguyen duong. |
| TC07 | n = -5 | Phân lớp không hợp lệ ($n < 0$) | n phai la so nguyen duong. |
| TC08 | n = abc | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |
| TC09 | n = 2.5 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |