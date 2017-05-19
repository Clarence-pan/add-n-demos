<?php
/*
 * Add-N in PHP:
 * Requires: PHP (>= v5.3)
 *     run: php ./add-n.php
 */

$addN = function($n) {
    return function($x) use ($n) {
        return $n + $x;
    };
};

$add2 = $addN(2);

echo "add2(3) => " . $add2(3) . "\n";
