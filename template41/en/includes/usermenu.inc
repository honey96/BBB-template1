[% IF ( ( Koha.Preference( 'opacuserlogin' ) == 1 ) && loggedinusername ) %]
    <div id="menu">
        <h4><a href="#" class="menu-collapse-toggle">My account menu</a></h4>
        <ul class="menu-collapse">
            [% IF ( userview ) %]
                <li class="active">
            [% ELSE %]
                <li>
            [% END %]
                <a href="/cgi-bin/koha/opac-user.pl">My summary</a></li>
            [% IF ( OPACFinesTab ) %]
                [% IF ( accountview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-account.pl">My fines</a></li>
            [% END %]

            [% IF ( userupdateview ) %]
                <li class="active">
            [% ELSE %]
                <li>
            [% END %]
                <a href="/cgi-bin/koha/opac-memberentry.pl">My personal details</a></li>
            [% IF Koha.Preference( 'TagsEnabled' ) == 1 %]
                [% IF ( tagsview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-tags.pl?mine=1">My tags</a></li>
            [% END %]

            [% IF ( OpacPasswordChange ) %]
                [% IF ( passwdview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-passwd.pl">Change password</a></li>
            [% END %]

            [% IF EnableOpacSearchHistory %]
                [% IF ( searchhistoryview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-search-history.pl">My search history</a></li>
            [% END %]

            [% IF ( opacreadinghistory ) %]
                [% IF ( readingrecview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-readingrecord.pl">My reading history</a></li>
                [% IF ( OPACPrivacy ) %]
                    [% IF ( privacyview ) %]
                        <li class="active">
                    [% ELSE %]
                        <li>
                    [% END %]
                    <a href="/cgi-bin/koha/opac-privacy.pl">My privacy</a></li>
                [% END %]
            [% END # / opacreadinghistory %]

            [% IF Koha.Preference( 'suggestion' ) == 1 %]
                [% IF ( suggestionsview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-suggestions.pl">My purchase suggestions</a></li>
            [% END %]

            [% IF ( EnhancedMessagingPreferences ) %]
                [% IF Koha.Preference( 'EnhancedMessagingPreferencesOPAC' ) %]
                    [% IF ( messagingview ) %]
                        <li class="active">
                    [% ELSE %]
                        <li>
                    [% END %]
                    <a href="/cgi-bin/koha/opac-messaging.pl">My messaging</a></li>
                 [% END %]
            [% END %]

            [% IF Koha.Preference( 'virtualshelves' ) == 1 %]
                [% IF ( listsview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-shelves.pl?op=list&amp;category=1">My lists</a></li>
            [% END %]

            [% IF Koha.Preference( 'useDischarge' ) == 1 %]
                [% IF ( dischargeview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-discharge.pl">Ask for a Library Clearance</a></li>
            [% END %]
        </ul>
    </div>
[% END %]
