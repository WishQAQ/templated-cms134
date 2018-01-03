<li><a href="{dede:field name='id'/}">{dede:field name='typename'/}</a>
        <ul class="dl-submenu">
        <li class="dl-back"><a href="#">返回上一级</a></li>
        {dede:global name=itemindex runphp="yes"}if(@me%5==0)@me="<li><a href='list.php?tid=24'>碳足迹</a></li>";else @me="";{/dede:global}
        {dede:global name=itemindex runphp="yes"}if(@me%6==0)@me="<li><a href='list.php?tid=25'>视频中心</a></li>";else @me="";{/dede:global}
        {dede:channel type='son' noself='yes'}
        <li><a href="list.php?tid=[field:id/]">[field:typename/]</a></li>
        {/dede:channel}
        </ul>
        </li>