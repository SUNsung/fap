
        
                return {
            'id': display_id,
            'display_id': display_id,
            'title': video_info['headline'],
            'thumbnail': video_info.get('thumbnail_url_hd') or video_info.get('thumbnail_url_sd'),
            'duration': parse_duration(video_info.get('segmentDur')),
            'formats': formats,
        }

    
        def report_progress(self, s):
        if s['status'] == 'finished':
            if self.params.get('noprogress', False):
                self.to_screen('[download] Download completed')
            else:
                msg_template = '100%%'
                if s.get('total_bytes') is not None:
                    s['_total_bytes_str'] = format_bytes(s['total_bytes'])
                    msg_template += ' of %(_total_bytes_str)s'
                if s.get('elapsed') is not None:
                    s['_elapsed_str'] = self.format_seconds(s['elapsed'])
                    msg_template += ' in %(_elapsed_str)s'
                self._report_progress_status(
                    msg_template % s, is_last_line=True)
    
            format_urls = []
        for mobj in re.finditer(
                r'addWebSeed\s*\(\s*(['\'])(?P<url>(?:(?!\1).)+)\1', webpage):
            format_urls.append(mobj.group('url'))
        format_urls.extend(re.findall(r'as=(https?://[^&'\']+)', webpage))
    
        _TESTS = [{
        'url': 'http://southpark.cc.com/episodios-en-espanol/s01e01-cartman-consigue-una-sonda-anal#source=351c1323-0b96-402d-a8b9-40d01b2e9bde&position=1&sort=!airdate',
        'info_dict': {
            'title': 'Cartman Consigue Una Sonda Anal',
            'description': 'Cartman Consigue Una Sonda Anal',
        },
        'playlist_count': 4,
        'skip': 'Geo-restricted',
    }]
    
        def _extract_video_info(self, content_id, site='cbs', mpx_acc=2198311517):
        items_data = self._download_xml(
            'http://can.cbs.com/thunder/player/videoPlayerService.php',
            content_id, query={'partner': site, 'contentId': content_id})
        video_data = xpath_element(items_data, './/item')
        title = xpath_text(video_data, 'videoTitle', 'title', True)
        tp_path = 'dJ5BDC/media/guid/%d/%s' % (mpx_acc, content_id)
        tp_release_url = 'http://link.theplatform.com/s/' + tp_path
    
            try:
            headers = self.geo_verification_headers()
            headers.update({
                'Content-Type': 'application/json; charset=utf-8',
            })
            video_data = self._download_json(
                'https://www.go90.com/api/view/items/' + video_id, video_id,
                headers=headers, data=b'{'client':'web','device_type':'pc'}')
        except ExtractorError as e:
            if isinstance(e.cause, compat_HTTPError) and e.cause.code == 400:
                message = self._parse_json(e.cause.read().decode(), None)['error']['message']
                if 'region unavailable' in message:
                    self.raise_geo_restricted(countries=['US'])
                raise ExtractorError(message, expected=True)
            raise
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    import rsa
import json
from binascii import hexlify
    
    import sys
import os
import textwrap
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(readme)
    
        template = template.replace('{{fileopts}}', '|'.join(fileopts))
    template = template.replace('{{diropts}}', '|'.join(diropts))
    template = template.replace('{{flags}}', ' '.join(flags))
    
    
def source_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/blob/master/' + text
    set_classes(options)
    node = nodes.reference(rawtext, text, refuri=ref, **options)
    return [node], []
    
    '''
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
        requires_project = True
    
        def syntax(self):
        return '[options] <url>'
    
        text = html.remove_tags_with_content(text, ('script', 'noscript'))
    text = html.replace_entities(text)
    text = html.remove_comments(text)
    return _ajax_crawlable_re.search(text) is not None

    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
        def process_request(self, request, spider):
        self.stats.inc_value('downloader/request_count', spider=spider)
        self.stats.inc_value('downloader/request_method_count/%s' % request.method, spider=spider)
        reqlen = len(request_httprepr(request))
        self.stats.inc_value('downloader/request_bytes', reqlen, spider=spider)
    
    import sys
import os
from unittest.mock import MagicMock
    
    # See how far apart the test image is from the known faces
face_distances = face_recognition.face_distance(known_encodings, image_to_test_encoding)
    
    2. Then, call the 'train' function with the appropriate parameters. Make sure to pass in the 'model_save_path' if you
   want to save the model to disk so you can re-use the model without having to re-train it.
    
        for file in image_files_in_folder(known_people_folder):
        basename = os.path.splitext(os.path.basename(file))[0]
        img = face_recognition.load_image_file(file)
        encodings = face_recognition.face_encodings(img)
    
            # empty numpy list
        faces_to_compare = np.array([])
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of dlib 'rect' objects of found face locations
    '''
    if model == 'cnn':
        return cnn_face_detector(img, number_of_times_to_upsample)
    else:
        return face_detector(img, number_of_times_to_upsample)
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    
        # Draw a box around the face using the Pillow module
    draw.rectangle(((left, top), (right, bottom)), outline=(0, 0, 255))
    
            def StartDoctypeDeclHandler(self, *args):
            self.out.append(('Start doctype', args))
            return 1
    
            self.assertEqual(asyncio.all_tasks(loop), set())
        self._register_task(task)
        self.assertEqual(asyncio.all_tasks(loop), set())
        with self.assertWarns(DeprecationWarning):
            self.assertEqual(asyncio.Task.all_tasks(loop), {task})
        self._unregister_task(task)
    
            # Try the 'ver' system command available on some
        # platforms
        if use_syscmd_ver:
            system, release, version = _syscmd_ver(system)
            # Normalize system to what win32_ver() normally returns
            # (_syscmd_ver() tends to return the vendor name as well)
            if system == 'Microsoft Windows':
                system = 'Windows'
            elif system == 'Microsoft' and release == 'Windows':
                # Under Windows Vista and Windows Server 2008,
                # Microsoft changed the output of the ver command. The
                # release is no longer printed.  This causes the
                # system and release to be misidentified.
                system = 'Windows'
                if '6.0' == version[:3]:
                    release = 'Vista'
                else:
                    release = ''
    
        def retrlines(self, cmd, callback = None):
        '''Retrieve data in line mode.  A new port is created for you.
    
            with self.assertRaises(TypeError) as cm:
            self.module.warn('bad warning category', NonWarningSubclass)
        self.assertIn('category must be a Warning subclass, not ',
                      str(cm.exception))
    
        def write_doc(self, docname, doctree):
        # set when any issue is encountered in this document
        self.any_issue = False
        self.docname = docname
        visitor = SuspiciousVisitor(doctree, self)
        doctree.walk(visitor)
    
    import functools as _functools
import warnings as _warnings
import io as _io
import os as _os
import shutil as _shutil
import errno as _errno
from random import Random as _Random
import sys as _sys
import weakref as _weakref
import _thread
_allocate_lock = _thread.allocate_lock