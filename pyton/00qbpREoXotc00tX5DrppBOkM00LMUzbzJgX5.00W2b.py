
        
        
MOD_SSL_CONF_DEST = 'options-ssl-nginx.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
        '''
    return_vars = {}
    # Get list of words in the variable
    a_opts = util.get_var_from_file(varname, filepath).split()
    for i, v in enumerate(a_opts):
        # Handle Define statements and make sure it has an argument
        if v == '-D' and len(a_opts) >= i+2:
            var_parts = a_opts[i+1].partition('=')
            return_vars[var_parts[0]] = var_parts[2]
        elif len(v) > 2 and v.startswith('-D'):
            # Found var with no whitespace separator
            var_parts = v[2:].partition('=')
            return_vars[var_parts[0]] = var_parts[2]
    return return_vars
    
            :param int rollback: Number of checkpoints to revert
    
            self.assertEqual(None, self._call(self.vhosts))
    
            self.assertEqual(mock_setup_cert.call_count, 2)
    
    # How to display URL addresses: 'footnote', 'no', or 'inline'.
#texinfo_show_urls = 'footnote'
    
    PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
                # compare date_added
            date_diff = None
            dates = [release.date_added for release in releases]
            if dates:
                diff = (max(dates) - min(dates)).total_seconds()
                if date_diff is None or diff > date_diff:
                    date_diff = diff
    
            for renv in dupe_release_envs:
            release_id = renv['release_id']
            organization_id = renv['organization_id']
            environment_id = renv['environment_id']
            renvs = list(
                orm.ReleaseEnvironment.objects.filter(
                    release_id=release_id,
                    organization_id=organization_id,
                    environment_id=environment_id,
                ).order_by('first_seen')
            )
            to_renv = renvs[0]
            from_renvs = renvs[1:]
            last_seen = max([re.last_seen for re in renvs])
            orm.ReleaseEnvironment.objects.filter(
                id=to_renv.id,
            ).update(last_seen=last_seen)
            orm.ReleaseEnvironment.objects.filter(
                id__in=[re.id for re in from_renvs],
            ).delete()
    
            # Adding model 'ApiAuthorization'
        db.create_table(
            'sentry_apiauthorization', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'application', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ApiApplication'], null=True
                    )
                ), (
                    'user', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ), ('scopes', self.gf('django.db.models.fields.BigIntegerField')(default=None)), (
                    'date_added',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ApiAuthorization'])