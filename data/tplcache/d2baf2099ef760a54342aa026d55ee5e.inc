<li><a href="list.php?tid={dede:field name='id'/}">{dede:field name='typename'/}</a>
        <ul class="dl-submenu">
        <li class="dl-back"><a href="#">返回上一级</a></li>
        <li><a href="list.php?tid={dede:field name='id'/}">{dede:field name='typename'/}</a>
        {dede:channel type='son' noself='yes'}
        <li><a href="list.php?tid=[field:id/]">[field:typename/]</a></li>
        {/dede:channel}
        </ul>
        </li>