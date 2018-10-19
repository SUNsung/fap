
        
              for n in xrange(FLAGS.number_epochs):
        print('Epoch number: %d' % n)
        # print('Percent done: %.2f' % float(n) / float(FLAGS.number_epochs))
        iterator = get_iterator(data)
        for x, y, _ in iterator:
          if FLAGS.eval_language_model:
            is_present_rate = 0.
          else:
            is_present_rate = FLAGS.is_present_rate
          tf.logging.info(
              'Evaluating on is_present_rate=%.3f.' % is_present_rate)
    
        # Maximize reward.
    gen_grads = tf.gradients(-final_gen_reward, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    maximize_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    
    
def hash_function(input_tuple):
  '''Hash function for a tuple.'''
  return hash(input_tuple)
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
        def format_headers(self, headers):
        '''Return processed `headers`
    
    
class BasicAuthPlugin(BuiltinAuthPlugin):
    
    
def test_headers_unset(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert 'Accept' in r.json['headers']  # default Accept present
    
        deadline = URLFETCH_TIMEOUT
    validate_certificate = bool(int(kwargs.get('validate', 0)))
    accept_encoding = headers.get('Accept-Encoding', '')
    errors = []
    for i in xrange(int(kwargs.get('fetchmax', URLFETCH_MAX))):
        try:
            response = urlfetch.fetch(url, payload, fetchmethod, headers, allow_truncated=False, follow_redirects=False, deadline=deadline, validate_certificate=validate_certificate)
            break
        except apiproxy_errors.OverQuotaError as e:
            time.sleep(5)
        except urlfetch.DeadlineExceededError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DeadlineExceededError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.DownloadError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            logging.error('DownloadError(deadline=%s, url=%r)', deadline, url)
            time.sleep(1)
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.ResponseTooLargeError as e:
            errors.append('%r, deadline=%s' % (e, deadline))
            response = e.response
            logging.error('ResponseTooLargeError(deadline=%s, url=%r) response(%r)', deadline, url, response)
            m = re.search(r'=\s*(\d+)-', headers.get('Range') or headers.get('range') or '')
            if m is None:
                headers['Range'] = 'bytes=0-%d' % int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE))
            else:
                headers.pop('Range', '')
                headers.pop('range', '')
                start = int(m.group(1))
                headers['Range'] = 'bytes=%s-%d' % (start, start+int(kwargs.get('fetchmaxsize', URLFETCH_MAXSIZE)))
            deadline = URLFETCH_TIMEOUT * 2
        except urlfetch.SSLCertificateError as e:
            errors.append('%r, should validate=0 ?' % e)
            logging.error('%r, deadline=%s', e, deadline)
        except Exception as e:
            errors.append(str(e))
            if i == 0 and method == 'GET':
                deadline = URLFETCH_TIMEOUT * 2
    else:
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        error_string = '<br />\n'.join(errors)
        if not error_string:
            logurl = 'https://appengine.google.com/logs?&app_id=%s' % os.environ['APPLICATION_ID']
            error_string = 'Internal Server Error. <p/>try <a href='javascript:window.location.reload(true);'>refresh</a> or goto <a href='%s' target='_blank'>appengine.google.com</a> for details' % logurl
        yield message_html('502 Urlfetch Error', 'Python Urlfetch Error: %r' % method,  error_string)
        raise StopIteration
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
        :param bool condition: If ``False``, the test will be skipped
    :param str reason: the reason for skipping the test
    
    
from certbot import errors
from certbot.plugins import common
    
            self.assertFalse(self.addr_defined.conflicts(self.addr1))
        self.assertFalse(self.addr_defined.conflicts(self.addr2))
        self.assertFalse(self.addr_defined.conflicts(self.addr))
        self.assertFalse(self.addr_defined.conflicts(self.addr_default))
    
        #call extractor decided by sourceId
    if sourceType == 'sina':
        sina_download_by_vid(sourceId, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'youku':
        youku_download_by_vid(sourceId, title=title, output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    elif sourceType == 'tudou':
        tudou_download_by_iid(sourceId, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'qq':
        qq_download_by_vid(sourceId, title, True, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'letv':
        letvcloud_download_by_vu(sourceId, '2d8c027396', title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif sourceType == 'zhuzhan':
        #As in Jul.28.2016, Acfun is using embsig to anti hotlink so we need to pass this
#In Mar. 2017 there is a dedicated ``acfun_proxy'' in youku cloud player
#old code removed
        url = 'http://www.acfun.cn/v/ac' + vid
        yk_streams = youku_acfun_proxy(info['sourceId'], info['encode'], url)
        seq = ['mp4hd3', 'mp4hd2', 'mp4hd', 'flvhd']
        for t in seq:
            if yk_streams.get(t):
                preferred = yk_streams[t]
                break
#total_size in the json could be incorrect(F.I. 0)
        size = 0
        for url in preferred[0]:
            _, _, seg_size = url_info(url)
            size += seg_size
#fallback to flvhd is not quite possible
        print_info(site_info, title, 'mp4', size)
        if not info_only:
            download_urls(preferred[0], title, 'mp4', size, output_dir=output_dir, merge=merge)
    else:
        raise NotImplementedError(sourceType)
    
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
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
    __all__ = ['facebook_download']
    
        title = match1(html, r'&title=([^&]+)')