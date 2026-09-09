# Ca Kiểm Thử Hộp Đen - Bài 1 (Chu Vi Hình Chữ Nhật)

## I. Dữ liệu hợp lệ (Issue #1)
| TC ID | a | b | Kỹ thuật | Kết quả mong đợi |
| :--- | :--- | :--- | :--- | :--- |
| TC01 | 5 | 3 | Phân lớp tương đương | Chu vi hinh chu nhat = 16.00 |
| TC02 | 1 | 1 | Giá trị biên | Chu vi hinh chu nhat = 4.00 |
| TC03 | 10 | 5 | Phân lớp tương đương | Chu vi hinh chu nhat = 30.00 |

## II. Dữ liệu không hợp lệ & Biên (Issue #2)
| TC ID | a | b | Kỹ thuật | Kết quả mong đợi |
| :--- | :--- | :--- | :--- | :--- |
| TC06 | 0 | 5 | Giá trị biên (a = 0) | Chieu dai va chieu rong phai lon hon 0. |
| TC07 | -1 | 5 | Giá trị biên (a < 0) | Chieu dai va chieu rong phai lon hon 0. |
| TC11 | abc | 5 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |