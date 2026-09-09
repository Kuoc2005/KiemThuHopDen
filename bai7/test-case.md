# Danh Sách Ca Kiểm Thử Hộp Đen - Bài 7 (Phân Loại Tam Giác)

## Mô tả bài toán
- Đầu vào: Độ dài 3 cạnh `a`, `b`, `c` (Yêu cầu $a, b, c > 0$)
- Đầu ra: Phân loại tam giác (Tam giác đều, tam giác cân, tam giác thường, hoặc không phải tam giác)

---

## I. Danh sách Test Case cho Dữ liệu Hợp lệ (Dùng cho Issue hợp lệ)
| TC ID | Đầu vào (a, b, c) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC01 | a = 3, b = 3, c = 3 | Phân lớp tương đương (Tam giác đều) | Day la tam giac deu. |
| TC02 | a = 4, b = 4, c = 5 | Phân lớp tương đương (Tam giác cân) | Day la tam giac can. |
| TC03 | a = 3, b = 4, c = 5 | Phân lớp tương đương (Tam giác thường) | Day la tam giac thuong. |
| TC04 | a = 5, b = 8, c = 5 | Phân lớp tương đương (Tam giác cân cạnh b) | Day la tam giac can. |
| TC05 | a = 10, b = 10, c = 10 | Phân lớp tương đương (Tam giác đều số lớn) | Day la tam giac deu. |

---

## II. Danh sách Test Case cho Dữ liệu Không Hợp lệ & Biên (Dùng cho Issue không hợp lệ)
| TC ID | Đầu vào (a, b, c) | Kỹ thuật áp dụng | Kết quả mong đợi |
| :--- | :--- | :--- | :--- |
| TC06 | a = 1, b = 2, c = 3 | Giá trị biên ($a + b = c$) | Ba canh khong tao thanh tam giac. |
| TC07 | a = 1, b = 2, c = 4 | Phân lớp không hợp lệ ($a + b < c$) | Ba canh khong tao thanh tam giac. |
| TC08 | a = 0, b = 3, c = 3 | Giá trị biên ($a = 0$) | Cac canh cua tam giac phai lon hon 0. |
| TC09 | a = -1, b = 3, c = 3 | Phân lớp không hợp lệ ($a < 0$) | Cac canh cua tam giac phai lon hon 0. |
| TC10 | a = abc, b = 3, c = 3 | Ngoại lệ kiểu dữ liệu | Du lieu nhap vao khong hop le. |