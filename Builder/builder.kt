class Person {
    var name: String? = null
    var age: Int? = null
    var address: String? = null

    fun print() {
        println("이름: $name")
        println("나이: $age")
        println("주소: $address")
    }
}

class PersonBuilder {
    private val person = Person()

    fun withName(name: String): PersonBuilder {
        person.name = name
        return this
    }

    fun withAge(age: Int): PersonBuilder {
        person.age = age
        return this
    }

    fun withAddress(address: String): PersonBuilder {
        person.address = address
        return this
    }

    fun build(): Person {
        return person
    }
}

fun main() {
    val person = PersonBuilder()
        .withName("홍길동")
        .withAge(20)
        .withAddress("양산시 부산대학로")
        .build()

    person.print()
}
