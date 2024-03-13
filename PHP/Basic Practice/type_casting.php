<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Type Casting</title>
</head>
<body>
    <!-- (string) - Converts to data type String
    (int) - Converts to data type Integer
    (float) - Converts to data type Float
    (bool) - Converts to data type Boolean
    (array) - Converts to data type Array
    (object) - Converts to data type Object
    (unset) - Converts to data type NULL -->

    <?php
        $data = 5;
        echo "<br><br>Theis is original data: ".$data."<br>";
        var_dump($data);

        $data = (string)$data;
        echo "<br><br>Converts to data type string: ".$data."<br>";
        var_dump($data);

        $data = (int)$data;
        echo "<br><br>Converts to data type int: ".$data."<br>";
        var_dump($data);

        $data = (float)$data;
        echo "<br><br>Converts to data type float: ".$data."<br>";
        var_dump($data);

        $data = (bool)$data;
        echo "<br><br>Converts to data type bool: ".$data."<br>";
        var_dump($data);

        $data = (array)$data;
        echo "<br><br>Converts to data type array: ".$data[0]."<br>";
        var_dump($data);

        $data = (object)$data;
        echo "<br><br>Converts to data type object: ".$data."<br>";
        var_dump($data);
    ?>
    
</body>
</html>