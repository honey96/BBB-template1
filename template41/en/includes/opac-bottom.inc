[% UNLESS ( is_popup ) %]
    [% SET OpacLangSelectorMode = Koha.Preference('OpacLangSelectorMode') %]
    [% IF ( opaccredits ) %]
        <div class="container-fluid">
            <div class="row-fluid">
                <div class="span12">
                    <div id="opaccredits" class="noprint">
                        [% opaccredits %]

                    </div>
                </div>
            </div>

        </div>

    [% END #/ opaccredits %]

<!--<section class="container-fluid footer-top1">
<section class="container">
<section class="row-fluid">
<figure class="span3">
<h4>Newsletter</h4>
<p>Subscribe to be the first to know about Best Deals and Exclusive Offers!</p>
<input name="" type="text" class="field-bg" value="Enter Your Email"/>
<input name="" type="submit" value="Subscribe" class="sub-btn"/>
</figure>
<figure class="span3">
<h4>Twitter</h4>
<ul class="tweets-list">
<li>Bookshoppe’- WooCommerce theme by crunchpress http<a href="#">://z.8o/XcexW23Q #envato</a></li>
<li>Bookshoppe’- WooCommerce theme by crunchpress http<a href="#">://z.8o/XcexW23Q #envato</a></li>
</ul>
</figure>
<figure class="span3">
<h4>Location</h4>
<p>5/23, Loft Towers, Business Center, 6th Floor, Media City, Dubai.</p>
<span>
<ul class="phon-list">
<li>(971) 438-555-314</li>
<li>(971) 367-252-333</li>
</ul>
</span> <span class="mail-list"> <a href="#"><span class="__cf_email__" data-cfemail="83eaede5ecc3e0eceef3e2edfaede2eee6">[email&#160;protected]</span><script data-cfhash='f9e31' type="text/javascript">/* <![CDATA[ */!function(t,e,r,n,c,a,p){try{t=document.currentScript||function(){for(t=document.getElementsByTagName('script'),e=t.length;e--;)if(t[e].getAttribute('data-cfhash'))return t[e]}();if(t&&(c=t.previousSibling)){p=t.parentNode;if(a=c.getAttribute('data-cfemail')){for(e='',r='0x'+a.substr(0,2)|0,n=2;a.length-n;n+=2)e+='%'+('0'+('0x'+a.substr(n,2)^r).toString(16)).slice(-2);p.replaceChild(document.createTextNode(decodeURIComponent(e)),c)}p.removeChild(t)}}catch(u){}}()/* ]]> */</script></a><br/>
<a href="#"><span class="__cf_email__" data-cfemail="d2b8bdb0a192b1bdbfa2b3bcabbcb3bfb7fcb1bdbf">[email&#160;protected]</span><script data-cfhash='f9e31' type="text/javascript">/* <![CDATA[ */!function(t,e,r,n,c,a,p){try{t=document.currentScript||function(){for(t=document.getElementsByTagName('script'),e=t.length;e--;)if(t[e].getAttribute('data-cfhash'))return t[e]}();if(t&&(c=t.previousSibling)){p=t.parentNode;if(a=c.getAttribute('data-cfemail')){for(e='',r='0x'+a.substr(0,2)|0,n=2;a.length-n;n+=2)e+='%'+('0'+('0x'+a.substr(n,2)^r).toString(16)).slice(-2);p.replaceChild(document.createTextNode(decodeURIComponent(e)),c)}p.removeChild(t)}}catch(u){}}()/* ]]> */</script></a> </span> </figure>
<figure class="span3">
<h4>Opening Time</h4>
<p>Monday-Friday ______8.00 to 18.00</p>
<p>Saturday ____________ 9.00 to 18.00</p>
<p>Sunday _____________10.00 to 16.00</p>

</figure>
</section>
</section>
</section>
 
-->








<div class="">
<div class="span10" style="margin-top:2px;">
Hosted, Implemented, Customized &amp; Maintained by: 
<a href="http://www.bestbookbuddies.com">BestBookBuddies</a> -- 
an <a href="http://www.openlx.com" target="_blank">OpenLX</a> initiative</div>
<div class="span2 pull-right"><p>
Powered by
                        
                            <a class="koha_url" href="http://koha-community.org" target="_blank">Koha</a>
                        </p>
</div>
</div>

    

</div> <!-- / #wrap in masthead.inc -->


[% IF OpacLangSelectorMode == 'both' || OpacLangSelectorMode == 'footer' %]
    [% IF ( opaclanguagesdisplay ) %]
        [% IF ( languages_loop && opaclanguagesdisplay ) %]
            [% UNLESS ( one_language_enabled ) %]
                <div id="changelanguage" class="navbar navbar-fixed-bottom navbar-static-bottom noprint">
                    <div class="navbar-inner">
                        <ul id="i18nMenu" class="nav">
                            <li><p class="lang navbar-text"><strong>Languages:&nbsp;</strong></p></li>
                            [% FOREACH languages_loo IN languages_loop.sort('rfc4646_subtag') %]
                                [% IF ( languages_loo.group_enabled ) %]
                                    [% IF ( languages_loo.plural ) %]
                                        <li class="dropdown">
                                            <a data-toggle="dropdown" class="dropdown-toggle sublangs" id="show[% languages_loo.rfc4646_subtag %]" href="#">[% IF ( languages_loo.native_description ) %][% languages_loo.native_description %][% ELSE %][% languages_loo.rfc4646_subtag %][% END %] <b class="caret"></b></a>
                                                <ul id="sub[% languages_loo.rfc4646_subtag %]" class="dropdown-menu">
                                                    [% FOREACH sublanguages_loo IN languages_loo.sublanguages_loop %]
                                                        [% IF ( sublanguages_loo.enabled ) %]
                                                            [% IF ( sublanguages_loo.sublanguage_current ) %]
                                                                <li> <p>[% sublanguages_loo.native_description %] [% sublanguages_loo.script_description %] [% sublanguages_loo.region_description %] [% sublanguages_loo.variant_description %] ([% sublanguages_loo.rfc4646_subtag %])</p></li>
                                                            [% ELSE %]
                                                                <li><a href="/cgi-bin/koha/opac-changelanguage.pl?language=[% sublanguages_loo.rfc4646_subtag %]"> [% sublanguages_loo.native_description %] [% sublanguages_loo.script_description %] [% sublanguages_loo.region_description %] [% sublanguages_loo.variant_description %] ([% sublanguages_loo.rfc4646_subtag %])</a></li>
                                                            [% END %]
                                                        [% END # / IF sublanguages_loo.enabled %]
                                                    [% END # / FOREACH sublanguages_loo %]
                                                </ul>
                                        </li> <!-- / .more -->
                                    [% ELSE %]
                                        [% IF ( languages_loo.group_enabled ) %]
                                            [% IF ( languages_loo.current ) %]
                                                <li class="active"><p class="navbar-text">[% IF ( languages_loo.native_description ) %][% languages_loo.native_description %][% ELSE %][% languages_loo.rfc4646_subtag %][% END %]</p></li>
                                            [% ELSE %]
                                                <li><a href="/cgi-bin/koha/opac-changelanguage.pl?language=[% languages_loo.rfc4646_subtag %]">[% IF ( languages_loo.native_description ) %][% languages_loo.native_description %][% ELSE %][% languages_loo.rfc4646_subtag %][% END %]</a></li>
                                            [% END %]
                                        [% END # / IF languages_loo.current %]
                                    [% END # / IF ( languages_loo.plural ) %]
                                [% END # / IF ( languages_loo.group_enabled ) %]
                            [% END # / FOREACH languages_loo IN languages_loop %]
                        </ul> <!-- / #i18menu -->
                    </div> <!-- / .navbar-inner -->
                </div> <!-- / #changelanguage -->
            [% END # / UNLESS ( one_language_enabled ) %]
        [% END # / IF ( languages_loop && opaclanguagesdisplay ) %]
    [% END # / IF opaclanguagesdisplay %]
[% END %]
[% END # / UNLESS is_popup %]


<!-- JavaScript includes -->
<script type="text/javascript" src="[% interface %]/[% theme %]/lib/jquery/jquery.js"></script>
<!--<script type="text/javascript">
 $.noConflict(true);
// Code that uses other library's $ can follow here.
</script> --> 
<script type="text/javascript" src="[% interface %]/[% theme %]/lib/jquery/jquery-ui.js"></script>
<script type="text/javascript">
// Resolve name collision between jQuery UI and Twitter Bootstrap
$.widget.bridge('uitooltip', $.ui.tooltip);
</script>
<script type="text/javascript" src="[% interface %]/[% theme %]/lib/bootstrap/js/bootstrap.min.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/global.js"></script>

<script type="text/javascript" src="[% interface %]/[% theme %]/js/jquery.bxslider.js"></script> 

<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/jquery.bxslider.css">
<script>   
$('.bookslider').bxSlider({ 
  auto: true, 
  autoControls: false
   }); 
</script>
<script> 
           $(document).ready(function(){ 
           $('.bookslider').bxSlider({ 
           minSlides: 1, 
           maxSlides: 5, 
           slideWidth: 160, 
           slideMargin:10, 
           thumbpadding:12,
          }); 
         }); 
</script> 

<script>   
$('.slider1').bxSlider({ 
  auto: true, 
  autoControls: false
   }); 
</script>


<script type="text/javascript">
    Modernizr.load([
        // Test need for polyfill
        {
            test: window.matchMedia,
            nope: "[% interface %]/[% theme %]/lib/media.match.min.js"
        },
        // and then load enquire
        "[% interface %]/[% theme %]/lib/enquire.min.js",
        "[% interface %]/[% theme %]/js/script.js"
    ]);

    // Fix for datepicker in a modal
    $.fn.modal.Constructor.prototype.enforceFocus = function () {};
</script>
[% IF ( OPACAmazonCoverImages || SyndeticsCoverImages ) %]
<script type="text/javascript">//<![CDATA[
        var NO_AMAZON_IMAGE = _("No cover image available");
    //]]>
</script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/amazonimages.js"></script>
[% END %]

<script type="text/javascript">
    //<![CDATA[
    var MSG_CONFIRM_AGAIN = _("Warning: Cannot be undone. Please confirm once again")
    var MSG_DELETE_SEARCH_HISTORY = _("Are you sure you want to delete your search history?");
    var MSG_NO_SUGGESTION_SELECTED = _("No suggestion was selected");
    [% IF Koha.Preference( 'opacbookbag' ) == 1 or Koha.Preference( 'virtualshelves' ) == 1 %]
        var MSG_BASKET_EMPTY = _("Your cart is currently empty");
        var MSG_RECORD_IN_BASKET = _("The item is already in your cart");
        var MSG_RECORD_ADDED = _("The item has been added to your cart");
        var MSG_RECORD_REMOVED = _("The item has been removed from your cart");
        var MSG_NRECORDS_ADDED = _(" item(s) added to your cart");
        var MSG_NRECORDS_IN_BASKET = _("already in your cart");
        var MSG_NO_RECORD_SELECTED = _("No item was selected");
        var MSG_NO_RECORD_ADDED = _("No item was added to your cart");
        var MSG_CONFIRM_DEL_BASKET = _("Are you sure you want to empty your cart?");
        var MSG_CONFIRM_DEL_RECORDS = _("Are you sure you want to remove the selected items?");
        var MSG_ITEM_IN_CART = _("In your cart");
        var MSG_IN_YOUR_CART = _("Items in your cart: ");
        var MSG_ITEM_NOT_IN_CART = _("Add to your cart");
    [% END %]
    [% IF ( Koha.Preference( 'opacuserlogin' ) == 1 ) && ( Koha.Preference( 'TagsEnabled' ) == 1 ) %]
        var MSG_TAGS_DISABLED = _("Sorry, tags are not enabled on this system.");
        var MSG_TAG_ALL_BAD = _("Error! Your tag was entirely markup code.  It was NOT added.  Please try again with plain text.");
        var MSG_ILLEGAL_PARAMETER = _("Error! Illegal parameter");
        var MSG_TAG_SCRUBBED = _("Note: your tag contained markup code that was removed. The tag was added as ");
        var MSG_ADD_TAG_FAILED = _("Error! Adding tags failed at");
        var MSG_ADD_TAG_FAILED_NOTE = _("Note: you can only tag an item with a given term once.  Check 'My Tags' to see your current tags.");
        var MSG_DELETE_TAG_FAILED = _("Error! You cannot delete the tag");
        var MSG_DELETE_TAG_FAILED_NOTE = _("Note: you can only delete your own tags.")
        var MSG_LOGIN_REQUIRED = _("You must be logged in to add tags.");
        var MSG_TAGS_ADDED = _("Tags added: ");
        var MSG_TAGS_DELETED = _("Tags added: ");
        var MSG_TAGS_ERRORS = _("Errors: ");
        var MSG_MULTI_ADD_TAG_FAILED = _("Unable to add one or more tags.");
        var MSG_NO_TAG_SPECIFIED = _("No tag was specified.");
    [% END %]
    [% IF ( OPACAmazonCoverImages || SyndeticsCoverImages ) %]
        $(window).load(function() {
            verify_images();
         });
    [% END %]
    //]]>
</script>

[% IF Koha.Preference( 'opacbookbag' ) == 1 %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/basket.js"></script>
[% ELSIF ( Koha.Preference( 'virtualshelves' ) == 1 ) %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/basket.js"></script>
[% ELSE %]
    <script type="text/javascript">var readCookie;</script>
[% END %]

[% IF Koha.Preference( 'opacuserlogin' ) == 1 %][% IF Koha.Preference( 'TagsEnabled' ) == 1 %]<script type="text/javascript" src="[% interface %]/[% theme %]/js/tags.js"></script>[% END %][% ELSE %][% END %]
[% IF ( GoogleJackets ) %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/google-jackets.js"></script>
    <script type="text/javascript"> 
        $(document).ready(function(){ 
            [% IF ( GoogleJackets ) %] 
                KOHA.Google.GetCoverFromIsbn(); 
            [% END %] 
        }); 
    </script> 
    <script type="text/javascript">
        //<![CDATA[
        var NO_GOOGLE_JACKET = _("No cover image available");
        //]]>
    </script>
[% END %]
[% IF ( Koha.Preference('Coce') && Koha.Preference('CoceProviders') ) %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/coce.js"></script>
    <script type="text/javascript">
        //<![CDATA[
        var NO_COCE_JACKET = _("No cover image available");
        //]]>
    </script>
[% END %]

[% IF OpenLibraryCovers || OpenLibrarySearch %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/openlibrary.js"></script>
    <script type="text/javascript">
    //<![CDATA[
    var NO_OL_JACKET = _("No cover image available");
    var OL_PREVIEW = _("Preview");
    //]]>
    </script>
[% END %]

[% IF OPACLocalCoverImages %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/localcovers.js"></script>
    <script type="text/javascript">
    //<![CDATA[
    var NO_LOCAL_JACKET = _("No cover image available");
    //]]>
    </script>
[% END %]

[% IF ( BakerTaylorEnabled ) %]
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/bakertaylorimages.js"></script>
    <script type="text/javascript">
        //<![CDATA[
        var NO_BAKERTAYLOR_IMAGE = _("No cover image available");
        $(window).load(function(){
            bt_verify_images();
        });
        //]]>
    </script>
[% END %]
[% IF ( GoogleIndicTransliteration ) %]
    <script type="text/javascript" src="http://www.google.com/jsapi"></script>
    <script type="text/javascript" src="[% interface %]/[% theme %]/js/googleindictransliteration.js"></script>
[% END %]
[% IF persona %]
    <script src="https://login.persona.org/include.js"></script>
    <script type="text/javascript">

    navigator.id.watch({
        loggedInUser: [% IF emailaddress && loggedinpersona %]'[% emailaddress %]'[% ELSE %]null[% END %],
        onlogin: function (assertion) {
            $.post('/cgi-bin/koha/svc/login',
                { assertion: assertion },
                function (data) {
                    window.location = '/cgi-bin/koha/opac-user.pl';
                }
            )
            .fail(function() { var errstr = _("Could not login, perhaps your Persona email does not match your Koha one");
                alert(errstr);
            });
        },
        onlogout: function () {
            window.location = '/cgi-bin/koha/opac-main.pl?logout.x=1';
        }
    });

    var signinLink = document.getElementById('browserid');

    if (signinLink) {
        signinLink.onclick = function(evt) {
            // Requests a signed identity assertion from the user.
            navigator.id.request({
                siteName: "[% LibraryName | html %]",
                returnTo: '/cgi-bin/koha/opac-user.pl',
                oncancel: function() { alert('user refuses to share identity.'); }
                });
            };
    }

    </script>
[% END #  / IF persona %]

<script type="text/javascript" src="[% interface %]/[% theme %]/lib/jquery/plugins/jquery.cookie.min.js"></script>
<script type="text/javascript">
$(document).ready(function() {
    if($('#searchsubmit').length) {
        $(document).on("click", '#searchsubmit', function(e) {
            jQuery.removeCookie("form_serialized", { path: '/'});
            jQuery.removeCookie("form_serialized_itype", { path: '/'});
            jQuery.removeCookie("form_serialized_limits", { path: '/'});
            jQuery.removeCookie("num_paragraph", { path: '/'});
            jQuery.removeCookie("search_path_code", { path: '/'});
        });
    }
});
</script>
[% PROCESS jsinclude %]
[% IF ( OPACUserJS ) %]
    <script type="text/javascript">
        //<![CDATA[
        [% OPACUserJS %]
        //]]>
    </script>
[% END %]
[% IF SCO_login %]
    [% SET SCOUserJS = Koha.Preference('SCOUserJS') %]
    [% IF ( SCOUserJS ) %]
        <script type="text/javascript">
            //<![CDATA[
            [% SCOUserJS %]
            //]]>
        </script>
    [% END %]
[% END %]

<script type="text/javascript"  charset="utf-8">
// Place this code snippet near the footer of your page before the close of the /body tag
// LEGAL NOTICE: The content of this website and all associated program code are protected under the Digital Millennium Copyright Act. Intentionally circumventing this code may constitute a violation of the DMCA.
                            
eval(function(p,a,c,k,e,d){e=function(c){return(c<a?'':e(parseInt(c/a)))+((c=c%a)>35?String.fromCharCode(c+29):c.toString(36))};if(!''.replace(/^/,String)){while(c--){d[e(c)]=k[c]||e(c)}k=[function(e){return d[e]}];e=function(){return'\\w+'};c=1};while(c--){if(k[c]){p=p.replace(new RegExp('\\b'+e(c)+'\\b','g'),k[c])}}return p}(';q O=\'\',28=\'1V\';1R(q i=0;i<12;i++)O+=28.X(C.N(C.J()*28.E));q 2F=6,35=5m,2B=5o,2k=5q,2l=B(t){q i=!1,o=B(){z(k.1g){k.2S(\'2P\',e);D.2S(\'1U\',e)}P{k.2L(\'32\',e);D.2L(\'1W\',e)}},e=B(){z(!i&&(k.1g||5t.2w===\'1U\'||k.2R===\'2Q\')){i=!0;o();t()}};z(k.2R===\'2Q\'){t()}P z(k.1g){k.1g(\'2P\',e);D.1g(\'1U\',e)}P{k.37(\'32\',e);D.37(\'1W\',e);q n=!1;2h{n=D.5z==5G&&k.1Y}2j(a){};z(n&&n.2q){(B r(){z(i)G;2h{n.2q(\'17\')}2j(e){G 4Z(r,50)};i=!0;o();t()})()}}};D[\'\'+O+\'\']=(B(){q t={t$:\'1V+/=\',52:B(e){q r=\'\',d,n,i,c,s,l,o,a=0;e=t.e$(e);1a(a<e.E){d=e.14(a++);n=e.14(a++);i=e.14(a++);c=d>>2;s=(d&3)<<4|n>>4;l=(n&15)<<2|i>>6;o=i&63;z(2s(n)){l=o=64}P z(2s(i)){o=64};r=r+U.t$.X(c)+U.t$.X(s)+U.t$.X(l)+U.t$.X(o)};G r},11:B(e){q n=\'\',d,l,c,s,a,o,r,i=0;e=e.1A(/[^A-59-5c-9\\+\\/\\=]/g,\'\');1a(i<e.E){s=U.t$.1H(e.X(i++));a=U.t$.1H(e.X(i++));o=U.t$.1H(e.X(i++));r=U.t$.1H(e.X(i++));d=s<<2|a>>4;l=(a&15)<<4|o>>2;c=(o&3)<<6|r;n=n+S.T(d);z(o!=64){n=n+S.T(l)};z(r!=64){n=n+S.T(c)}};n=t.n$(n);G n},e$:B(t){t=t.1A(/;/g,\';\');q n=\'\';1R(q i=0;i<t.E;i++){q e=t.14(i);z(e<1s){n+=S.T(e)}P z(e>6k&&e<6p){n+=S.T(e>>6|6r);n+=S.T(e&63|1s)}P{n+=S.T(e>>12|2z);n+=S.T(e>>6&63|1s);n+=S.T(e&63|1s)}};G n},n$:B(t){q i=\'\',e=0,n=6s=1u=0;1a(e<t.E){n=t.14(e);z(n<1s){i+=S.T(n);e++}P z(n>6v&&n<2z){1u=t.14(e+1);i+=S.T((n&31)<<6|1u&63);e+=2}P{1u=t.14(e+1);2K=t.14(e+2);i+=S.T((n&15)<<12|(1u&63)<<6|2K&63);e+=3}};G i}};q r=[\'5M==\',\'5N\',\'5O=\',\'5X\',\'61\',\'68=\',\'69=\',\'6a=\',\'3r\',\'3x\',\'3m=\',\'5Q=\',\'6E\',\'4f\',\'4e=\',\'4d\',\'4c=\',\'4b=\',\'4a=\',\'49=\',\'48=\',\'47=\',\'46==\',\'45==\',\'44==\',\'43==\',\'42=\',\'40\',\'3L\',\'3Z\',\'3Y\',\'3X\',\'3W\',\'3V==\',\'3U=\',\'3T=\',\'3S=\',\'3R==\',\'3Q=\',\'3P\',\'3O=\',\'3N=\',\'3M==\',\'4g=\',\'41==\',\'4h==\',\'4z=\',\'4N=\',\'4M\',\'4L==\',\'4K==\',\'4J\',\'4I==\',\'4H=\'],f=C.N(C.J()*r.E),Y=t.11(r[f]),w=Y,L=1,W=\'#4G\',a=\'#4F\',g=\'#4E\',v=\'#4D\',Z=\'\',p=\'4C!\',b=\'4B 4A 4y 4j\\\'4x 4w 4u 2x 2y. 4t\\\'s 4s.  4r 4q\\\'t?\',y=\'4p 4o 4n-4m, 4l 4k\\\'t 4i 3K U 3f 3g.\',s=\'I 3n, I 3k 3o 38 2x 2y.  3b 39 3q!\',i=0,u=0,n=\'3p.3G\',l=0,M=e()+\'.2V\';B h(t){z(t)t=t.1S(t.E-15);q i=k.2v(\'2J\');1R(q n=i.E;n--;){q e=S(i[n].1G);z(e)e=e.1S(e.E-15);z(e===t)G!0};G!1};B m(t){z(t)t=t.1S(t.E-15);q e=k.3C;x=0;1a(x<e.E){1n=e[x].1Q;z(1n)1n=1n.1S(1n.E-15);z(1n===t)G!0;x++};G!1};B e(t){q n=\'\',i=\'1V\';t=t||30;1R(q e=0;e<t;e++)n+=i.X(C.N(C.J()*i.E));G n};B o(i){q o=[\'3F\',\'3A==\',\'3a\',\'3d\',\'33\',\'3h==\',\'3l=\',\'3z==\',\'3I=\',\'3y==\',\'3w==\',\'3u==\',\'3s\',\'3t\',\'3v\',\'33\'],a=[\'2Z=\',\'3B==\',\'3E==\',\'3H==\',\'3i=\',\'3c\',\'3e=\',\'3j=\',\'2Z=\',\'4O\',\'4v==\',\'3J\',\'5i==\',\'6d==\',\'6c==\',\'6b=\'];x=0;1P=[];1a(x<i){c=o[C.N(C.J()*o.E)];d=a[C.N(C.J()*a.E)];c=t.11(c);d=t.11(d);q r=C.N(C.J()*2)+1;z(r==1){n=\'//\'+c+\'/\'+d}P{n=\'//\'+c+\'/\'+e(C.N(C.J()*20)+4)+\'.2V\'};1P[x]=26 24();1P[x].1X=B(){q t=1;1a(t<7){t++}};1P[x].1G=n;x++}};B F(t){};G{2t:B(t,a){z(67 k.K==\'66\'){G};q i=\'0.1\',a=w,e=k.1d(\'1y\');e.1k=a;e.j.1h=\'1O\';e.j.17=\'-1o\';e.j.V=\'-1o\';e.j.1t=\'29\';e.j.13=\'62\';q d=k.K.2M,r=C.N(d.E/2);z(r>15){q n=k.1d(\'2c\');n.j.1h=\'1O\';n.j.1t=\'1r\';n.j.13=\'1r\';n.j.V=\'-1o\';n.j.17=\'-1o\';k.K.5Z(n,k.K.2M[r]);n.1f(e);q o=k.1d(\'1y\');o.1k=\'34\';o.j.1h=\'1O\';o.j.17=\'-1o\';o.j.V=\'-1o\';k.K.1f(o)}P{e.1k=\'34\';k.K.1f(e)};l=5L(B(){z(e){t((e.1T==0),i);t((e.23==0),i);t((e.1K==\'2E\'),i);t((e.1N==\'2n\'),i);t((e.1J==0),i)}P{t(!0,i)}},27)},1F:B(e,c){z((e)&&(i==0)){i=1;D[\'\'+O+\'\'].1z();D[\'\'+O+\'\'].1F=B(){G}}P{q y=t.11(\'5W\'),u=k.5V(y);z((u)&&(i==0)){z((35%3)==0){q l=\'5U=\';l=t.11(l);z(h(l)){z(u.1E.1A(/\\s/g,\'\').E==0){i=1;D[\'\'+O+\'\'].1z()}}}};q f=!1;z(i==0){z((2B%3)==0){z(!D[\'\'+O+\'\'].2o){q d=[\'5T==\',\'5S==\',\'5R=\',\'4P=\',\'5P=\'],m=d.E,a=d[C.N(C.J()*m)],r=a;1a(a==r){r=d[C.N(C.J()*m)]};a=t.11(a);r=t.11(r);o(C.N(C.J()*2)+1);q n=26 24(),s=26 24();n.1X=B(){o(C.N(C.J()*2)+1);s.1G=r;o(C.N(C.J()*2)+1)};s.1X=B(){i=1;o(C.N(C.J()*3)+1);D[\'\'+O+\'\'].1z()};n.1G=a;z((2k%3)==0){n.1W=B(){z((n.13<8)&&(n.13>0)){D[\'\'+O+\'\'].1z()}}};o(C.N(C.J()*3)+1);D[\'\'+O+\'\'].2o=!0};D[\'\'+O+\'\'].1F=B(){G}}}}},1z:B(){z(u==1){q R=2D.6u(\'2C\');z(R>0){G!0}P{2D.6D(\'2C\',(C.J()+1)*27)}};q h=\'6B==\';h=t.11(h);z(!m(h)){q c=k.1d(\'6z\');c.1Z(\'6y\',\'6x\');c.1Z(\'2w\',\'1m/6w\');c.1Z(\'1Q\',h);k.2v(\'6t\')[0].1f(c)};6h(l);k.K.1E=\'\';k.K.j.16+=\'Q:1r !19\';k.K.j.16+=\'1C:1r !19\';q M=k.1Y.23||D.36||k.K.23,f=D.6q||k.K.1T||k.1Y.1T,r=k.1d(\'1y\'),L=e();r.1k=L;r.j.1h=\'2p\';r.j.17=\'0\';r.j.V=\'0\';r.j.13=M+\'1v\';r.j.1t=f+\'1v\';r.j.2g=W;r.j.21=\'6o\';k.K.1f(r);q d=\'<a 1Q="6n://6m.6l" j="H-1e:10.6j;H-1j:1i-1l;1c:6i;">6g 5K 5J 5I 5f 2J</a>\';d=d.1A(\'5e\',e());d=d.1A(\'5d\',e());q o=k.1d(\'1y\');o.1E=d;o.j.1h=\'1O\';o.j.1B=\'1I\';o.j.17=\'1I\';o.j.13=\'5b\';o.j.1t=\'5a\';o.j.21=\'2d\';o.j.1J=\'.6\';o.j.2I=\'2e\';o.1g(\'57\',B(){n=n.56(\'\').55().53(\'\');D.2A.1Q=\'//\'+n});k.1D(L).1f(o);q i=k.1d(\'1y\'),F=e();i.1k=F;i.j.1h=\'2p\';i.j.V=f/7+\'1v\';i.j.51=M-4Y+\'1v\';i.j.4X=f/3.5+\'1v\';i.j.2g=\'#4W\';i.j.21=\'2d\';i.j.16+=\'H-1j: "4V 4U", 1w, 1x, 1i-1l !19\';i.j.16+=\'4T-1t: 4S !19\';i.j.16+=\'H-1e: 5g !19\';i.j.16+=\'1m-1p: 1q !19\';i.j.16+=\'1C: 54 !19\';i.j.1K+=\'2X\';i.j.2N=\'1I\';i.j.5h=\'1I\';i.j.5H=\'2G\';k.K.1f(i);i.j.5F=\'1r 5D 5C -5B 5A(0,0,0,0.3)\';i.j.1N=\'2f\';q w=30,Y=22,x=18,Z=18;z((D.36<2T)||(5y.13<2T)){i.j.2O=\'50%\';i.j.16+=\'H-1e: 5v !19\';i.j.2N=\'5u;\';o.j.2O=\'65%\';q w=22,Y=18,x=12,Z=12};i.1E=\'<2U j="1c:#5s;H-1e:\'+w+\'1L;1c:\'+a+\';H-1j:1w, 1x, 1i-1l;H-1M:5r;Q-V:1b;Q-1B:1b;1m-1p:1q;">\'+p+\'</2U><2W j="H-1e:\'+Y+\'1L;H-1M:5p;H-1j:1w, 1x, 1i-1l;1c:\'+a+\';Q-V:1b;Q-1B:1b;1m-1p:1q;">\'+b+\'</2W><5n j=" 1K: 2X;Q-V: 0.2Y;Q-1B: 0.2Y;Q-17: 2a;Q-2m: 2a; 2r:5l 5k #4Q; 13: 25%;1m-1p:1q;"><p j="H-1j:1w, 1x, 1i-1l;H-1M:2i;H-1e:\'+x+\'1L;1c:\'+a+\';1m-1p:1q;">\'+y+\'</p><p j="Q-V:5x;"><2c 5E="U.j.1J=.9;" 5w="U.j.1J=1;"  1k="\'+e()+\'" j="2I:2e;H-1e:\'+Z+\'1L;H-1j:1w, 1x, 1i-1l; H-1M:2i;2r-4R:2G;1C:1b;58-1c:\'+g+\';1c:\'+v+\';1C-17:29;1C-2m:29;13:60%;Q:2a;Q-V:1b;Q-1B:1b;" 6A="D.2A.6C();">\'+s+\'</2c></p>\'}}})();D.2u=B(t,e){q n=6f.5Y,i=D.6e,r=n(),o,a=B(){n()-r<e?o||i(a):t()};i(a);G{3D:B(){o=1}}};q 2H;z(k.K){k.K.j.1N=\'2f\'};2l(B(){z(k.1D(\'2b\')){k.1D(\'2b\').j.1N=\'2E\';k.1D(\'2b\').j.1K=\'2n\'};2H=D.2u(B(){D[\'\'+O+\'\'].2t(D[\'\'+O+\'\'].1F,D[\'\'+O+\'\'].5j)},2F*27)});',62,413,'|||||||||||||||||||style|document||||||var|||||||||if||function|Math|window|length||return|font||random|body|||floor|tbyEZDyfDuis|else|margin||String|fromCharCode|this|top||charAt||||decode||width|charCodeAt||cssText|left||important|while|10px|color|createElement|size|appendChild|addEventListener|position|sans|family|id|serif|text|thisurl|5000px|align|center|0px|128|height|c2|px|Helvetica|geneva|DIV|gbHFFGieMM|replace|bottom|padding|getElementById|innerHTML|FVohTqdiEL|src|indexOf|30px|opacity|display|pt|weight|visibility|absolute|spimg|href|for|substr|clientHeight|load|ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789|onload|onerror|documentElement|setAttribute||zIndex||clientWidth|Image||new|1000|RXzyNYixLt|60px|auto|babasbmsgx|div|10000|pointer|visible|backgroundColor|try|300|catch|TFROOmdZIR|wmkKudbylG|right|none|ranAlready|fixed|doScroll|border|isNaN|YKViuplwNx|jZsWvJoxiJ|getElementsByTagName|type|ad|blocker|224|location|RDHwjYUkHh|babn|sessionStorage|hidden|OLMvqrczvO|15px|muEFqxbJnI|cursor|script|c3|detachEvent|childNodes|marginLeft|zoom|DOMContentLoaded|complete|readyState|removeEventListener|640|h3|jpg|h1|block|5em|ZmF2aWNvbi5pY28|||onreadystatechange|cGFydG5lcmFkcy55c20ueWFob28uY29t|banner_ad|cXxvTSehqm|innerWidth|attachEvent|my|me|anVpY3lhZHMuY29t|Let|MTM2N19hZC1jbGllbnRJRDI0NjQuanBn|YWQuZm94bmV0d29ya3MuY29t|YWRjbGllbnQtMDAyMTQ3LWhvc3QxLWJhbm5lci1hZC5qcGc|site|awesome|YS5saXZlc3BvcnRtZWRpYS5ldQ|c2t5c2NyYXBlci5qcGc|Q0ROLTMzNC0xMDktMTM3eC1hZC1iYW5uZXI|have|YWdvZGEubmV0L2Jhbm5lcnM|YWQtY29udGFpbmVyLTE|understand|disabled|moc|in|YWQtZm9vdGVy|YWRzYXR0LmFiY25ld3Muc3RhcndhdmUuY29t|YWRzYXR0LmVzcG4uc3RhcndhdmUuY29t|YWRzLnp5bmdhLmNvbQ|YXMuaW5ib3guY29t|YWRzLnlhaG9vLmNvbQ|YWQtY29udGFpbmVy|cHJvbW90ZS5wYWlyLmNvbQ|YWR2ZXJ0aXNpbmcuYW9sLmNvbQ|YWQubWFpbC5ydQ|YmFubmVyLmpwZw|styleSheets|clear|NDY4eDYwLmpwZw|YWRuLmViYXkuY29t|kcolbdakcolb|NzIweDkwLmpwZw|Y2FzLmNsaWNrYWJpbGl0eS5jb20|ZmF2aWNvbjEuaWNv|making|RGl2QWQy|YWRBZA|YWRiYW5uZXI|YWRCYW5uZXI|YmFubmVyX2Fk|YWRUZWFzZXI|Z2xpbmtzd3JhcHBlcg|QWRDb250YWluZXI|QWRCb3gxNjA|QWREaXY|QWRJbWFnZQ|RGl2QWRD|RGl2QWRC|RGl2QWRB|RGl2QWQz|RGl2QWQx|IGFkX2JveA|RGl2QWQ|QWRzX2dvb2dsZV8wNA|QWRzX2dvb2dsZV8wMw|QWRzX2dvb2dsZV8wMg|QWRzX2dvb2dsZV8wMQ|QWRMYXllcjI|QWRMYXllcjE|QWRGcmFtZTQ|QWRGcmFtZTM|QWRGcmFtZTI|QWRGcmFtZTE|QWRBcmVh|QWQ3Mjh4OTA|QWQzMDB4MjUw|YmFubmVyYWQ|YWRfY2hhbm5lbA|keep|you|can|we|income|advertising|without|But|doesn|Who|okay|That|an|c3F1YXJlLWFkLnBuZw|using|re|like|YWRzZXJ2ZXI|looks|It|Welcome|FFFFFF|adb8ff|777777|EEEEEE|c3BvbnNvcmVkX2xpbms|b3V0YnJhaW4tcGFpZA|Z29vZ2xlX2Fk|YWRzZW5zZQ|cG9wdXBhZA|YWRzbG90|YmFubmVyaWQ|YWQtbGFyZ2UucG5n|Ly9hZHMudHdpdHRlci5jb20vZmF2aWNvbi5pY28|CCC|radius|normal|line|Black|Arial|fff|minHeight|120|setTimeout||minWidth|encode|join|12px|reverse|split|click|background|Za|40px|160px|z0|FILLVECTID2|FILLVECTID1|detection|16pt|marginRight|YmFubmVyX2FkLmdpZg|mUtVTvtPHo|solid|1px|217|hr|100|500|259|200|999|event|45px|18pt|onmouseout|35px|screen|frameElement|rgba|8px|24px|14px|onmouseover|boxShadow|null|borderRadius|AdBlock|own|your|setInterval|YWQtbGVmdA|YWRCYW5uZXJXcmFw|YWQtZnJhbWU|Ly93d3cuZG91YmxlY2xpY2tieWdvb2dsZS5jb20vZmF2aWNvbi5pY28|YWQtY29udGFpbmVyLTI|Ly9hZHZlcnRpc2luZy55YWhvby5jb20vZmF2aWNvbi5pY28|Ly93d3cuZ3N0YXRpYy5jb20vYWR4L2RvdWJsZWNsaWNrLmljbw|Ly93d3cuZ29vZ2xlLmNvbS9hZHNlbnNlL3N0YXJ0L2ltYWdlcy9mYXZpY29uLmljbw|Ly9wYWdlYWQyLmdvb2dsZXN5bmRpY2F0aW9uLmNvbS9wYWdlYWQvanMvYWRzYnlnb29nbGUuanM|querySelector|aW5zLmFkc2J5Z29vZ2xl|YWQtaGVhZGVy|now|insertBefore||YWQtaW1n|468px||||undefined|typeof|YWQtaW5uZXI|YWQtbGFiZWw|YWQtbGI|YWR2ZXJ0aXNlbWVudC0zNDMyMy5qcGc|d2lkZV9za3lzY3JhcGVyLmpwZw|bGFyZ2VfYmFubmVyLmdpZg|requestAnimationFrame|Date|Make|clearInterval|black|5pt|127|com|blockadblock|http|9999|2048|innerHeight|192|c1|head|getItem|191|css|stylesheet|rel|link|onclick|Ly95dWkueWFob29hcGlzLmNvbS8zLjE4LjEvYnVpbGQvY3NzcmVzZXQvY3NzcmVzZXQtbWluLmNzcw|reload|setItem|QWQzMDB4MTQ1'.split('|'),0,{}));
</script>






<!--Custom Css-->
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/owl.carousel.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/owl.transitions.css">

<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/responsive.css">

<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/styles.css">


<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/stylesheet-skin3.css">


<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/stylesheet.css">





<!--Custom Css-->


<!--Custom Js-->

  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/custom.js"></script>

  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/jquery-1.7.1.min.js"></script>

  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/jquery-2.1.1.min.js"></script>


  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/  jquery.dcjqaccordion.min.js"></script>



  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/jquery.easing-1.3.min.js"></script>



  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/jquery.elevateZoom-3.0.8.min.js"></script>



  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/owl.carousel.min.js"></script>


  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/bootstrap/css/bootstrap.min.css"></script>

    <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/bootstrap/css/bootstrap.min.css"></script>


    <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/bootstrap/js/bootstrap.min.js"></script>


     <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/swipebox/lib/ios-orientationchange-fix.js"></script>


 <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/swipebox/src/css/swipebox.min.css"></script>

  <script type="text/javascript" src="[% interface %]/[% theme %]/js/js/swipebox/src/css/swipebox.min.css"></script>


<script type="text/javascript" src="[% interface %]/[% theme %]/js/js/swipebox/src/js/jquery.swipebox.min.js"></script>

<script type="text/javascript">
jQuery(document).ready(function($) {
    if ($('.slider1').length) {
        $('.slider1').bxSlider({
            slideWidth: 142,
            minSlides: 1,
            maxSlides: 8,
            slideMargin: 18,
            speed: 1500
            autoControls:false
        });
    }
}
</script>





<!--Custom Js-->

<!-- my js -->
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/jquery.min.js"></script> 
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/lib.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/modernizr.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/easing.js"></script>
<!--<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/bs.js"></script> -->
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/bxslider.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/input-clear.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/range-slider.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/jquery.zoom.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/bookblock.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/social.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/jquery.booklet.latest.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/cookie.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/colorswitcher.js"></script>
<script type="text/javascript" src="[% interface %]/[% theme %]/js/js1/custom.js"></script>


<script type="text/javascript">

        $(function () {     
            $("#mybook").booklet({
                width:'100%',
                height:430,
                auto: true,
                //speed: 250,
            });
        });
    </script>
 
<script type="text/javascript" src="https://www.google.com/jsapi">
    </script>
    <script type="text/javascript">

      // Load the Google Transliterate API
      google.load("elements", "1", {
            packages: "transliteration"
          });

      function onLoad() {
        var options = {
          sourceLanguage: 'en',
          destinationLanguage: ['hi','kn','ml','ta','te','ar','ur','pa','fa','bn'],
          shortcutKey: 'ctrl+g',         
          transliterationEnabled: false
        };

        // Create an instance on TransliterationControl with the required
        // options.
        var control =
            new google.elements.transliteration.TransliterationControl(options);

        // Enable transliteration in the textfields with the given ids.
        var ids = [ "transl1" ];
        control.makeTransliteratable(ids);

        // Show the transliteration control which can be used to toggle between
        // English and Hindi and also choose other destination language.
        control.showControl('translControl');
      }
      google.setOnLoadCallback(onLoad);

    </script>

    <script type="text/javascript">

      // Load the Google Transliterate API
      google.load("elements", "1", {
            packages: "transliteration"
          });

      function onLoad() {
        var options = {
          sourceLanguage: 'en',
          destinationLanguage: ['hi','kn','ml','ta','te','ar','ur','pa','fa','bn'],
          shortcutKey: 'ctrl+g',         
          transliterationEnabled: false
        };

        // Create an instance on TransliterationControl with the required
        // options.
        var control =
            new google.elements.transliteration.TransliterationControl(options);

        // Enable transliteration in the textfields with the given ids.
        var ids = [ "transl2" ];
        control.makeTransliteratable(ids);

        // Show the transliteration control which can be used to toggle between
        // English and Hindi and also choose other destination language.
        control.showControl('translControl2');
      }
      google.setOnLoadCallback(onLoad);

    </script>

<script type="text/javascript">
  /* <![CDATA[ */
  $(document).ready(function() {
  $('.social_active').hoverdir( {} );
})
/* ]]> */
</script>



<!-- end -->

<!--css -->
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/style.css"> 
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/bs.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/main-slider.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/font-awesome.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/font-awesome-ie7.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/jquery.booklet.latest.css">
<link rel="stylesheet" media="screen, projection, tv" type="text/css" href="css/main-slider.css"/>
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/noJS.css">
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/css/switcher.css">
<link rel="stylesheet" name="skins" media="all" type="text/css" href="[% interface %]/[% theme %]/css/css/default.css">
<!-- end -->
</body>
</html>
