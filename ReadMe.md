# Rock Paper Scissors

Ushbu loyiha klassik Tosh Qog'oz Qaychi o'yinining C++ dasturlash tilidagi oddiy namunasi.

## O'yin Qoidalari

1. O'yinchi quyidagi variantlardan birini tanlashi kerak:
    - Tosh
    - Qog'oz
    - Qaychi
2. Kompyuter ham bir variantni tanlaydi.
3. G'olib quyidagi qoidalarga asoslanib aniqlanadi:
    - Tosh qaychini yengadi
    - Qaychi qog'ozni yengadi
    - Qog'oz toshni yengadi

## Talablar (C++)

- C++11 yoki undan keyingi versiya
- C++ kompilyatori (masalan, GCC, Clang, MSVC)
- CMake (ixtiyoriy, loyihani qurish uchun)
- Git (repoyitoriyani klonlash uchun)
- Matn muharriri yoki IDE (masalan, Visual Studio Code, CLion)

## O'rnatish

Repoyitoriyani kompyuteringizga klonlang:

```bash
git clone https://github.com/bayroqdor/RockPaperScissors.git
cd RockPaperScissors
```

## Foydalanish

O'yinni ishga tushiring:

```bash
./RockPaperScissors
```

## Kutubxona haqida

Kodimizdagi "cstdlib" kutubxonasi tasodifiy sonlar generatorini ishga tushiruvchi srand() funksiyasini va tizimning joriy vaqtini qaytaruvchi time() funksiyasini chaqirish uchun qo‘llaniladi. Quyidagi satrga e’tibor qarating:

```cpp
srand(time(0));
```

Bu funksiyalar quyidagilarni bajaradi:

srand() - bu C va C++ da tasodifiy sonlarni generatsiyalash uchun boshlang‘ich sonni (seed) belgilaydigan funksiyadir. Bu funksiyani chaqirmasdan, har safar dasturni ishga tushirganingizda, siz "tasodifiy" sonlarning bir xil ketma-ketligiga ega bo‘lasiz.

time(0) - funksiyasi tizimning joriy vaqtini (time_t) turidagi qiymat sifatida qaytaradi. Bu odatda 1970-yil 1-yanvar yarim tunidan boshlab Grinvich vaqti bo‘yicha o‘tgan soniyalar sonini ifodalaydi. So‘ngra, bu qiymat dastur har safar ishga tushirilganda tasodifiy sonlarning turli ketma-ketliklarini olish uchun srand() funksiyasiga argument sifatida ishlatiladi.

Agar bizning kodimiz bu kutubxonasiz ishlayotgan bo‘lsa, ehtimol, bu funksiyalar biz foydalanayotgan boshqa kutubxonaga allaqachon kiritilgan. Ammo, umuman olganda, kodimizning ko‘chma va o‘qish uchun qulay bo‘lishi uchun, biz foydalanayotgan barcha kutubxonalarni aniq ko‘rsatib o‘tganimiz ma’qul.

## Litsenziya

Ushbu loyiha MIT Litsenziyasi ostida litsenziyalangan. Batafsil ma'lumot uchun [LICENSE](LICENSE) faylini ko'ring.

## Hissa qo'shish

Takliflar qabul qilinadi! Iltimos, muammo bo'lsa pull request yuboring.

## Aloqa

Savollar yoki fikr-mulohazalargizni [muhsinbek@umft.uz] ga yuboring.
