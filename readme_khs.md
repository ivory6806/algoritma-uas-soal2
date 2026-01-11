# Program Cek Target IPK

Program berbasis C untuk menghitung dan menampilkan Indeks Prestasi Semester (IPS) berdasarkan target nilai mata kuliah yang ingin dicapai mahasiswa.

## 📋 Deskripsi

Program ini memungkinkan mahasiswa untuk:
- Menginput biodata mahasiswa (NIM, Nama, Prodi, Semester)
- Menginput daftar mata kuliah yang diambil
- Menentukan target nilai untuk setiap mata kuliah
- Menghitung IPS berdasarkan target nilai
- Menampilkan Kartu Hasil Studi (KHS) lengkap dengan detail perhitungan

## 👥 Kelompok 1

- 251110018 - Ari Andrean
- 251110014 - Ivory Alva Dias Kurniawan
- 251110010 - Adhitiya Agung Kurniawan
- 251110072 - Rizal Zaelani
- 251110065 - Wira Suteratama

## 📁 Struktur File

```
uas-soal2/
├── Sources/
│   ├── biodatakelompok.c    # Menampilkan informasi kelompok
│   ├── hitungips.c           # Menghitung IPS dan bobot nilai
│   ├── inputbiodatakhs.c     # Input biodata mahasiswa
│   ├── inputmatkul.c         # Input data mata kuliah
│   ├── inputnilai.c          # Input target nilai mata kuliah
│   ├── printkhs.c            # Menampilkan KHS
│   └── main.c                # Program utama
└── Headers/
    └── main.h                # Header file dengan definisi struct
```

## 🚀 Cara Kompilasi dan Menjalankan

### Kompilasi
```bash
gcc -o program_khs Sources/*.c -I Headers/
```

### Menjalankan Program
```bash
./program_khs
```

## 💻 Cara Penggunaan

1. **Input Biodata Mahasiswa**
   - Masukkan NIM
   - Masukkan Nama
   - Masukkan Program Studi
   - Masukkan Semester

2. **Input Jumlah Mata Kuliah**
   - Masukkan jumlah mata kuliah yang diambil (harus > 0)

3. **Input Data Mata Kuliah**
   - Untuk setiap mata kuliah, masukkan:
     - Kode mata kuliah
     - Nama mata kuliah
     - Jumlah SKS

4. **Input Target Nilai**
   - Masukkan target nilai untuk setiap mata kuliah (A/B/C/D/E)

5. **Lihat Hasil**
   - Program akan menampilkan KHS lengkap dengan:
     - Detail setiap mata kuliah
     - Bobot nilai (A=4, B=3, C=2, D=1, E=0)
     - Nilai SKS (NS)
     - Total SKS dan Total NS
     - IPS yang akan dicapai

## 📊 Sistem Penilaian

| Nilai | Bobot |
|-------|-------|
| A     | 4     |
| B     | 3     |
| C     | 2     |
| D     | 1     |
| E     | 0     |

**Rumus IPS:**
```
IPS = Total NS / Total SKS
NS (Nilai SKS) = SKS × Bobot Nilai
```

## ⚠️ Validasi Input

- Jumlah mata kuliah harus lebih dari 0
- Nilai harus dalam rentang A-E
- Jika input tidak valid, program akan memberikan pesan error dan meminta untuk mengulangi

## 🔧 Teknologi

- Bahasa: C
- Compiler: GCC
- Standard: C99 atau lebih tinggi

## 📝 Contoh Output

```
==================================================================================
 KARTU HASIL STUDI
 Target Yang Ingin Dicapai
==================================================================================

NIM      : 251110018
Nama     : Ari Andrean
Prodi    : Informatika
Semester : 3
 ---------------------------------------------------------------------------------
| No | Kode MK   | Mata Kuliah                         | SKS | Nilai | Bobot | NS |
 ---------------------------------------------------------------------------------
|  1 | IF123     | Pemrograman Lanjut                  |   3 | A     |    4 | 12 |
|  2 | IF124     | Struktur Data                       |   3 | B     |    3 |  9 |
 ---------------------------------------------------------------------------------
Total SKS: 6
Total NS : 21
IPS      : 3.50
```

## 📄 Lisensi

Program ini dibuat untuk keperluan tugas akademik.

---

**Catatan:** Pastikan semua file source code berada dalam folder yang sesuai sebelum melakukan kompilasi.