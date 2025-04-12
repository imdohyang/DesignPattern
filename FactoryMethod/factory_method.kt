// Animal 인터페이스
interface Animal {
    fun speak(): String
}

// Dog 클래스
class Dog : Animal {
    override fun speak(): String = "Woof!"
}

// Cat 클래스
class Cat : Animal {
    override fun speak(): String = "Meow!"
}

// AnimalFactory 클래스
class AnimalFactory {
    fun createAnimal(type: String): Animal? {
        return when (type.lowercase()) {
            "dog" -> Dog()
            "cat" -> Cat()
            else -> null
        }
    }
}

// 실행 메인 함수
fun main() {
    val factory = AnimalFactory()

    val animal1 = factory.createAnimal("dog")
    val animal2 = factory.createAnimal("cat")

    println(animal1?.speak() ?: "Unknown animal")
    println(animal2?.speak() ?: "Unknown animal")
}
