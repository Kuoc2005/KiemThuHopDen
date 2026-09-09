# BÁO CÁO BÀI TẬP THỰC HÀNH: KIỂM THỬ HỘP ĐEN (BLACK-BOX TESTING)

## Giới thiệu
Repository chứa mã nguồn và tài liệu thiết kế ca kiểm thử hộp đen cho 8 bài toán cơ bản theo yêu cầu môn Kiểm định chất lượng phần mềm.

## Danh sách các bài toán

| Thư mục | Tên bài toán | Kỹ thuật kiểm thử áp dụng |
| :--- | :--- | :--- |
| **Bai01** | Tính chu vi hình chữ nhật | Phân lớp tương đương, Giá trị biên, Ngoại lệ kiểu dữ liệu |
| **Bai02** | Tính diện tích hình chữ nhật | Phân lớp tương đương, Giá trị biên, Ngoại lệ kiểu dữ liệu |
| **Bai03** | Giải phương trình bậc 2 | Phân lớp tương đương ($\Delta$), Giá trị biên ($a=0$), Ngoại lệ |
| **Bai04** | Tính số ngày của một tháng | Giá trị biên (Tháng 1, 12, 2; Năm nhuận / không nhuận) |
| **Bai05** | Kiểm tra số nguyên tố | Giá trị biên ($n=1, 2$), Phân lớp không hợp lệ ($n \le 0$) |
| **Bai06** | Tính tổng $S = 1 - 2 + 3 - 4 + \dots + n$ | Giá trị biên ($n=1$), Phân lớp $n$ chẵn / $n$ lẻ |
| **Bai07** | Tìm UCLN của a và b | Phân lớp tương đương, Giá trị biên ($a, b \le 0$) |
| **Bai08** | Tính tổng $S = 1! + 2! + \dots + n!$ | Giá trị biên cận trên/dưới ($n=1, n=20$), Hàm giai thừa |

## Cấu trúc mỗi thư mục
Mỗi bài toán bao gồm 3 file:
1. `main.c` / `baiX.c`: Mã nguồn chương trình viết bằng ngôn ngữ C có xử lý bắt lỗi ngoại lệ.
2. `test-case.md`: Danh sách thiết kế các ca kiểm thử hộp đen (dữ liệu hợp lệ, không hợp lệ, biên).
3. `ket-qua-test.md`: Kết quả chạy thực tế và so sánh Pass/Fail.

## Hướng dẫn chạy chương trình
1. Di chuyển vào thư mục bài cần chạy: `cd bai1` 
2. Biên dịch code C: `gcc bai1_chu_vi_hinh_chu_nhat.c -o main`
3. Chạy chương trình: `./main`
