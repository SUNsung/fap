
        
            with client:
        auth.logout()
        assert 'user_id' not in session

    
    
class locked_cached_property(object):
    '''A decorator that converts a function into a lazy property.  The
    function wrapped is called the first time to retrieve the result
    and then that calculated result is used the next time you access
    the value.  Works like the one in Werkzeug but has a lock for
    thread safety.
    '''
    
    
def htmlsafe_dumps(obj, **kwargs):
    '''Works exactly like :func:`dumps` but is safe for use in ``<script>``
    tags.  It accepts the same arguments and returns a JSON string.  Note that
    this is available in templates through the ``|tojson`` filter which will
    also mark the result as safe.  Due to how this function escapes certain
    characters this is safe even if used outside of ``<script>`` tags.
    
    setup(name='thefuck',
      version=VERSION,
      description='Magnificent app which corrects your previous console command',
      long_description=long_description,
      author='Vladimir Iakovlev',
      author_email='nvbn.rm@gmail.com',
      url='https://github.com/nvbn/thefuck',
      license='MIT',
      packages=find_packages(exclude=['ez_setup', 'examples',
                                      'tests', 'tests.*', 'release']),
      include_package_data=True,
      zip_safe=False,
      install_requires=install_requires,
      extras_require=extras_require,
      entry_points={'console_scripts': [
          'thefuck = thefuck.entrypoints.main:main',
          'fuck = thefuck.entrypoints.not_configured:main']})

    
    
@pytest.fixture(autouse=True)
def functional(request):
    if request.node.get_marker('functional') \
            and not request.config.getoption('enable_functional'):
        pytest.skip('functional tests are disabled')
    
    
python_3 = (u'thefuck/python3-bash',
            u'FROM python:3',
            u'sh')
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
    
no_such_subcommand_old = '''No such subcommand
    
    from django.contrib.sites.shortcuts import get_current_site
from django.core.paginator import EmptyPage, PageNotAnInteger
from django.http import Http404
from django.template.response import TemplateResponse
from django.urls import reverse
from django.utils.http import http_date
    
            ax.set_xlabel('n_samples')
        ax.set_ylabel('n_features')
        ax.set_zlabel('Time (s)')
        ax.set_zlim3d(0.0, max_time * 1.1)
        ax.set_title(label)
        # ax.legend()
        i += 1
    plt.show()

    
    The input data is mostly low rank but is a fat infinite tail.
'''
from __future__ import print_function
    
    PROJ_NAME = 'you-get'
PACKAGE_NAME = 'you_get'
    
    _options = [
    'help',
    'version',
    'gui',
    'force',
    'playlists',
]
_short_options = 'hVgfl'
    
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
    
        sd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'sd_src_no_ratelimit:'([^']*)'', html)
    ]))
    hd_urls = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'hd_src_no_ratelimit:'([^']*)'', html)
    ]))
    urls = hd_urls if hd_urls else sd_urls
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
    for face_location in face_locations:
    
                # If a match was found in known_face_encodings, just use the first one.
            if True in matches:
                first_match_index = matches.index(True)
                name = known_face_names[first_match_index]
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
        def test_raw_face_landmarks(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        face_landmarks = api._raw_face_landmarks(img)
        example_landmark = face_landmarks[0].parts()[10]