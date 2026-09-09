# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 4 (Tính Số Ngày Của Tháng)

## Mô tả bài toán
- Đầu vào: `thang` (1-12), `nam` (> 0)
- Đầu ra: Số ngày trong tháng tương ứng (xét năm nhuận cho tháng 2)

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (thang, nam) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC01 | thang = 1, nam = 2024 | Phân lớp (Tháng 31 ngày) | Thang 1 nam 2024 co 31 ngay. |
| TC02 | thang = 4, nam = 2024 | Phân lớp (Tháng 30 ngày) | Thang 4 nam 2024 co 30 ngay. |
| TC03 | thang = 2, nam = 2024 | Giá trị biên (Năm nhuận % 4) | Thang 2 nam 2024 co 29 ngay. |
| TC04 | thang = 2, nam = 2023 | Giá trị biên (Năm không nhuận) | Thang 2 nam 2023 co 28 ngay. |
| TC05 | thang = 12, nam = 2024 | Giá trị biên (Tháng = 12) | Thang 12 nam 2024 co 31 ngay. |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Biên đặc biệt (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (thang, nam) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC06 | thang = 0, nam = 2024 | Giá trị biên (tháng = 0) | Thang (1-12) va nam (>0) khong hop le. |
| TC07 | thang = 13, nam = 2024 | Giá trị biên (tháng = 13) | Thang (1-12) va nam (>0) khong hop le. |
| TC08 | thang = 5, nam = 0 | Giá trị biên (năm = 0) | Thang (1-12) va nam (>0) khong hop le. |
| TC09 | thang = 5, nam = -2024 | Phân lớp không hợp lệ (năm âm) | Thang (1-12) va nam (>0) khong hop le. |
| TC10 | thang = 2, nam = 1900 | Biên đặc biệt (Chia hết 100 nhưng không cho 400 -> Không nhuận) | Thang 2 nam 1900 co 28 ngay. |
| TC11 | thang = 2, nam = 2000 | Biên đặc biệt (Chia hết 400 -> Năm nhuận) | Thang 2 nam 2000 co 29 ngay. |
| TC12 | thang = abc, nam = 2024 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |