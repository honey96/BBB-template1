[% USE Koha %]

<div id="search-facets">
    <form method="get" action="/cgi-bin/koha/opac-topissues.pl">
    <h4><a href="#" class="menu-collapse-toggle">Refine your search</a></h4>
            <ul class="menu-collapse">
                <li><label for="limit">Show the top </label>
                            <select name="limit" id="limit">
                                [% IF ( limit == 10 ) %]<option value ="10" selected="selected">10 titles</option>[% ELSE %]<option value="10">10 titles</option>[% END %]
                                [% IF ( limit == 15 ) %]<option value ="15" selected="selected">15 titles</option>[% ELSE %]<option value="15">15 titles</option>[% END %]
                                [% IF ( limit == 20 ) %]<option value ="20" selected="selected">20 titles</option>[% ELSE %]<option value="20">20 titles</option>[% END %]
                                [% IF ( limit == 30 ) %]<option value ="30" selected="selected">30 titles</option>[% ELSE %]<option value="30">30 titles</option>[% END %]
                                [% IF ( limit == 40 ) %]<option value ="40" selected="selected">40 titles</option>[% ELSE %]<option value="40">40 titles</option>[% END %]
                                [% IF ( limit == 50 ) %]<option value ="50" selected="selected">50 titles</option>[% ELSE %]<option value="50">50 titles</option>[% END %]
                                [% IF ( limit == 100 ) %]<option value ="100" selected="selected">100 titles</option>[% ELSE %]<option value="100">100 titles</option>[% END %]
                            </select></li>

                <li><label for="branch">From: </label>
                            <select name="branch" id="branch">
                                <option value="">All libraries</option>
                                [% FOREACH branchloo IN branchloop %]
                                    [% IF ( branchloo.selected ) %]
                                        <option value="[% branchloo.value %]" selected="selected">
                                    [% ELSE %]
                                        <option value="[% branchloo.value %]">
                                    [% END %]
                                            [% branchloo.branchname %]
                                        </option>
                                [% END %]
                            </select></li>

                [% AdvancedSearchTypes = Koha.Preference('AdvancedSearchTypes').split('\|') %]
                [% IF AdvancedSearchTypes.grep('^itemtypes$').size %]
                    <li>
                        <label for="itemtype">Limit to: </label>
                        <select name="itemtype" id="itemtype">
                            <option value="">All item types</option>
                            [% FOREACH itemtype IN ItemTypes.Get() %]
                                [% IF itemtype.itemtype == selected_itemtype %]
                                    <option value="[% itemtype.itemtype %]" selected="selected">
                                [% ELSE %]
                                    <option value="[% itemtype.itemtype %]">
                                [% END %]
                                    [% itemtype.translated_description %]
                                </option>
                            [% END %]
                        </select>
                    </li>
                [% END %]

                [% IF AdvancedSearchTypes.grep('^ccode$').size %]
                    <li>
                        <label for="ccode">Limit to:</label>
                        <select name="ccode" id="ccode">
                            <option value="">All collections</option>
                            [% FOREACH ccode IN AuthorisedValues.Get('CCODE', 1) %]
                                [% IF ccode.authorised_value == selected_ccode %]
                                    <option value="[% ccode.authorised_value %]" selected="selected">
                                [% ELSE %]
                                    <option value="[% ccode.authorised_value %]">
                                [% END %]
                                    [% ccode.lib %]
                                </option>
                            [% END %]
                        </select>
                    </li>
                [% END %]

                <li><label for="timeLimit">Acquired in the last:</label>
                            <select name="timeLimit" id="timeLimit">
                                [% IF ( timeLimit == 3 ) %]
                                    <option value="3" selected="selected">3 months</option>
                                [% ELSE %]
                                    <option value="3">3 months</option>
                                [% END %]
                                [% IF ( timeLimit == 6 ) %]
                                    <option value="6" selected="selected">6 months</option>
                                [% ELSE %]
                                    <option value="6">6 months</option>
                                [% END %]
                                [% IF ( timeLimit == 12 ) %]
                                    <option value="12" selected="selected">12 months</option>
                                [% ELSE %]
                                    <option value="12">12 months</option>
                                [% END %]
                                [% IF ( timeLimit == 999 ) %]
                                    <option value="999" selected="selected">No limit</option>
                                [% ELSE %]
                                    <option value="999">No limit</option>
                                [% END %]
                            </select></li>
                <li>
                    <input type="hidden" name="do_it" value="1" />
                    <input type="submit" class="btn" value="Submit" />
                </li>
            </ul>
    </form>
</div>