<section id="content-holder" class="container-fluid container">
<section class="row-fluid features-books">
<section class="span12 m-bottom" style="padding-top:24px;s">
<div class="heading-bar">
<h2>New Arrivals</h2>
<span class="h-line"></span> </div>
<div class="slider1">

[% FOREACH latest IN latestbooks%] 
<div class="slide">
 <a href="book-detail.html"> <a class="p1 thumbnail " href="#"> 
                    [% IF ( latest.isbn ) %] 
                    [% IF ( GoogleJackets ) %] 
                        
                             <script>
                      function handleResponse(response) {
                      var target = '';
                        for (id in response) {
                      var book = response[id];


                          if (typeof(book.thumbnail_url) != "undefined") {
                                             var x= book.thumbnail_url; 

                                   var y = document.createElement("IMG");
                           y.setAttribute("id", "[% loop.index  %]");                     
                                     document.getElementById("[%latest.isbn %]").appendChild(y);
                                 document.getElementById("[% loop.index  %]").src = x;
                    
                      }
                        }
   if(x==undefined)


    {


        var ch = document.createElement("IMG");
        ch.setAttribute("src", "[% interface %]/[% theme %]/images/no-cover.png"); 
        document.getElementById("[%latest.isbn %]").appendChild(ch);


}
}
</script>
<div id="[%latest.isbn %]"></div>
                    <script src="https://books.google.com/books?bibkeys=[%latest.isbn %]&jscmd=viewapi&callback=handleResponse"></script>

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
                </a> <a href="book-detail.html">A Walk Across The Sun</a></span> <span class="rating-bar"><img src="[% interface %]/[% theme %]/images/images/rating-star.png" alt="Rating Star"/></span>
<div class="cart-price"> <a class="cart-btn2" href="cart.html">Add to Cart</a> <a href="#" class="readmore">Read More</a>  </div>
</div>

    [% END %] 
</div>
</section>
</section>




<section class="row-fluid features-books">
<section class="span12 m-bottom">
<div class="heading-bar">
<h2>Top Circulating Books</h2>
<span class="h-line"></span> </div>
<div class="slider1">

[% FOREACH topbook IN topissues%] 
<div class="slide"> <a href="book-detail.html"> <a class="p1 thumbnail " href="#"> 
                    [% IF ( latest.isbn ) %] 
                    [% IF ( GoogleJackets ) %] 
                        
                             <script>
                      function handleResponse(response) {
                      var target = '';
                        for (id in response) {
                      var book = response[id];


                          if (typeof(book.thumbnail_url) != "undefined") {
                                             var x= book.thumbnail_url; 

                                   var y = document.createElement("IMG");
                           y.setAttribute("id", "[% loop.index  %]");                     
                                     document.getElementById("[%latest.isbn %]").appendChild(y);
                                 document.getElementById("[% loop.index  %]").src = x;
                    
                      }
                        }
   if(x==undefined)


    {


        var ch = document.createElement("IMG");
        ch.setAttribute("src", "[% interface %]/[% theme %]/images/no-cover.png"); 
        document.getElementById("[%latest.isbn %]").appendChild(ch);


}
}
</script>
<div id="[%latest.isbn %]"></div>
                    <script src="https://books.google.com/books?bibkeys=[%latest.isbn %]&jscmd=viewapi&callback=handleResponse"></script>

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
                </a> <a href="book-detail.html">A Walk Across The Sun</a></span> <span class="rating-bar"><img src="[% interface %]/[% theme %]/images/images/rating-star.png" alt="Rating Star"/></span>
<div class="cart-price"> <a class="cart-btn2" href="cart.html">Add to Cart</a> <a href="#" class="readmore">Read More</a>  </div>
</div>

    [% END %] 
</div>
</section>
</section>



 
<section class="row-fluid m-bottom">
<section class="span6">
<div class="featured-author">
<div class="left"> <span class="author-img-holder"><a href="about-us.html"><img src="[% interface %]/[% theme %]/images/images/quote.png"  alt=""/></a></span>
<div class="author-det-box" style="max-height:180px;">
<div class="ico-holder">
</div>
<div class="author-det"> 

  <span class="title">[% daily_quote.source %]</span> <span class="title2 "style="padding-top:20px;">[% daily_quote.text %]</span>
  <!--<span class="title">Swami Vivekananda</span> <span class="title2 "style="padding-top:20px;">Education is manifestation of perfection already in man</span>-->
</div>
</div>
</div>
</div>
</section>

<section class="span6 best-sellers ">
    
     <div class="featured-author" >
<div class="left" style="width: 79%;"> <span class="author-img-holder1"><a href="about-us.html"><img src="[% interface %]/[% theme %]/images/images/news.png"  alt=""/></a></span>
<div class="author-det-box" style="height:180px;">
    <div class="slider41" style="position: relative; ">
        
<div class="slide" style="padding-top:40px; "  > 
<span class="title3">Robert Smith</span>
<div class="slide" style="width:419px;">
<span class="title2" style="padding-top:20px;">Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in </span>
</div>
</div> 
<div class="slide"style="padding-top:40px;" > 
<span class="title3">Mr. Khalid </span>
<div class="slide" style="width:419px;">
    <span class="title2 "style="padding-top:20px;">Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in </span>
</div>
</div>
</div>
</div>
</div>  
</div>
</section>
</section>


<section class="row-fluid m-bottom">
 
<section class="span12 blog-section">
<div class="heading-bar">
<h2>Top Users</h2>
<span class="h-line"></span> </div>
<!--<div class="slider3">
<div class="slide">-->
  <div class="span12">  <div class="span4">
<div class="post-img">
<div class="author-name-holder"> <img src="[% interface %]/[% theme %]/images/images/image19.png"  alt=""/> </div>
<strong class="title">Robert Smith <span>Manager</span></strong>  
<div class="slide">
<p>Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in design Morbi nec In Curabituritus gojus, </p>
</div>  <!--<a href="blog-detail.html"><img src="images/image18.jpg" alt=""/></a>-->
</div>   <!--<span class="post-date"><span>02</span> May</span> </div>-->
<!--<div class="post-det">
<h3><a href="blog-detail.html">Our latest arrival is the Spring Summer 2013 Book Fair</a></h3>
<span class="comments-num">6 comments</span>
<p>Gluten-free quinoa selfies carles, kogi gentrify retro marfa viral. Aesthetic before they sold out put a bird on it sriracha typewriter. Skateboard viral irony tonx ... </p>
</div>-->
</div>
<div class="span4">
<div class="post-img">
<div class="author-name-holder"> <img src="[% interface %]/[% theme %]/images/images/image19.png"  alt=""/> </div>
<strong class="title">Robert Smith <span>Manager</span></strong>
<div class="slide">
<p>Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in design Morbi nec In Curabituritus gojus, </p>
</div>
</div>
</div>


<div class="span4">
<div class="post-img">
<div class="author-name-holder"> <img src="[% interface %]/[% theme %]/images/images/image19.png"  alt=""/> </div>
<strong class="title">Robert Smith <span>Manager</span></strong>
<div class="slide">
<p>Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in design Morbi nec In Curabituritus gojus, </p>
</div>
</div>
</div>
</div>
<!--<div class="slide">
<div class="post-img"><a href="blog-detail.html"><img src="images/image29.jpg" alt=""/></a> <span class="post-date"><span>24</span> Oct</span> </div>
<div class="post-det">
<h3><a href="blog-detail.html">Our latest arrival is the Spring Summer 2012 Book Fair</a></h3>
<span class="comments-num">48 comments</span>
<p>Gluten-free quinoa selfies carles, kogi gentrify retro marfa viral. Aesthetic before they sold out put a bird on it sriracha typewriter. Skateboard viral irony tonx ... </p>
</div>
</div>
<div class="slide">
<div class="post-img"><a href="blog-detail.html"><img src="images/image30.jpg" alt=""/></a> <span class="post-date"><span>10</span> Aug</span> </div>
<div class="post-det">
<h3><a href="blog-detail.html">Our latest arrival is the Spring Summer 2011 Book Fair</a></h3>
<span class="comments-num">24 comments</span>
<p>Gluten-free quinoa selfies carles, kogi gentrify retro marfa viral. Aesthetic before they sold out put a bird on it sriracha typewriter. Skateboard viral irony tonx ... </p>
</div>

</div> -->
</div>
</section>
</section>










 
<!--
 
<section class="row-fluid m-bottom">
 
<section class="span12 blog-section">
<div class="heading-bar">
<h2>Top Users</h2>
<span class="h-line"></span> </div>
    <div class="span12">   
     <div class="span4">
<div class="post-img">
<div class="author-name-holder">  <img src="[% interface %]/[% theme %]/images/images/image19.png" /> </div>
<strong class="title">Robert Smith <span>Manager</span></strong>    
<div class="slide">
<p>Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in design Morbi nec In Curabituritus gojus, </p>
</div>  
</div>
<div class="span4">
<div class="post-img">
<div class="author-name-holder">  <img src="[% interface %]/[% theme %]/images/images/image19.png" /> </div>
<strong class="title">Robert Smith <span>Manager</span></strong>
<div class="slide">
<p>Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in design Morbi nec In Curabituritus gojus, </p>
</div>
</div>
</div>

<div class="span4">
<div class="post-img">
<div class="author-name-holder">  <img src="[% interface %]/[% theme %]/images/images/image19.png" />  </div>
<strong class="title">Robert Smith <span>Manager</span></strong>
<div class="slide">
<p>Lorem ipsum dolor slo onsec nelioro tueraliquet Morbi nec In Curabitur lorem in design Morbi nec In Curabituritus gojus, </p>
</div>
</div>
</div>
</div>
</section>
</section>


-->


<!--<h1 style="text-align:center;background:#e8e6e3;border-top: 5px solid #555555;border-bottom:5px solid #555555;color:#555555;">New Arrivals</h1>
<br />

<div class="bookslider"> 
   
[% FOREACH latest IN latestbooks%] 
<div class="slide">

    <a class="p1 thumbnail " href="#"> 
                    [% IF ( latest.isbn ) %] 
                    [% IF ( GoogleJackets ) %] 
                        
                             <script>
                      function handleResponse(response) {
                      var target = '';
                        for (id in response) {
                      var book = response[id];


                          if (typeof(book.thumbnail_url) != "undefined") {
                                             var x= book.thumbnail_url; 

                                   var y = document.createElement("IMG");
                           y.setAttribute("id", "[% loop.index  %]");                     
                                     document.getElementById("[%latest.isbn %]").appendChild(y);
                                 document.getElementById("[% loop.index  %]").src = x;
                    
                      }
                        }
   if(x==undefined)


    {


        var ch = document.createElement("IMG");
        ch.setAttribute("src", "[% interface %]/[% theme %]/images/no-cover.png"); 
        document.getElementById("[%latest.isbn %]").appendChild(ch);


}
}
</script>
<div id="[%latest.isbn %]"></div>
                    <script src="https://books.google.com/books?bibkeys=[%latest.isbn %]&jscmd=viewapi&callback=handleResponse"></script>

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

    <!--<div class="slide thumbnail2"> --> 
       <!-- <ul class="bxslider"> 
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
        </ul>--> 
    <!--</div> 
    [% END %] 
    </div>
-->

   <!-- <h1 style="text-align:center;background:#e8e6e3;border-top: 5px solid #555555;border-bottom:5px solid #555555;color:#555555;">Top Circulating Books</h1>
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
-->

<!--<div class="text-center" id="daily-quote" style="background:#e6e8ef;">
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

