<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="generator" content="Koha [% Version %]" /> <!-- leave this for stats -->
<meta name="viewport" content="width=device-width, initial-scale=1" />
<link rel="shortcut icon" href="[% IF ( OpacFavicon ) %][% OpacFavicon %][% ELSE %][% interface %]/[% theme %]/images/favicon.ico[% END %]" type="image/x-icon" />
[% IF ( bidi ) %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/lib/bootstrap/css/bootstrap-rtl.min.css" />
[% ELSE %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/lib/bootstrap/css/bootstrap.min.css" />
[% END %]

[% IF ( bidi ) %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/lib/jquery/jquery-ui-rtl.css" />
[% ELSE %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/lib/jquery/jquery-ui.css" />
[% END %]

[% SET opaclayoutstylesheet='opac.css' UNLESS opaclayoutstylesheet %]
[% IF (opaclayoutstylesheet.match('^https?:|^\/')) %]
    <link rel="stylesheet" type="text/css" href="[% opaclayoutstylesheet %]" />
[% ELSE %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/[% opaclayoutstylesheet %]" />
[% END %]
[% IF ( OpacAdditionalStylesheet ) %]
    [% IF (OpacAdditionalStylesheet.match('^https?:|^\/')) %]
        <link rel="stylesheet" type="text/css" href="[% OpacAdditionalStylesheet %]" />
    [% ELSE %]
        <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/[% OpacAdditionalStylesheet %]" />
    [% END %]
[% END %]
[% IF ( opac_css_override ) %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/[% opac_css_override %]" />
[% END %]
<link rel="stylesheet" type="text/css" media="print" href="[% interface %]/[% theme %]/css/print.css" />
[% IF persona %]
 <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/persona-buttons.css" />
[% END %]
[% IF ( bidi ) %]
    <link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/css/right-to-left.css" />
[% END %]
[% IF ( OPACUserCSS ) %]<style type="text/css">[% OPACUserCSS %]</style>[% END %]
[% IF SCO_login %]
    [% SET SCOUserCSS = Koha.Preference('SCOUserCSS') %]
    [% IF SCOUserCSS %]
        <style type="text/css">[% SCOUserCSS %]</style>
    [% END %]
[% END %]
<link rel="unapi-server" type="application/xml" title="unAPI" href="[% OPACBaseURL %]/cgi-bin/koha/unapi" />
[% PROCESS cssinclude %]
<!-- Respond.js brings responsive layout behavior to IE < v.9 -->
<!--[if lt IE 9]>
    <script src="[% interface %]/[% theme %]/lib/respond.min.js"></script>
<![endif]-->
<script type="text/javascript">
    function _(s) { return s } // dummy function for gettext
</script>
<script type="text/javascript" src="[% interface %]/[% theme %]/lib/modernizr.min.js"></script>
<link rel="stylesheet" type="text/css" href="[% interface %]/[% theme %]/lib/font-awesome/css/font-awesome.min.css" />

<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
<script>
  (adsbygoogle = window.adsbygoogle || []).push({
    google_ad_client: "ca-pub-3772394197995502",
    enable_page_level_ads: true
  });
</script>



<!--Google analytics -->

<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','https://www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-86978747-1', 'auto');
  ga('send', 'pageview');

</script>

