
        
        
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
    # TODO: ensure that history changes.

    
    no_match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Get:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease [89.2 kB]
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Get:4 http://security.ubuntu.com/ubuntu zesty-security InRelease [89.2 kB]
Hit:5 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Hit:6 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:7 https://download.docker.com/linux/ubuntu zesty InRelease
Get:8 http://us.archive.ubuntu.com/ubuntu zesty-updates/main i386 Packages [232 kB]
Get:9 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 Packages [235 kB]
Get:10 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 DEP-11 Metadata [55.2 kB]
Get:11 http://us.archive.ubuntu.com/ubuntu zesty-updates/main DEP-11 64x64 Icons [32.3 kB]
Get:12 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 Packages [156 kB]
Get:13 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe i386 Packages [156 kB]
Get:14 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 DEP-11 Metadata [175 kB]
Get:15 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe DEP-11 64x64 Icons [253 kB]
Get:16 http://us.archive.ubuntu.com/ubuntu zesty-updates/multiverse amd64 DEP-11 Metadata [5,840 B]
Get:17 http://us.archive.ubuntu.com/ubuntu zesty-backports/universe amd64 DEP-11 Metadata [4,588 B]
Get:18 http://security.ubuntu.com/ubuntu zesty-security/main amd64 DEP-11 Metadata [12.7 kB]
Get:19 http://security.ubuntu.com/ubuntu zesty-security/main DEP-11 64x64 Icons [17.6 kB]
Get:20 http://security.ubuntu.com/ubuntu zesty-security/universe amd64 DEP-11 Metadata [21.6 kB]
Get:21 http://security.ubuntu.com/ubuntu zesty-security/universe DEP-11 64x64 Icons [47.7 kB]
Get:22 http://security.ubuntu.com/ubuntu zesty-security/multiverse amd64 DEP-11 Metadata [208 B]
Fetched 1,673 kB in 0s (1,716 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
All packages are up to date.
'''
    
    
Invalid choice: 'dynamdb', maybe you meant:
    
    import requests
from requests.adapters import HTTPAdapter
from requests.structures import CaseInsensitiveDict
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
            spider_loader = self.crawler_process.spider_loader
    
        def __init__(self, json_name, value):
        self.value = value
        super(Fixed, self).__init__(
            json_name=json_name, default=value, omitempty=False)
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        def test_bad_save_finalize_checkpoint(self):
        self.config.reverter.finalize_checkpoint = mock.Mock(
            side_effect=errors.ReverterError)
        self.config.parser.add_dir(
            self.vh_truth[0].path, 'Test', 'bad_save_ckpt')
        self.assertRaises(errors.PluginError, self.config.save, 'Title')
    
    import mock
    
            # Check to make sure challenge config path is included in apache config
        self.assertEqual(
            len(self.sni.configurator.parser.find_dir(
                'Include', self.sni.challenge_conf)), 1)
        self.assertEqual(len(responses), 1)
        self.assertEqual(responses[0], response)
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    yinyuetai_embed_patterns = [ 'player\.yinyuetai\.com/video/swf/(\d+)' ]