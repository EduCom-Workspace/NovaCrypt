<?php

require_once "NovaCrypt.php";


$novaCrypt = new NovaCrypt(12345, 0);

$content = "Hello, World!";
$encrypted = $novaCrypt->encrypt($content);
echo "PHP: Encrypted: " . $encrypted . "\n";

$decrypted = $novaCrypt->decrypt($encrypted);
echo "PHP: Decrypted: " . $decrypted . "\n";



?>