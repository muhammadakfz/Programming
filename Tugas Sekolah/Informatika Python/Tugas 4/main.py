# # Nama  : Muhammad Akhyar Fahrurrozi
# # Kelas : X MIPA 7
# # Absen : 20

# # 1. Tampilkan output seperti dibawah ini menggunakan loop!
# # Output :
# # Angka 1
# # Angka 2
# # Angka 3
# # Angka 4
# # Angka 5
# # Angka 6
# # Angka 7
# # Angka 8
# # Angka 9
# # Angka 10

# user = int(input("Masukkan angka ke-n: "))
# for i in range(1, user+1):
#     print(f'Angka {i}')


# # 2 Tampilkan hasil penjumlahan bilangan asli dibawah 20 yang merupakan kelipatan 2 dan 5. 
# # Contoh penjumlahan dari 2 + 5 + 4 + 10 + 6 + 15 + 8 + 12 + 14 + 16 + 18.

# user = int(input("Masukkan angka ke-n: "))
# angka = 0

# for i in range(1, user):
#     if(i % 2 and i % 5 == 0):
#         angka += i
#     elif(i % 2 == 0):
#         angka += i
#     elif(i % 5 == 0):
#         angka += i
#     else:
#         continue

# print(angka)


# # # Tampilkan angka dari range 1 sampai 100 yang termasuk kelipatan 7!
# user = int(input("Masukkan angka ke-n: "))
# for i in range(1, user):
#     if i % 7 == 0:
#         print(i)

# a = int(input("Masukkan angka:"))
# for i in range(1, a+1):
#     print(f'angka {i}')   

# a = int(input("Masukkan angka: "))
# b = 0
# for i in range(1, a):
#     if(i % 2 == 0):
#         b += i
#     elif(i % 5 == 0):
#         b += i
#     elif(i % 2 == 0 and i % 5 == 0):
#         b += i
#     else:
#         continue

# print(b)

# a = int(input("Masukkan angka: "))
# for i in range(1, a):
#     if(i % 7 == 0):
#         print(i)