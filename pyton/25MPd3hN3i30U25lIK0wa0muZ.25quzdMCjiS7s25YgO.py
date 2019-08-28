
        
        
class Inner4TabularInline(admin.TabularInline):
    model = Inner4Tabular
    show_change_link = True
    
        def test_template_mixin_without_template(self):
        '''
        We want to makes sure that if you use a template mixin, but forget the
        template, it still tells you it's ImproperlyConfigured instead of
        TemplateDoesNotExist.
        '''
        view = views.TemplateResponseWithoutTemplate()
        msg = (
            'TemplateResponseMixin requires either a definition of '
            ''template_name' or an implementation of 'get_template_names()''
        )
        with self.assertRaisesMessage(ImproperlyConfigured, msg):
            view.get_template_names()

    
        def as_postgresql(self, compiler, connection, **extra_context):
        # Cast FloatField to DecimalField as PostgreSQL doesn't support the
        # following function signatures:
        # - LOG(double, double)
        # - MOD(double, double)
        output_field = DecimalField(decimal_places=sys.float_info.dig, max_digits=1000)
        clone = self.copy()
        clone.set_source_expressions([
            Cast(expression, output_field) if isinstance(expression.output_field, FloatField)
            else expression for expression in self.get_source_expressions()
        ])
        return clone.as_sql(compiler, connection, **extra_context)
    
        def test_deconstruction(self):
        index = HashIndex(fields=['title'], name='test_title_hash', fillfactor=80)
        path, args, kwargs = index.deconstruct()
        self.assertEqual(path, 'django.contrib.postgres.indexes.HashIndex')
        self.assertEqual(args, ())
        self.assertEqual(kwargs, {'fields': ['title'], 'name': 'test_title_hash', 'fillfactor': 80})
    
        @property
    def fields(self):
        'Return a list of fields in the Feature.'
        return [
            force_str(
                capi.get_field_name(capi.get_field_defn(self._layer._ldefn, i)),
                self.encoding,
                strings_only=True
            ) for i in range(self.num_fields)
        ]
    
        strings = []
    with open(filepath, 'r') as f:
    
                if 'index' not in kwargs:
                self.p(stream_id)
            else:
                self.p_i(stream_id)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
    __all__ = ['dailymotion_download']
    
    
def FlagCxx14Features(filename, clean_lines, linenum, error):
  '''Flag those C++14 features that we restrict.
    
            # Adding unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.create_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
            # Changing field 'GroupTagKey.project_id'
        db.alter_column(u'tagstore_grouptagkey', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(default=0))
    
    
class OmniCompleter( Completer ):
  def __init__( self, user_options ):
    super( OmniCompleter, self ).__init__( user_options )
    self._omnifunc = None
    
    
@YouCompleteMeInstance( { 'g:ycm_cache_omnifunc': 1,
                          'g:ycm_semantic_triggers': TRIGGERS } )
def OmniCompleter_GetCompletions_Cache_ObjectList_Unicode_test( ycm ):
  def Omnifunc( findstart, base ):
    if findstart:
      return 12
    return [
      {
        'word': 'ålpha∫et',
        'abbr': 'å∫∫®',
        'menu': 'µ´~¨á',
        'info': '^~fo',
        'kind': '˚'
      },
      {
        'word': 'π†´ß†π',
        'abbr': 'ÅııÂÊ‰ÍÊ',
        'menu': '˜‰ˆËÊ‰ÍÊ',
        'info': 'ÈˆÏØÊ‰ÍÊ',
        'kind': 'Ê'
      }
    ]
    
        if compiler is not None:
      for filter_config in _ListOf( config[ filter_type ] ):
        compiledFilter = compiler( filter_config )
        filters.append( compiledFilter )
    
    
  def Start( self ):
    self._keepalive_thread.start()
    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
                if work_item.future.set_running_or_notify_cancel():
                call_queue.put(_CallItem(work_id,
                                         work_item.fn,
                                         work_item.args,
                                         work_item.kwargs),
                               block=True)
            else:
                del pending_work_items[work_id]
                continue