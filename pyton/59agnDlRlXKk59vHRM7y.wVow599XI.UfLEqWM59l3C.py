
        
        
@pytest.mark.parametrize('override, old, new', [
    ({'key': 'val'}, {}, {'key': 'val'}),
    ({'key': 'new-val'}, {'key': 'val'}, {'key': 'val'}),
    ({'key': 'new-val', 'unset': 'unset'}, {'key': 'val'}, {'key': 'val', 'unset': 'unset'})])
def test_default_settings(settings, override, old, new):
    settings.clear()
    settings.update(old)
    default_settings(override)(lambda _: _)(None)
    assert settings == new
    
    from thefuck.utils import replace_command
from thefuck.specific.archlinux import get_pkgfile, archlinux_env
    
            return [package.split()[0] for package in packages]
    except subprocess.CalledProcessError as err:
        if err.returncode == 1 and err.output == '':
            return []
        else:
            raise err
    
    install_requires = ['psutil', 'colorama', 'six', 'decorator', 'pyte']
extras_require = {':python_version<'3.4'': ['pathlib2'],
                  ':python_version<'3.3'': ['backports.shutil_get_terminal_size'],
                  ':sys_platform=='win32'': ['win_unicode_console']}
    
        def test_app_alias(self, shell):
        assert 'function fuck' in shell.app_alias('fuck')
        assert 'function FUCK' in shell.app_alias('FUCK')
        assert 'thefuck' in shell.app_alias('fuck')
        assert 'TF_SHELL=fish' in shell.app_alias('fuck')
        assert 'TF_ALIAS=fuck PYTHONIOENCODING' in shell.app_alias('fuck')
        assert 'PYTHONIOENCODING=utf-8 thefuck' in shell.app_alias('fuck')
        assert ARGUMENT_PLACEHOLDER in shell.app_alias('fuck')
    
        def app_alias(self, alias_name):
        return ('alias {0} 'setenv TF_SHELL tcsh && setenv TF_ALIAS {0} && '
                'set fucked_cmd=`history -h 2 | head -n 1` && '
                'eval `thefuck ${{fucked_cmd}}`'').format(alias_name)
    
        t = Template('Viewing {} page. With data {{ data }}.'.format(request.method))
    data = json.loads(request.body.decode('utf-8'))
    c = Context({'data': data})
    return HttpResponse(t.render(c))
    
    
checkbox = forms.CheckboxInput({'class': 'action-select'}, lambda value: False)
    
        def test_filtered_aggregate_ref_subquery_annotation(self):
        aggs = Author.objects.annotate(
            earliest_book_year=Subquery(
                Book.objects.filter(
                    contact__pk=OuterRef('pk'),
                ).order_by('pubdate').values('pubdate__year')[:1]
            ),
        ).aggregate(
            cnt=Count('pk', filter=Q(earliest_book_year=2008)),
        )
        self.assertEqual(aggs['cnt'], 2)

    
    
class PostGISOperator(SpatialOperator):
    def __init__(self, geography=False, raster=False, **kwargs):
        # Only a subset of the operators and functions are available for the
        # geography type.
        self.geography = geography
        # Only a subset of the operators and functions are available for the
        # raster type. Lookups that don't support raster will be converted to
        # polygons. If the raster argument is set to BILATERAL, then the
        # operator cannot handle mixed geom-raster lookups.
        self.raster = raster
        super().__init__(**kwargs)
    
        def get_with_params(self):
        with_params = []
        if self.gin_pending_list_limit is not None:
            with_params.append('gin_pending_list_limit = %d' % self.gin_pending_list_limit)
        if self.fastupdate is not None:
            with_params.append('fastupdate = %s' % ('on' if self.fastupdate else 'off'))
        return with_params
    
        def test_name_auto_generation(self):
        index = self.index_class(fields=['field'])
        index.set_name_with_model(CharFieldModel)
        self.assertRegex(index.name, r'postgres_te_field_[0-9a-f]{6}_%s' % self.index_class.suffix)
    
        Test classes using this mixin need to define a `work_subdir` attribute
    which designates the subdir under `tests/i18n/` that will be copied to the
    temporary tree from which its test cases will run.
    
    
class Driver(GDALBase):
    '''
    Wrap a GDAL/OGR Data Source Driver.
    For more information, see the C API source code:
    https://www.gdal.org/gdal_8h.html - https://www.gdal.org/ogr__api_8h.html
    '''
    
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
    
        return o
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
                  'Operating System :: OS Independent',