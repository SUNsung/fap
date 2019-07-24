
        
        from django.contrib.auth.decorators import login_required, permission_required
from django.core import mail
from django.forms import fields
from django.forms.forms import Form, ValidationError
from django.forms.formsets import BaseFormSet, formset_factory
from django.http import (
    HttpResponse, HttpResponseBadRequest, HttpResponseNotAllowed,
    HttpResponseNotFound, HttpResponseRedirect,
)
from django.shortcuts import render
from django.template import Context, Template
from django.test import Client
from django.utils.decorators import method_decorator
    
    from django.conf import settings
from django.contrib.gis.db.backends.base.operations import (
    BaseSpatialOperations,
)
from django.contrib.gis.db.backends.utils import SpatialOperator
from django.contrib.gis.db.models import GeometryField, RasterField
from django.contrib.gis.gdal import GDALRaster
from django.contrib.gis.geos.geometry import GEOSGeometryBase
from django.contrib.gis.geos.prototypes.io import wkb_r
from django.contrib.gis.measure import Distance
from django.core.exceptions import ImproperlyConfigured
from django.db.backends.postgresql.operations import DatabaseOperations
from django.db.models import Func, Value
from django.db.utils import NotSupportedError, ProgrammingError
from django.utils.functional import cached_property
from django.utils.version import get_version_tuple
    
        def test_deconstruction(self):
        index = HashIndex(fields=['title'], name='test_title_hash', fillfactor=80)
        path, args, kwargs = index.deconstruct()
        self.assertEqual(path, 'django.contrib.postgres.indexes.HashIndex')
        self.assertEqual(args, ())
        self.assertEqual(kwargs, {'fields': ['title'], 'name': 'test_title_hash', 'fillfactor': 80})
    
        def setUp(self):
        self._cwd = os.getcwd()
        self.work_dir = tempfile.mkdtemp(prefix='i18n_')
        # Resolve symlinks, if any, in test directory paths.
        self.test_dir = os.path.realpath(os.path.join(self.work_dir, self.work_subdir))
        copytree(os.path.join(source_code_dir, self.work_subdir), self.test_dir)
        # Step out of the temporary working tree before removing it to avoid
        # deletion problems on Windows. Cleanup actions registered with
        # addCleanup() are called in reverse so preserve this ordering.
        self.addCleanup(self._rmrf, self.test_dir)
        self.addCleanup(os.chdir, self._cwd)
        os.chdir(self.test_dir)
    
        def test_multiple_dependencies(self):
        raw = [
            ('s1', ('s1_db', ['alpha'])),
            ('s2', ('s2_db', ['bravo'])),
            ('s3', ('s3_db', ['charlie'])),
            ('s4', ('s4_db', ['delta'])),
        ]
        dependencies = {
            'alpha': ['bravo', 'delta'],
            'bravo': ['charlie'],
            'delta': ['charlie'],
        }
    
     The ds_driver keyword is used internally when a ctypes pointer
 is passed in directly.
    
        @property
    def width(self):
        '''
        Width (X axis) in pixels of the band.
        '''
        return capi.get_band_xsize(self._ptr)
    
            for stream in self.stream_types:
            for i in vs:
                if self.stream_to_bid[stream['id']] == i['bid']:
                    video_links=i['fs'] #now in i['flvs'] not in i['fs']
                    if not i['fs'][0]['l'].startswith('/'):
                        tmp = getVrsEncodeCode(i['fs'][0]['l'])
                        if tmp.endswith('mp4'):
                             video_links = i['flvs']
                    self.stream_urls[stream['id']] = video_links
                    size = 0
                    for l in video_links:
                        size += l['b']
                    self.streams[stream['id']] = {'container': stream['container'], 'video_profile': stream['video_profile'], 'size' : size}
                    break
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
    site_info = 'CNTV.com'
download = cntv_download
download_playlist = playlist_not_supported('cntv')

    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
    __all__ = ['douban_download']
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
            assert result['type'] == data_entry_flow.RESULT_TYPE_CREATE_ENTRY
        assert result['title'] == '192.168.1.100'
        assert result['data'] == {
            CONF_IP_ADDRESS: '192.168.1.100',
            CONF_PASSWORD: 'password',
            CONF_PORT: 8080,
            CONF_SSL: True,
            CONF_SCAN_INTERVAL: 60,
        }
    
        All IHC devices have an associated IHC resource. IHCDevice handled the
    registration of the IHC controller callback when the IHC resource changes.
    Derived classes must implement the on_ihc_change method
    '''
    
    
async def test_if_not_fires_if_event_data_not_matches(hass, calls):
    '''Test firing of event if no match.'''
    assert await async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'trigger': {
                'platform': 'event',
                'event_type': 'test_event',
                'event_data': {'some_attr': 'some_value'}
            },
            'action': {
                'service': 'test.automation',
            }
        }
    })
    
    
async def test_if_not_fires_for_leave_on_zone_enter(hass, calls):
    '''Test for not firing on zone enter.'''
    hass.states.async_set('geo_location.entity', 'hello', {
        'latitude': 32.881011,
        'longitude': -117.234758,
        'source': 'test_source'
    })
    await hass.async_block_till_done()
    
    
async def test_if_fires_on_zone_enter(hass, calls):
    '''Test for firing on zone enter.'''
    context = Context()
    hass.states.async_set('test.entity', 'hello', {
        'latitude': 32.881011,
        'longitude': -117.234758
    })
    await hass.async_block_till_done()
    
        assert len(calls) == 1
    assert calls[0].domain == 'light'
    assert calls[0].service == 'turn_on'
    assert calls[0].data['entity_id'] == 'light.kitchen'
    assert 'confidenceScore' not in calls[0].data
    assert 'site_id' not in calls[0].data
    
    
class DeleteGroupTest(TestCase):
    def test_simple(self):
        project = self.create_project()
        group = self.create_group(
            project=project,
        )
        event = self.create_event(group=group)
        EventMapping.objects.create(
            project_id=project.id,
            event_id='a' * 32,
            group_id=group.id,
        )
        EventAttachment.objects.create(
            event_id=event.event_id,
            group_id=event.group_id,
            project_id=event.project_id,
            file=File.objects.create(
                name='hello.png',
                type='image/png',
            ),
            name='hello.png',
        )
        UserReport.objects.create(
            group_id=group.id,
            project_id=event.project_id,
            name='Jane Doe',
        )
        key = 'key'
        value = 'value'
        tk = tagstore.create_tag_key(
            project_id=project.id,
            environment_id=self.environment.id,
            key=key
        )
        tv = tagstore.create_tag_value(
            project_id=project.id,
            environment_id=self.environment.id,
            key=key,
            value=value
        )
        tagstore.create_event_tags(
            event_id=event.id,
            group_id=group.id,
            project_id=project.id,
            environment_id=self.environment.id,
            tags=[
                (tk.key, tv.value),
            ],
        )
        GroupAssignee.objects.create(
            group=group,
            project=project,
            user=self.user,
        )
        GroupHash.objects.create(
            project=project,
            group=group,
            hash=uuid4().hex,
        )
        GroupMeta.objects.create(
            group=group,
            key='foo',
            value='bar',
        )
        GroupRedirect.objects.create(
            group_id=group.id,
            previous_group_id=1,
        )
    
            # Adding unique constraint on 'TagKey', fields ['project_id', 'environment_id', 'key']
        db.create_unique(u'tagstore_tagkey', ['project_id', 'environment_id', 'key'])
    
        if not resolution_list:
        return
    
    from sentry.constants import VALID_PLATFORMS
from sentry.models import Group, Project, ProjectPlatform
from sentry.tasks.base import instrumented_task