<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Variaables and there ditails</title>
</head>
<body>
    <?php
        $int=10;
        $string="Abdullah Md Jahid hassan";
        $float=5.697;
        $boolean=true;
        $array= array("abdullah", "Md", "Jahid","Hassan");
        $null=null;

        // We can declare the variable by '$'. To assign the value we use '='.
        // The echo print the value. and 'ver_dump()' show the details of the variable.
        echo "<br><br>This will Be a Integer= ";
        echo $int."<br>";
        var_dump($int);

        echo "<br><br>This will Be a String= ";
        echo $string."<br>";
        var_dump($string);

        echo "<br><br>This will Be a Float= ";
        echo $float."<br>";
        var_dump($float);

        echo "<br><br>This will Be a Boolean= ";
        echo $boolean."<br>";
        var_dump($boolean);

        echo "<br><br>This will Be a Array= ";
        echo $array[3]."<br>";
        var_dump($array);
        
        echo "<br><br>This will Be a Null= ";
        echo $null."<br>";
        var_dump($null);
    ?>
</body>
</html>