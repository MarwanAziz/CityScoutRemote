package net.marwanaziz.cityscoutremote

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform