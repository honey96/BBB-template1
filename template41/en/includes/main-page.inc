<h1 style="text-align:center;background:#e8e6e3;border-top: 5px solid #555555;border-bottom:5px solid #555555;color:#555555;">New Arrivals</h1>
<br />

<div class="bookslider"> 
[% FOREACH latest IN latestbooks%] 
    <div class="slide thumbnail2"> 
        <ul class="bxslider"> 
            <li class="view-tenth"> 
                <a class="p1 thumbnail " href="#"> 
                    [% IF ( latest.isbn ) %] 
                    [% IF ( GoogleJackets ) %] 
                        <div style="block" title="[% latest.biblionumber |url %]" class="[% latest.isbn %]" id="gbs-thumbnail"></div> 
                    [% ELSIF ( OpenLibraryCovers ) %] 
                    <div style="block" title="[% latest.biblionumber |url %]" class="[% latest.isbn %]" id="openlibrary-thumbnail-preview"></div> 
                    [% ELSIF ( OPACAmazonCoverImages ) %] 
                    [% IF ( OPACurlOpenInNewWindow ) %] 
                    <a href="/cgi-bin/koha/opac-detail.pl?biblionumber=[% latest.biblionumber %]" target="_blank"> 
                        <img  border="0" src="http://images.amazon.com/images/P/[% latest.isbn %].01.MZZZZZZZ.jpg" alt="Cover image" /></a> 
                    [% ELSE %]<a class="" href="/cgi-bin/koha/opac-detail.pl?biblionumber=[% latest.biblionumber %]"  target="_blank"> 
                        <img border="0" src="http://images.amazon.com/images/P/[% latest.isbn %].01.MZZZZZZZ.jpg" alt="Cover image" /></a> 
                    [% END %] 
                    [% ELSE %] 
                    <span class="img_rounded "><img src="[% interface %]/[% theme %]/images/no-cover.png" /></span> 
                    [% END %] 
                    [% ELSE %] 
                    <span class="img_rounded "><img src="[% interface %]/[% theme %]/images/no-cover.png" /></span>         
                    [% END %] 
                </a> 
                <div class="text-center mask"> 
                   <h3> <a href="/cgi-bin/koha/opac-detail.pl?biblionumber=[% latest.biblionumber %]">[% latest.title %]</a></h3> 
              
                    <p class="link">[% latest.author %] </p> 
                    <a class="btn" href= "/cgi-bin/koha/opac-detail.pl?biblionumber=[% latest.biblionumber %]">Read More</a> 
                </div> 
            </li> 
        </ul> 
    </div> 
    [% END %] 
    </div>


    <h1 style="text-align:center;background:#e8e6e3;border-top: 5px solid #555555;border-bottom:5px solid #555555;color:#555555;">Top Circulating Books</h1>
    <br /><div class="bookslider">
        [% FOREACH topbook IN topissues%] 
    <div class="slide thumbnail2"> 
        <ul class="bxslider"> 
            <li class="view-tenth"> 
                <a class="p1 thumbnail " href="#"> 
                    [% IF ( topbook.isbn ) %] 
                    [% IF ( GoogleJackets ) %] 
                        <div style="block" title="[% topbook.biblionumber |url %]" class="[% topbook.isbn %]" id="gbs-thumbnail"></div> 
                    [% ELSIF ( OpenLibraryCovers ) %] 
                    <div style="block" title="[% topbook.biblionumber |url %]" class="[% topbook.isbn %]" id="openlibrary-thumbnail-preview"></div> 
                    [% ELSIF ( OPACAmazonCoverImages ) %] 
                    [% IF ( OPACurlOpenInNewWindow ) %] 
                    <a href="/cgi-bin/koha/opac-detail.pl?biblionumber=[% topbook.biblionumber %]" target="_blank"> 
                        <img  border="0" src="http://images.amazon.com/images/P/[% topbook.isbn %].01.MZZZZZZZ.jpg" alt="Cover image" /></a> 
                    [% ELSE %]<a class="" href="/cgi-bin/koha/opac-detail.pl?biblionumber=[% topbook.biblionumber %]"  target="_blank"> 
                        <img border="0" src="http://images.amazon.com/images/P/[% topbook.isbn %].01.MZZZZZZZ.jpg" alt="Cover image" /></a> 
                    [% END %] 
                    [% ELSE %] 
                    <span class="img_rounded "><img src="[% interface %]/[% theme %]/images/no-cover.png" /></span> 
                    [% END %] 
                    [% ELSE %] 
                    <span class="img_rounded "><img src="[% interface %]/[% theme %]/images/no-cover.png" /></span>         
                    [% END %] 
                </a> 
                <div class="text-center mask"> 
                   <h3> <a href="/cgi-bin/koha/opac-detail.pl?biblionumber=[% topbook.biblionumber %]">[% topbook.title %]</a></h3> 
              
                    <p class="link">[% topbook.author %] </p> 
                    <a class="btn" href= "/cgi-bin/koha/opac-detail.pl?biblionumber=[% topbook.biblionumber %]">Read More</a> 
                </div> 
            </li> 
        </ul> 
    </div> 
       [% END %]
    </div>


<div class="text-center" id="daily-quote" style="background:#e6e8ef;">
                <h1 class="quote" style= "text-align:center; border-top: 5px solid #555555;border-bottom:5px solid #555555; background: #c9cacc; color:#555555;">Quote of the Day</h1>
                <div style="background:#e6e8ef;padding:5px 5px 15px;">
                                    <span id="daily-quote-text">[% daily_quote.text %]</span><span id="daily-quote-sep"> ~ </span><span id="daily-quote-source">[% daily_quote.source %]</span>
                </div>
</div>
<br />
         <div class="ad_footer mobfooter text-center">
         [% INCLUDE 'ad_home_footer.inc'%]
         </div>


<br><br>

