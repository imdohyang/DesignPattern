// 내부 시스템에서 사용하는 인터페이스
interface InternalClass {
    fun fetch(): String
}

// 외부에서 제공되는 클래스 (인터페이스와 다름)
class ExternalClass {
    fun search(): String {
        return "get user info"
    }
}

// 어댑터: ExternalClass를 InternalClass 형태로 감싸는 클래스
class Adapter(private val external: ExternalClass) : InternalClass {
    override fun fetch(): String {
        return external.search()
    }
}

fun main() {
    val external = ExternalClass()
    val adapter: InternalClass = Adapter(external)

    println(adapter.fetch())  // 출력: get user info
}
