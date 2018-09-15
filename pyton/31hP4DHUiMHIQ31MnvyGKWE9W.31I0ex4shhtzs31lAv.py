
        
        
class RFC3339FieldTest(unittest.TestCase):
    '''Tests for acme.fields.RFC3339Field.'''
    
        # Remove components from the end of file_path until it becomes valid
    while not os.path.exists(file_path):
        file_path, _, internal_path_part = file_path.rpartition('/')
        internal_path.append(internal_path_part)
    
            for path in error_files:
            # Check to see if it was an error resulting from the use of
            # the httpd lens
            lens_path = self.aug.get(path + '/lens')
            # As aug.get may return null
            if lens_path and lens in lens_path:
                msg = (
                    'There has been an error in parsing the file {0} on line {1}: '
                    '{2}'.format(
                    # Strip off /augeas/files and /error
                    path[13:len(path) - 6],
                    self.aug.get(path + '/line'),
                    self.aug.get(path + '/message')))
                raise errors.PluginError(msg)
    
        def test_revert_challenge_config(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
            for i in self.tree.iterfind('video/quality'):
            quality = i.attrib ['value']
            url = i[0].attrib['playurl']
            self.stream_types.append({'id': quality,
                                      'video_profile': i.attrib ['desp']})
            self.streams[quality] = {'url': url,
                                     'video_profile': i.attrib ['desp']}
            self.streams_sorted = [dict([('id', stream_type['id'])] + list(self.streams[stream_type['id']].items())) for stream_type in self.__class__.stream_types if stream_type['id'] in self.streams]
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        return video_dict
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
    
def write_loop_file(records_number, loop_file_path, file_name):
    with open(loop_file_path, 'a') as file:
        for i in range(records_number):
            file.write('file '{}'\n'.format(file_name))
    
    def douban_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html = get_html(url)
    
    
def fantasy_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'fantasy.tv' not in url:
        raise Exception('Wrong place!')
    
        def _forwards(self, orm):
        'Write your forwards methods here.'
        for release in RangeQuerySetWrapperWithProgressBar(
            orm.Release.objects.exclude(new_groups=0)
        ):
            projects = list(release.projects.values_list('id', flat=True))
            if len(projects) > 1:
                # do something fancy where we look at Group.first_release
                # to calculate ReleaseProject.new_group
                for p_id in projects:
                    new_groups = orm.Group.objects.filter(
                        first_release=release, project_id=p_id
                    ).count()
                    if not new_groups:
                        continue
                    orm.ReleaseProject.objects.filter(
                        release_id=release.id, project_id=p_id
                    ).update(new_groups=new_groups)
            elif len(projects) == 1:
                # copy Release.new_groups to ReleaseProject.new_group
                orm.ReleaseProject.objects.filter(
                    release_id=release.id, project_id=projects[0]
                ).update(new_groups=release.new_groups)