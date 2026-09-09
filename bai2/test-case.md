# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 2 (Tính Diện Tích Hình Chữ Nhật)

## Mô tả bài toán
- Đầu vào: Chiều dài `a`, Chiều rộng `b` (Yêu cầu $a > 0, b > 0$)
- Đầu ra: Diện tích $S = a \times b$

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (a) | Đầu vào (b) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- | :--- |
| TC01 | 5 | 3 | Phân lớp tương đương | Dien tich hinh chu nhat = 15.00 |
| TC02 | 1 | 1 | Giá trị biên ($a=1, b=1$) | Dien tich hinh chu nhat = 1.00 |
| TC03 | 10 | 5 | Phân lớp tương đương | Dien tich hinh chu nhat = 50.00 |
| TC04 | 100 | 50 | Phân lớp tương đương | Dien tich hinh chu nhat = 5000.00 |
| TC05 | 2.5 | 3.5 | Phân lớp tương đương (Số thực) | Dien tich hinh chu nhat = 8.75 |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Biên (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (a) | Đầu vào (b) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- | :--- |
| TC06 | 0 | 5 | Giá trị biên ($a = 0$) | Chieu dai va chieu rong phai lon hon 0. |
| TC07 | -1 | 5 | Giá trị biên ($a = -1$) | Chieu dai va chieu rong phai lon hon 0. |
| TC08 | 5 | 0 | Giá trị biên ($b = 0$) | Chieu dai va chieu rong phai lon hon 0. |
| TC09 | 5 | -1 | Giá trị biên ($b = -1$) | Chieu dai va chieu rong phai lon hon 0. |
| TC10 | -5 | -3 | Phân lớp không hợp lệ | Chieu dai va chieu rong phai lon hon 0. |
| TC11 | abc | 5 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |
| TC12 | 5 | xyz | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |