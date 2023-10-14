# # Nama   : Muhammad Sholihul Abid
# # Kelas  : X MIPA 9
# # Absent : 16

# # Buatlah program kalkulator sederhana seperti tampilan di bawah ini! Kumpulkan source
# # code (dengan penjelasan menggunakan comment) dan outputnya!

# # function
# function penjumlahan
# from re import L
# from numpy import char


# def penjumlahan(x, y):
#     ans = x + y
#     return ans

# # function pengurangan
# def pengurangan(x, y):
#     ans = x - y
#     return ans

# # function perkalian
# def perkalian(x, y):
#     ans = x * y
#     return ans

# # function pembagian
# def pembagian(x, y):
#     ans = x / y
#     return ans

# print('==========Program Kalkulator Sederhana==========\n')

# pemasukkan
# user_input = int(input("Masukkan nilai pertama: "))
# user_input_operator = input("Pilih operator +, -, *, /: ")
# user_input2 = int(input("Masukkan nilai kedua: "))

# # penghitungan dan pengeluaran
# if (user_input_operator == '+'):
#     ans = penjumlahan(user_input, user_input2)
#     print(f'{user_input} {user_input_operator} {user_input2} = {ans}')
# elif (user_input_operator == '-'):
#     ans = pengurangan(user_input, user_input2)
#     print(f'{user_input} {user_input_operator} {user_input2} = {ans}')
# elif (user_input_operator == '*'):
#     ans = perkalian(user_input, user_input2)
#     print(f'{user_input} {user_input_operator} {user_input2} = {ans}')
# elif (user_input_operator == '/'):
#     ans = pembagian(user_input, user_input2)
#     print(f'{user_input} {user_input_operator} {user_input2} = {ans}')
# else :
#     print("Masukkan operator yang bener dong kakak!")
#     exit

# print('\n=================Program Selesai================')

# # 2. Lengkapi program berikut ini dengan mengisi kotak-kotak di bawah untuk permainan
# # tebak angka! Kumpulkan source code (dengan penjelasan menggunakan comment) dan
# # outputnya!

# library
from itertools import count
import random

# pemasukkan
angka_bawah = int(input("Masukkan angka batas bawah: "))
angka_atas = int(input("Masukkan angka batas atas: "))

x = random.randint(angka_bawah, angka_atas)
print("Kamu hanya punya 5 kesempatan untuk menebaknya!")

count = 0

while count < 5:
    count += 1

    tebakan_angka = int(input("Tebak sebuah angka: "))
    if tebakan_angka == x:
        print("Selamat kamu berhasil menebak! ", count, " kali")
        quit()
    elif tebakan_angka > x:
        print("Tebakanmu terlalu besar")
    else:
        print("Tebakanmu terlalu kecil")

if count >= 5:
    print("\nAngkanya adalah %d" % x)
    print("\tSemoga beruntung di kesempatan selanjutnya!")
        
