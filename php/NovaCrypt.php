<?php

class NovaCrypt {
    private $secureKey;
    private $salt;

    public function __construct(int $SECURE_KEY, int $SALT) {
        $this->secureKey = $SECURE_KEY;
        $this->salt = ($SALT === 0) ? 9 : $SALT;
    }

    public function encrypt(string $content): string {
        $encryptedContent = '';
        for ($i = 0; $i < strlen($content); $i++) {
            $c = $content[$i];
            $genSpecCode = (ord($c) + ($this->secureKey * $this->salt) + $this->salt) % 256;
            $encryptedContent .= chr($genSpecCode);
        }
        return $encryptedContent;
    }

    public function decrypt(string $encryptedContent): string {
        $decryptedContent = '';
        for ($i = 0; $i < strlen($encryptedContent); $i++) {
            $c = $encryptedContent[$i];
            $decSpecCode = (ord($c) - $this->salt - ($this->secureKey * $this->salt)) % 256;
            if ($decSpecCode < 0) {
                $decSpecCode += 256;
            }
            $decryptedContent .= chr($decSpecCode);
        }
        return $decryptedContent;
    }
}

?>
