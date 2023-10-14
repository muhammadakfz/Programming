# Nama  : Muhammad Najwan Akbar
# Kelas : X MIPA 1
# Absen : 21

# 1. Buatlah program untuk membuat prediksi jika yang dimasukkan kata “X MIPA 9” maka output yang dihasilkan 
# “Ya, saya berada di kelas X MIPA 9”. Jika tidak sesuai dengan kata “X MIPA 9”, maka output yang dihasilkan “
# Maaf, saya tidak berada di kelas [kelas]”. [kelas] menggunakan inputan user.

inputKelas = input("Masukkan kelas: ")
dataKelas = inputKelas.upper().split()
data = " ".join(dataKelas)

if data == "X MIPA 9":
    print("Ya, saya berada di kelas X MIPA 9")  
else :
    print(f'Maaf, saya tidak berada di kelas {data}')

# Buatlah program  untuk menentukan gaji seorang karyawan berdasarkan waktu/jam kerjanya, dengan aturan bahwa 
# batasan jam kerja normal adalah 50 sampai 60 jam/minggu dengan upah Rp. 5000/jam. Jika lebih dari batas tersebut, 
# maka kelebihan perjamnya dibayar Rp. 7500/jam. Tetapi jika jam kerjanya kurang dari 50 jam/minggu, 
# maka dikenakan potongan Rp. 2500/jam. (Input : jam kerja/minggu dan output : total gaji)

jam_kerja_seminggu = int(input("Masukkan jam kerja setiap minggu: "))

if jam_kerja_seminggu >= 50 and jam_kerja_seminggu <= 60 :
    upah = jam_kerja_seminggu * 5000
    print(f'Total gaji {upah}')
elif jam_kerja_seminggu > 60 :
    upah = jam_kerja_seminggu * 5000 + ((jam_kerja_seminggu - 60) * 7500)
    print(f'Total gaji {upah}')
else :
    upah = (jam_kerja_seminggu * 5000) - ((50-jam_kerja_seminggu) * 2500)
    print(f'Total gaji {upah}')

# # 3. Membuat algoritma untuk menentukan kriteria kegemukan dengan menggunakan Indeks Massa Tubuh (IMT), 
# # yang dihitung berdasarkan rumus IMT = b / t2 (b dibagi t kuadrat) dengan b adalah berat badan (kg) dan t adalah tinggi badan (m). 
# # Kriteria penentuan berat berdasarkan IMT adalah sebagai berikut :
# # - IMT <= 18.5 termasuk Kurus
# # - 18.5 < IMT <= 25 termasuk Normal
# # - 25 < IMT <= 30 termasuk Gemuk
# # # - IMT > 30 termasuk Obesitas

berat_tubuh = float(input("Masukkan berat badan anda (kg): "))
tinggi_tubuh = float(input("Masukkan tinggi badan anda (cm): "))

indeks_massa = berat_tubuh / ((tinggi_tubuh/100)**2)

if indeks_massa <= 18.5:
    print("Anda termasuk Kurus")
elif 18.5 < indeks_massa <= 25:
    print("Anda termasuk Normal")
elif 25 < indeks_massa <= 30:
    print("Anda termasuk Gemuk")
else :
    print("Anda termasuk Obesitas")