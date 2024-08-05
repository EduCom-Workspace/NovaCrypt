import NovaCrypt from './NovaCrypt.mjs'


const novaCrypt = new NovaCrypt(12345, 0);
const encrypted = novaCrypt.encrypt('Hello, World!');
console.log('JavaScript: Encrypted:', encrypted);
const decrypted = novaCrypt.decrypt(encrypted);
console.log('JavaScript: Decrypted:', decrypted);

