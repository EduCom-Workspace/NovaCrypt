class NovaCrypt {
    constructor(SECURE_KEY, SALT) {
        this.secureKey = SECURE_KEY;
        this.salt = SALT === 0 ? 9 : SALT;
    }

    encrypt(content) {
        let encryptedContent = '';
        for (let i = 0; i < content.length; i++) {
            let genSpecCode = (content.charCodeAt(i) + (this.secureKey * this.salt) + this.salt) % 256;
            encryptedContent += String.fromCharCode(genSpecCode);
        }
        return encryptedContent;
    }

    decrypt(encryptedContent) {
        let decryptedContent = '';
        for (let i = 0; i < encryptedContent.length; i++) {
            let decSpecCode = (encryptedContent.charCodeAt(i) - this.salt - (this.secureKey * this.salt)) % 256;
            if (decSpecCode < 0) {
                decSpecCode += 256;
            }
            decryptedContent += String.fromCharCode(decSpecCode);
        }
        return decryptedContent;
    }
}

export default NovaCrypt;

