# Blackout OPS
* Họ và tên: Nguyễn Mạnh Thắng
* Mã Sinh Viên: 2021607883
# Hướng dẫn cài đặt và chạy game 
Bước 1: Tải project về Cách 1: Trên Github, chọn Code => Copy url, sau đó mở Terminal, gõ git clone + url Cách 2: Tải trực tiếp file Zip về và giải nén
Bước 2: Cài đặt Visual Studio 2022 Vào google gõ VS Community 2022 và tải về bản mới nhất, cài đặt lên máy tính
Bước 3: Chạy game Mở VS2022, chọn Open Project, mở file ProjectNewSdl.sln từ file đã tải về
# Mô tả chung về trò chơi
Thể loại: Game đi ải, platformer, Mario, Contra,....
![image](https://github.com/user-attachments/assets/36e5cfd1-0967-452e-8373-eb037196de0b)
Game sinh tồn phiêu lưu trong thế giới 2D, lấy ý tưởng từ tựa game nổi tiếng Contra nhưng sử dụng đồ họa Người chơi sẽ hóa thân vào vai một trong những nhân vật ở thế giới Fantasy, trên đường khám phá những thế giới mới.
# Các chức năng chính của trò chơi
- Điều khiển nhân vật bằng các phím a, d để di chuyển sang trái và phải
- Sử dụng nút phải chuột để bắn ra quả cầu ma thuật, nút trái chuột để nhảy di chuyển và tránh các chướng ngại
- Sử dụng các button chức năng như pause, quit
  ![image](https://github.com/user-attachments/assets/3635ca50-12f3-45bc-8708-87487ffd70f3)
- Có hai dạng quái: chuyển động và đứng yên
- Quái vật chuyển động sẽ tự đuổi người chơi trong phạm vi tấn công và quái vật tĩnh sẽ bắn đạn khi người chơi ở trong tầm ngắm của quái
- Chèn âm thanh vào các button
- Được phép chọn nhân vật, chọn Map tăng hứng thú cho người chơi
- Ghi điểm, được hiện ở thanh menu phía trên màn hình
- Khi kết thức trò chơi, ta có thể chơi lại hoặc thoát về menu ban đầu
![image](https://github.com/user-attachments/assets/af4374f9-42c4-4786-8b1d-be017513030e)
# Các kĩ thuật được sử dụng
- Sử dụng thư viện đồ họa SDL2
- Lập trình hướng đối tượng (class) dùng để tạo các đối tượng riêng biệt thực hiện các chức năng của trò chơi
- Sử dụng các kỹ năng cơ bản như Tile Map, kiểm tra va chạm, xử lí animation, frame,.... Ngoài ra em còn tự tìm hiểu và phát triển thêm thuật toán giúp quái tự di chuyển, bắn đạn khi nhân vật trong tầm ngắm
- Biến/kiểu dữ liệu/con trỏ/cấp phát động dùng trong các hàm trong thư viện
- Cho phép lựa chọn nhân vật, lựa chọn map, tăng hấp dẫn cho trò chơi
- Triển khai đóng gói dự án bằng docker.
# Hỗ trợ
- Sử dụng các phần mềm edit để vẽ ảnh nhân vật như PhotoShop, Canva
- Sử dụng phần mềm để tạo map tương đối rộng và đa dạng: Tiled
- Sử dụng Aseprite để vẽ các nhân vật, quái và chi tiết cho map
# Kết luận
- Sử dụng thư viện đồ họa SDL2
- Tự thiết kế đồ họa cho game (có sử dụng ý tưởng sẵn có trên các web như Crapix, itch.io,...)
- Thiết kế map, nhân vật đa dạng, có thể thay đổi
