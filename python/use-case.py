from novacrypt import NovaCrypt


nova_crypt = NovaCrypt(12345, 0)
encrypted = nova_crypt.encrypt('Hello, World!')
print('Python: Encrypted:', encrypted)
decrypted = nova_crypt.decrypt(encrypted)
print('Python: Decrypted:', decrypted)
