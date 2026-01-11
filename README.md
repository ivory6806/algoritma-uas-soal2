# Program Cek Target IPS (KHS Mahasiswa)

Program ini merupakan aplikasi berbasis **bahasa C** untuk menghitung **Indeks Prestasi Semester (IPS)** mahasiswa berdasarkan mata kuliah, jumlah SKS, dan target nilai yang diinputkan.

Program disusun menggunakan **konsep modular (multi-file)** dengan pemisahan fungsi dan struktur data (`struct`), sesuai dengan standar pemrograman terstruktur.

---

## 📌 Fitur Program
- Menampilkan biodata kelompok
- Input biodata mahasiswa (NIM, Nama, Prodi, Semester)
- Input data mata kuliah (Kode, Nama, SKS)
- Input target nilai mata kuliah (A–E)
- Perhitungan:
  - Bobot nilai
  - Nilai Semester (NS)
  - Total SKS
  - Total NS
  - Indeks Prestasi Semester (IPS)
- Menampilkan Kartu Hasil Studi (KHS) dalam format tabel

---

## 📂 Struktur Repository
```
uas-soal2/
│
├── Sources/
│   ├── biodatakelompok.c
│   ├── hitungips.c
│   ├── inputbiodatakhs.c
│   ├── inputmatkul.c
│   ├── inputnilai.c
│   ├── printkhs.c
│   └── main.c
│
├── Headers/
│   └── main.h
│
└── README.md
```

---

## 🧩 Penjelasan File
| File | Keterangan |
|------|------------|
| `biodatakelompok.c` | Menampilkan biodata anggota kelompok |
| `inputbiodatakhs.c` | Input biodata mahasiswa |
| `inputmatkul.c` | Input data mata kuliah |
| `inputnilai.c` | Input nilai mata kuliah |
| `hitungips.c` | Proses perhitungan bobot, NS, total SKS, total NS, dan IPS |
| `printkhs.c` | Menampilkan KHS dalam bentuk tabel |
| `main.c` | Program utama |
| `main.h` | Header struct dan deklarasi fungsi |

---

## 🧮 Ketentuan Penilaian
| Nilai | Bobot |
|------|-------|
| A | 4 |
| B | 3 |
| C | 2 |
| D | 1 |
| E | 0 |

Rumus IPS:
```
IPS = Total NS / Total SKS
```

---

## ▶️ Cara Menjalankan Program

### 1️⃣ Compile Program
```bash
gcc Sources/*.c -o uas-soal2
```

### 2️⃣ Jalankan Program
```bash
./uas-soal2
```

---

## 👥 Biodata Kelompok
- 251110018 – Ari Andrean  
- 251110014 – Ivory Alva Dias Kurniawan  
- 251110010 – Adhitiya Agung Kurniawan  
- 251110072 – Rizal Zaelani  
- 251110065 – Wira Suteratama  

---

## 📚 Catatan
- Menggunakan bahasa **C**
- Menggunakan `struct` dan fungsi
- Program modular (multi-file)
- Input menggunakan `scanf`
- Tidak menggunakan `fgets`
- Cocok untuk **UAS / UTS Algoritma & Pemrograman Dasar**

---

## 📝 Lisensi
Program ini dibuat untuk keperluan **akademik dan pembelajaran**.
