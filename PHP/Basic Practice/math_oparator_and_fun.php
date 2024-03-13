<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        $a=5;
        $b=7;

        // Arithmetic operators
        echo "Arithmetic operators:";
        echo "<br>Addition 5+7= ".$a+$b;
        echo "<br>Subtraction 5-7= ".$a-$b;
        echo "<br>Multiplication 5*7= ".$a*$b;
        echo "<br>Division 5/7= ".$a/$b;
        echo "<br>Modulus 5%7= ".$a%$b;
        echo "<br>Exponentiation 5**7= ".$a**$b;

        // Comparison operators
        echo "<br><br>Comparison operators(return bool value):";
        echo "<br>Grater then: 5>7 is= ".($a>$b);
        echo "<br>less then: 5<7 is= ".($a<$b);
        echo "<br>Is equql: 5==7 is= ".($a==$b);
        echo "<br>Is Identical: 5===7 is= ".($a===$b);
        echo "<br>Not equal: 5!=7 is= ".($a!=$b);
        echo "<br>Not Identical: 5!==7 is= ".($a!==$b);
        echo "<br>Grater equal: 5>=7 is= ".($a>=$b);
        echo "<br>less equal: 5<=7 is= ".($a<=$b);
        echo "<br>Spaceship: 5<=>7 is= ".($a<=>$b);
        echo "<br>Returns an integer less than, equal to, or greater than zero, depending on if $a is less than, equal to, or greater than $a. Introduced in PHP 7.";

        // Increment or Decrement Operators
        echo "<br><br>Increment or Decrement Operators";
        echo "<br>Pre-increment: ++$a is= ".++$a;
        echo "<br>Post-increment: ++$b is= ".++$b;
        echo "<br>Pre-decrement: --$a is= ".--$a;
        echo "<br>Post-decrement: --$b is= ".--$b;
        
    ?>
</body>
</html>