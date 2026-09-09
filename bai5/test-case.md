# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 5 (Kiểm Tra Số Nguyên Tố)

## Mô tả bài toán
- Đầu vào: Số nguyên `n` (Yêu cầu $n > 0$)
- Đầu ra: Thông báo `n` có phải là số nguyên tố hay không

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (n) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC01 | n = 2 | Giá trị biên (Số nguyên tố nhỏ nhất) | 2 la so nguyen to. |
| TC02 | n = 1 | Giá trị biên (Số dương nhỏ nhất, không phải SNT) | 1 khong phai la so nguyen to. |
| TC03 | n = 7 | Phân lớp tương đương (Số nguyên tố) | 7 la so nguyen to. |
| TC04 | n = 10 | Phân lớp tương đương (Hợp số) | 10 khong phai la so nguyen to. |
| TC05 | n = 97 | Phân lớp tương đương (Số nguyên tố lớn) | 97 la so nguyen to. |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Ngoại lệ (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (n) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC06 | n = 0 | Giá trị biên ($n = 0$) | n phai la so nguyen duong. |
| TC07 | n = -5 | Phân lớp không hợp lệ ($n < 0$) | n phai la so nguyen duong. |
| TC08 | n = abc | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |
| TC09 | n = 3.14 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |