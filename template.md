Tabii ki, C++ dilinde şablonları(templates) anlatırken,
    özellikle verdiğiniz `template <typename T,
                                    typename Container = std::deque<T>>` örneği
    üzerinden açıklayacağım.

    ## #Şablonlar(Templates) Nedir
    ?

    Şablonlar,
    C++ dilinde farklı veri türleriyle çalışabilen esnek ve yeniden
    kullanılabilir kod blokları yazmamıza olanak tanır.Şablonlar,
    aynı işlevi veya sınıfı farklı veri türleriyle kullanmamıza izin verir
        .

    ## #Temel Şablon Tanımlaması

    ####1. `template` Anahtar Kelimesi

    Şablonlar `template` anahtar kelimesi ile tanımlanır
        .

    ####2. Tür Parametresi(`typename` veya `class`)

        Şablon parametreleri genellikle `
    typename` veya `class` anahtar kelimeleri ile
    tanımlanır.Her iki anahtar kelime de aynıdır ve şablon parametrelerinin bir
    tür(type)
olduğunu belirtir
    .

    ####3. Şablon Parametrelerinin Kullanımı

        Şablon parametreleri `<>` işaretleri içinde yazılır ve birden fazla
            parametre virgülle ayrılır.

    ## #Verilen Örnek Üzerinden Açıklama

```cpp template <typename T, typename Container = std::deque<T>>
    class MutantStack : public std::stack<T, Container> {
  // Sınıfın içeriği
};
```

#### 1. `template <typename T, typename Container = std::deque<T>>`

- **`template`**: Şablonun başlangıcını belirtir.
- **`typename T`**: `T` adında bir tür parametresi tanımlar. `T` herhangi bir tür olabilir (int, double, std::string, vb.).
- **`typename Container = std::deque<T>`**: `Container` adında bir başka tür parametresi tanımlar ve varsayılan olarak `std::deque<T>` kullanılır. Bu, `Container` belirtilmezse `std::deque<T>` kullanılacağı anlamına gelir.

#### 2. Sınıf Tanımlaması

```cpp
class MutantStack : public std::stack<T, Container> {
  // Sınıfın içeriği
};
```

- **`class MutantStack`**: `MutantStack` adında yeni bir sınıf tanımlar.
- **`: public std::stack<T, Container>`**: `MutantStack` sınıfı, `std::stack<T, Container>` sınıfından türetilir. Bu, `MutantStack` sınıfının `std::stack` sınıfının tüm özelliklerine sahip olacağı anlamına gelir.
  - **`std::stack<T, Container>`**: `std::stack` C++ Standard Library'den bir yığın veri yapısıdır.
    - **`T`**: Yığındaki veri türünü belirtir.
    - **`Container`**: Yığının altında hangi konteynerin kullanılacağını belirtir (varsayılan olarak `std::deque<T>`).

### Şablonların Kullanım Avantajları

1. **Kodun Yeniden Kullanılabilirliği**: Aynı kodu farklı veri türleriyle kullanabilirsiniz. Bu, kod tekrarını azaltır.
2. **Esneklik**: Şablonlar, kodunuzu daha esnek hale getirir. Farklı veri türleri veya konteynerlerle çalışırken aynı şablonu kullanabilirsiniz.
3. **Tip Güvenliği**: Şablonlar, derleme zamanında tür kontrolü yapar, bu da tip hatalarını azaltır.

### Örnek Kullanım

```cpp
MutantStack<int> intStack;
MutantStack<double, std::vector<double>> doubleVectorStack;
```

    - **`MutantStack<int>`** : `int` türünde bir yığın oluşturur,
    varsayılan olarak `std::deque<int>` kullanır.-
        **`MutantStack<double, std::vector<double>>`** : `double` türünde
            ve `std::vector<double>` konteyneri ile bir yığın oluşturur.

    ## #Özet

    Şablonlar,
    C++ dilinde esnek ve yeniden kullanılabilir kod yazmanın güçlü bir yoludur
        . `template <typename T, typename Container = std::deque<T>>` gibi
            tanımlamalar,
    farklı veri türleri ve konteynerlerle çalışmanıza olanak tanır ve kod
        tekrarını azaltır.Şablonlar,
    özellikle veri yapıları ve algoritmalar gibi geniş çapta kullanılan kod
        parçaları için oldukça kullanışlıdır.