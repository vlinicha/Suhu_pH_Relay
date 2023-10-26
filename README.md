# Suhu_pH_Relay
# Nama : Alvlinicha Nadya Anindita

ALAT DAN BAHAN :
1.	Komputer + software Arduino IDE
2.	Arduino 
3.	Modul relay 4 channel
4.	Sensor suhu DS18B20
5.	Adapter DS18B20
6.	Sensor ph meter
7.	Kabel probe ph meter 
8.	Kabel USB untuk Arduino
9.	Kabel Jumper Male to Female
10.	Project board

LANGKAH KERJA :
1. Langkah pertama anda harus menginstal software Arduino IDE pada komputer anda. 
2. Setelah menginstal software Arduino IDE dibutuhkan juga library sensor suhu DS18B20 dan sensor ph meter terlebih dahulu,berikut linknya  (https://github.com/matmunk/DS18B20) dan (https://github.com/DFRobot/DFRobot_EC).
3. Lalu untuk menginstal library sensor suhu DS18B20 dan sensor ph meter, maka masukkan link library pada menu preference secara bergantian  pada  Arduino IDE (cara penginstalan library dan penambahan board ada pada file di atas) lalu tekan tombol "OK".
4. Jika librarynya sudah terinstal dan ditambahkan, maka anda bisa mulai memasukkan programnya (contoh program ada pada file "suhu_ph_relay" diatas). 
5. Setelah library ditambahkan maka program dapat dimasukkan dan jangan lupa di upload ke Arduino, kemudian buka serial monitor di Arduino IDE untuk melihat pembacaan suhu dan ph serta status relay lalu pantau serial monitor untuk melihat suhu dan ph yang terbaca dan status relay yang berubah sesuai dengan kondisi suhu dan ph-nya.
6. Lalu siapkan beberapa jenis air yang ingin diketahui nilai suhu-nya dan nilai ph-nya.
7. Masukkan alat sensor suhu DS18B20 dan alat sensor ph meter secara bersamaan  ke dalam beberapa jenis air tersebut, diamkan beberapa saat hingga relay dapat membaca perubahan kondisi suhu dan ph-nya.

WIRING/PENGKABELAN :
1.	Hubungkan VCC dan GND Arduino ke jalur positif dan negative project board menggunakan kabel jumper.
2.	Koneksikan modul relay ke Arduino, dengan cara
3.	Hubungkan kabel sensor suhu DS18B20 dengan adapter DS18B20
- hubungkan kabel kuning pada sensor suhu DS18B20 dengan pin out D0 adapter DS18B20
- hubungkan kabel hitam pada sensor suhu DS18B20 dengan pin out GND adapter DS18B20
- hubungkan kabel merah pada sensor suhu DS18B20 dengan pin out VCC adapter DS18B20
4.	Setelah terhubung , lalu pasang kabel jumper wires male to female untuk menghubungkan adapter DS18B20 dengan VCC dan GND ke project board.
-	 Hubungkan kabel warna merah dengan pin VCC adapter DS18B20 ke VCC Arduino yang sudah tersambung pada project board.
Hubungkan kabel warna cokelat dengan pin GND adapter DS18B20 k- Hubungkan VCC modul relay yang berkabel kuning ke project board yang sudah terhubung dengan VCC dari Arduino.
- Hubungkan GND modul relay yang berkabel cokelat ke project board yang sudah terhubung dengan GND dari Arduino.
- Hubungkan 2 pin kontrol relay pada modul relay yang berkabel warna merah ke pin 2 digital dan yang warna orange ke pin 3 digital pada Arduino.
-	e GND Arduino yang sudah tersambung pada project board.
-	Hubungkan  kabel warna ungu dengan pin SIG adapter DS18B20 ke pin 7 (pin digital) Arduino.
5.	Kemudian sambungkan modul sensor ph dengan sensor ph konektor.
6.	Lalu hubungkan modul sensor ph ke  pin Arduino serta VCC dan GND yang sudah terhubung ke project board dengan menggunakan kabel jumper male to female.
-	Hubungkan kabel warna kuning dengan pin VCC modul sensor ph ke VCC Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna orange dengan pin GND modul sensor ph ke GND Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna cokelat dengan pin PO modul sensor ph ke pin A0 (pin analog) Arduino
7.	Setelah itu sambungkan pin-pin modul LCD ke project board dengan 
menggunakan kabel jumper male to female.
-	Hubungkan kabel warna hijau dengan pin VCC modul LCD ke VCC Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna biru dengan pin GND modul LCD ke GND Arduino yang sudah tersambung pada project board.
-	Hubungkan kabel warna orange dengan pin SDA modul LCD ke pin A4 (pin analog) Arduino.
-	Hubungkan kabel warna kuning dengan pin SCL modul LCD ke pin A5 (pin analog) Arduino.
8.	Hubungkan Arduino dengan computer menggunakan kabel USB Arduino, lalu upload programnya (untuk rangkaian lebih jelasnya ada di file atas).

CATATAN :
Disini saya hanya menggunakan 2 channel dari modul relay dikarenakan kurangnya arus pada komputer saya, jika anda memiliki modul relay 2 channel sebaiknya menggunakan itu saja.
TETAP SEMANGAT KARENA HIDUP MASIH PANJANG🙂🙂
