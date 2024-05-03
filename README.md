# e2301482_Thong
My barchart
![image](https://github.com/e2301482/e2301482_Thong/assets/164739243/8020feaa-1ae9-4200-8328-2d1ac3008814)

My data

![image](https://github.com/e2301482/e2301482_Thong/assets/164739243/41f0acde-2800-487c-8cf4-5d400346ec3c)

This program will automatically retrieve the date, time, min max temperature and your current public IP address into the server's database. Then we will draw a graph of min max temperature in the database.
Note that the temperature will be automatically generated randomly.

How to run this app:
1. You must install vcpkg
- Open a command window (run as Administrator), and mkdir "PortableGit\bin" folder.
- Then type command:
>cd Downloads
>cd PortableGit
>cd bin
>git clone https://github.com/Microsoft/vcpkg.git
>cd vcpkg
>bootstrap-vcpkg.bat
>vcpkg integrate install
>vcpkg install curl[tool]
2. Include vcpkg to VS project
3. Launch app then you see a notification "![image](https://github.com/e2301482/e2301482_Thong/assets/164739243/13224d86-a98f-41b2-b38f-35f566564937). You know that you generated data to my server.
4. Launch this url to your brower to see the barchard: http://www.cc.puv.fi/~e2301482/appdev24gb.html
Remember launch with http NOT HTTPS
