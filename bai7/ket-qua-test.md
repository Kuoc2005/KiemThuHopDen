# Báo Cáo Kết Quả Chạy Kiểm Thử Thực Tế - Bài 7

| TC ID | Input (a, b, c) | Kết quả mong đợi | Kết quả thực tế | Trạng thái |
| :--- | :--- | :--- | :--- | :--- |
| TC01 | a=3, b=3, c=3 | Tam giác đều | Day la tam giac deu. | **PASS** |
| TC02 | a=4, b=4, c=5 | Tam giác cân | Day la tam giac can. | **PASS** |
| TC03 | a=3, b=4, c=5 | Tam giác thường | Day la tam giac thuong. | **PASS** |
| TC04 | a=5, b=8, c=5 | Tam giác cân | Day la tam giac can. | **PASS** |
| TC05 | a=10, b=10, c=10 | Tam giác đều | Day la tam giac deu. | **PASS** |
| TC06 | a=1, b=2, c=3 | Không tạo thành tam giác | Ba canh khong tao thanh tam giac. | **PASS** |
| TC07 | a=1, b=2, c=4 | Không tạo thành tam giác | Ba canh khong tao thanh tam giac. | **PASS** |
| TC08 | a=0, b=3, c=3 | Báo lỗi cạnh $\le 0$ | Cac canh cua tam giac phai lon hon 0. | **PASS** |
| TC09 | a=-1, b=3, c=3 | Báo lỗi cạnh $\le 0$ | Cac canh cua tam giac phai lon hon 0. | **PASS** |
| TC10 | a=abc, b=3, c=3 | Báo lỗi kiểu dữ liệu | Du lieu nhap vao khong hop le. | **PASS** |