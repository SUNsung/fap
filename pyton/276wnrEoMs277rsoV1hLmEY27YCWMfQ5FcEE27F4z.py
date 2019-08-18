
@login_required(redirect_field_name='redirect_to')
def login_protected_view_changed_redirect(request):
    'A simple view that is login protected with a custom redirect field set'
    t = Template('This is a login protected test. Username is {{ user.username }}.', name='Login Template')
    c = Context({'user': request.user})
    return HttpResponse(t.render(c))
    
        def errors(self):
        return mark_safe(
            '\n'.join(
                self.form[f].errors.as_ul() for f in self.fields if f not in self.readonly_fields
            ).strip('\n')
        )
    
    
class StudentInline(admin.StackedInline):
    model = Child
    extra = 1
    fieldsets = [
        ('Name', {'fields': ('name',), 'classes': ('collapse',)}),
    ]
    
            # Click on a few delete buttons
        self.selenium.find_element_by_css_selector(
            'form#profilecollection_form tr.dynamic-profile_set#profile_set-1 td.delete a').click()
        self.selenium.find_element_by_css_selector(
            'form#profilecollection_form tr.dynamic-profile_set#profile_set-2 td.delete a').click()
        # The rows are gone and the IDs have been re-sequenced
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '#profile_set-group table tr.dynamic-profile_set')), 3)
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            'form#profilecollection_form tr.dynamic-profile_set#profile_set-0')), 1)
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            'form#profilecollection_form tr.dynamic-profile_set#profile_set-1')), 1)
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            'form#profilecollection_form tr.dynamic-profile_set#profile_set-2')), 1)
    
        def test_filtered_aggregate_on_annotate(self):
        pages_annotate = Sum('book__pages', filter=Q(book__rating__gt=3))
        age_agg = Sum('age', filter=Q(total_pages__gte=400))
        aggregated = Author.objects.annotate(total_pages=pages_annotate).aggregate(summed_age=age_agg)
        self.assertEqual(aggregated, {'summed_age': 140})
    
        def distance_expr_for_lookup(self, lhs, rhs, **kwargs):
        return super().distance_expr_for_lookup(
            self._normalize_distance_lookup_arg(lhs),
            self._normalize_distance_lookup_arg(rhs),
            **kwargs
        )
    
    try:
    from django.contrib.gis.db.backends.postgis.operations import PostGISOperations
    HAS_POSTGRES = True
except ImportError:
    HAS_POSTGRES = False
    
        @skipUnlessDBFeature('has_brin_autosummarize')
    def test_brin_parameters(self):
        index_name = 'char_field_brin_params'
        index = BrinIndex(fields=['field'], name=index_name, autosummarize=True)
        with connection.schema_editor() as editor:
            editor.add_index(CharFieldModel, index)
        constraints = self.get_constraints(CharFieldModel._meta.db_table)
        self.assertEqual(constraints[index_name]['type'], BrinIndex.suffix)
        self.assertEqual(constraints[index_name]['options'], ['autosummarize=on'])
        with connection.schema_editor() as editor:
            editor.remove_index(CharFieldModel, index)
        self.assertNotIn(index_name, self.get_constraints(CharFieldModel._meta.db_table))
    
             cache_page = decorator_from_middleware_with_args(CacheMiddleware)
         # ...
    
    
class Driver(GDALBase):
    '''
    Wrap a GDAL/OGR Data Source Driver.
    For more information, see the C API source code:
    https://www.gdal.org/gdal_8h.html - https://www.gdal.org/ogr__api_8h.html
    '''
    
    
class OFTWideStringList(Field):
    pass
    
        @property
    def field_types(self):
        '''
        Return a list of the types of fields in this Layer.  For example,
        return the list [OFTInteger, OFTReal, OFTString] for an OGR layer that
        has an integer, a floating-point, and string fields.
        '''
        return [OGRFieldTypes[capi.get_field_type(capi.get_field_defn(self._ldefn, i))]
                for i in range(self.num_fields)]
    
        def transform(self, srid, driver=None, name=None, resampling='NearestNeighbour',
                  max_error=0.0):
        '''
        Return a copy of this raster reprojected into the given SRID.
        '''
        # Convert the resampling algorithm name into an algorithm id
        algorithm = GDAL_RESAMPLE_ALGORITHMS[resampling]
    
        @property
    def srid(self):
        'Return the SRID of top-level authority, or None if undefined.'
        try:
            return int(self.attr_value('AUTHORITY', 1))
        except (TypeError, ValueError):
            return None
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
            # Adding model 'GroupTagKey'
        db.create_table(u'tagstore_grouptagkey', (
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
        ))
        db.send_create_signal('tagstore', ['GroupTagKey'])
    
            return self.results
    
            # if we have a github organization defined, test that the current users
        # is a member of that organization.
        if data and self.GITHUB_ORGANIZATION:
            member_url = GITHUB_ORGANIZATION_MEMBER_OF_URL.format(
                org=self.GITHUB_ORGANIZATION,
                username=data.get('login')
            ) + '?' + urlencode({
                'access_token': access_token
            })
    
        complete_apps = ['social_auth']

    
    
if sys.platform.startswith('java'):
    char_state_tab_P, start_P, trans_P, emit_P = load_model()
else:
    from .char_state_tab import P as char_state_tab_P
    from .prob_start import P as start_P
    from .prob_trans import P as trans_P
    from .prob_emit import P as emit_P
    
    import jieba
import jieba.posseg
import jieba.analyse
    
    if len(sys.argv)>1:
    default_encoding = sys.argv[1]
    
    
    
    def send_image(self, fileDir=None, toUserName=None, mediaId=None, file_=None):
    logger.debug('Request to send a image(mediaId: %s) to %s: %s' % (
        mediaId, toUserName, fileDir))
    if fileDir or file_:
        if hasattr(fileDir, 'read'):
            file_, fileDir = fileDir, None
        if fileDir is None:
            fileDir = 'tmp.jpg' # specific fileDir to send gifs
    else:
        return ReturnValue({'BaseResponse': {
            'ErrMsg': 'Either fileDir or file_ should be specific',
            'Ret': -1005, }})
    if toUserName is None:
        toUserName = self.storageClass.userName
    if mediaId is None:
        r = self.upload_file(fileDir, isPicture=not fileDir[-4:] == '.gif', file_=file_)
        if r:
            mediaId = r['MediaId']
        else:
            return r
    url = '%s/webwxsendmsgimg?fun=async&f=json' % self.loginInfo['url']
    data = {
        'BaseRequest': self.loginInfo['BaseRequest'],
        'Msg': {
            'Type': 3,
            'MediaId': mediaId,
            'FromUserName': self.storageClass.userName,
            'ToUserName': toUserName,
            'LocalID': int(time.time() * 1e4),
            'ClientMsgId': int(time.time() * 1e4), },
        'Scene': 0, }
    if fileDir[-4:] == '.gif':
        url = '%s/webwxsendemoticon?fun=sys' % self.loginInfo['url']
        data['Msg']['Type'] = 47
        data['Msg']['EmojiFlag'] = 2
    headers = {
        'User-Agent': config.USER_AGENT,
        'Content-Type': 'application/json;charset=UTF-8', }
    r = self.s.post(url, headers=headers,
        data=json.dumps(data, ensure_ascii=False).encode('utf8'))
    return ReturnValue(rawResponse=r)
    
        name = key_from_req(ireq.req)
    version = next(iter(ireq.specifier._specs))._spec[1]
    extras = tuple(sorted(ireq.extras))
    return name, version, extras
    
    '''
    
    
def get_Validator_class():
    global Validator
    if 'Validator' not in globals():
        from cerberus.validator import Validator
    return Validator