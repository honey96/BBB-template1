[% classprop  = 'class="' %]
[% IF LoginBranchcode.defined %]
    [% classprop = classprop _ 'branch-' _ LoginBranchcode %]
[% ELSE %]
    [% classprop = classprop _ 'branch-default' %]
[% END %]
[% IF bodyclass.defined %]
    [% classprop = classprop _ ' ' _ bodyclass %]
[% END %]
[% classprop = classprop _ '"' %]

[% IF bodyid.defined %]
    [% idprop = 'ID="' _ bodyid _ '" ' %]
[% END %]
<body [%idprop%][% classprop %] >
<div id="babasbmsgx" style="visibility: visible !important;">Please disable your adblock and script blockers to view this page</div>