# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 3 (Giải Phương Trình Bậc 2)

## Mô tả bài toán
- Đầu vào: Hệ số `a`, `b`, `c`
- Đầu ra: Nghiệm của phương trình $ax^2 + bx + c = 0$

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (a, b, c) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC01 | a = 1, b = -3, c = 2 | Phân lớp ($\Delta > 0$) | Phuong trinh co 2 nghiem x1 = 2.00, x2 = 1.00 |
| TC02 | a = 1, b = -2, c = 1 | Phân lớp ($\Delta = 0$) | Phuong trinh co nghiem kep x = 1.00 |
| TC03 | a = 1, b = 0, c = 1 | Phân lớp ($\Delta < 0$) | Phuong trinh vo nghiem. |
| TC04 | a = 0, b = 2, c = -4 | Phân lớp ($a = 0, b \neq 0$) | Phuong trinh co 1 nghiem x = 2.00 |
| TC05 | a = 2, b = 5, c = 2 | Phân lớp ($\Delta > 0$) | Phuong trinh co 2 nghiem x1 = -0.50, x2 = -2.00 |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Biên (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (a, b, c) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC06 | a = 0, b = 0, c = 0 | Giá trị biên ($a=0, b=0, c=0$) | Phuong trinh vo so nghiem. |
| TC07 | a = 0, b = 0, c = 5 | Giá trị biên ($a=0, b=0, c \neq 0$) | Phuong trinh vo nghiem. |
| TC08 | a = abc, b = 2, c = 3 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |
| TC09 | a = 1, b = xyz, c = 3 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |
| TC10 | a = 1, b = 2, c = mno | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |