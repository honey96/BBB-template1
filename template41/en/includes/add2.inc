<tr><td colspan="3">
<center>                                                <div id="slidy-container" class="mobbox ad_footer">

         [% num=5 %]


[% check=loop.index mod num %]



                                                    
                                [% IF ( loop.index==4) || (loop.index ==9)|| ( loop.index==14) || (loop.index ==19) %]

                                                            [% INCLUDE 'ad_leaderboard_search_1.inc' %]

                                                    

                                                    [% END %]

                                                </div>

</center>
</td>
</tr>
