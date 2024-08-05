class NovaCrypt:
    def __init__(self, SECURE_KEY: int, SALT: int) -> None:
        self.secureKey = SECURE_KEY
        self.salt = 9 if SALT == 0 else SALT

    def encrypt(self, content: str) -> str:
        encrypted_content = ''
        for c in content:
            genSpecCode = (ord(c) + (self.secureKey * self.salt) + self.salt) % 256
            encrypted_content += chr(genSpecCode)
        return encrypted_content

    def decrypt(self, encrypted_content: str) -> str:
        decrypted_content = ''
        for c in encrypted_content:
            decSpecCode = (ord(c) - self.salt - (self.secureKey * self.salt)) % 256
            if decSpecCode < 0:
                decSpecCode += 256
            decrypted_content += chr(decSpecCode)
        return decrypted_content
