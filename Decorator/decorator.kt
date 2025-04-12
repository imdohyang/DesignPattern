// 컴포넌트 인터페이스
interface Coffee {
    fun cost(): Int
}

// 기본 커피 클래스
class BasicCoffee : Coffee {
    override fun cost(): Int = 5
}

// 데코레이터 추상 클래스
abstract class CoffeeDecorator(private val coffee: Coffee) : Coffee {
    override fun cost(): Int = coffee.cost()
}

// 우유 데코레이터
class MilkDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int = super.cost() + 2
}

// 설탕 데코레이터
class SugarDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int = super.cost() + 1
}

// 테스트 메인 함수
fun main() {
    val coffee = BasicCoffee()
    println("기본 커피 가격: ${coffee.cost()}") // 5

    val coffeeWithMilk = MilkDecorator(coffee)
    println("우유 추가 커피 가격: ${coffeeWithMilk.cost()}") // 7

    val coffeeWithSugar = SugarDecorator(coffee)
    println("설탕 추가 커피 가격: ${coffeeWithSugar.cost()}") // 6

    val coffeeWithMilkAndSugar = SugarDecorator(coffeeWithMilk)
    println("우유 + 설탕 커피 가격: ${coffeeWithMilkAndSugar.cost()}") // 8
}
