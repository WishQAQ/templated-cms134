<?php
$z[0]=Array("field","",13,36);
$z[0][4]['name']="id";
$z[1]=Array("field","",38,67);
$z[1][4]['name']="typename";
$z[2]=Array("global","if(@me>3)@me=\"<li><a href={dede:field name='id'/}>{dede:field name='typename'/}</a></li>\";else @me=\"\";",180,337);
$z[2][4]['name']="itemindex";
$z[2][4]['runphp']="yes";
$z[3]=Array("channel","\r\n        <li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\r\n        ",347,485);
$z[3][4]['type']="son";
$z[3][4]['noself']="yes";

?>