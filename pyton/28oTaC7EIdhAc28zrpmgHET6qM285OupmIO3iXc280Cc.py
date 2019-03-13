
        
          Args:
    cm: The confusion matrix.
    labels: The class names.
  '''
  columnwidth = 10
  empty_cell = ' ' * columnwidth
  short_labels = [label[:12].rjust(10, ' ') for label in labels]
    
          x[i] = final_x
      y[i] = final_y
    
      # If there are no real or fake entries in the batch, we assign an average
  # value of zero.
  real_avg = tf.where(tf.equal(real_count, 0), zero_tensor, real_avg)
  fake_avg = tf.where(tf.equal(fake_count, 0), zero_tensor, fake_avg)
    
      # Backward Discriminator Elements.
  bw_lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/bw/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  bw_lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/bw/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  bw_lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/bw/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  bw_lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == 'dis/rnn/bw/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
          # if time > maxlen, return all true vector
      done = tf.cond(
          tf.greater(time, maximum_length),
          lambda: tf.ones([
              batch_size,], dtype=tf.bool), lambda: done)
      return (done, cell_state, next_input, cell_output, context_state)
    
        :param id: id of post to get
    :param check_author: require the current user to be the author
    :return: the post with author information
    :raise 404: if a post with the given id doesn't exist
    :raise 403: if the current user isn't the author
    '''
    post = get_db().execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' WHERE p.id = ?',
        (id,)
    ).fetchone()
    
    
def _wrap_reader_for_text(fp, encoding):
    if isinstance(fp.read(0), bytes):
        fp = io.TextIOWrapper(io.BufferedReader(fp), encoding)
    return fp
    
        return False
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
        #: The canonical way to decorate class-based views is to decorate the
    #: return value of as_view().  However since this moves parts of the
    #: logic from the class declaration to the place where it's hooked
    #: into the routing system.
    #:
    #: You can place one or more decorators in this list and whenever the
    #: view function is created the result is automatically decorated.
    #:
    #: .. versionadded:: 0.8
    decorators = ()
    
    import flask
from flask import Flask as _Flask
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True),
            schedule_expression=dict(),
            event_pattern=dict(),
            state=dict(choices=['present', 'disabled', 'absent'],
                       default='present'),
            description=dict(),
            role_arn=dict(),
            targets=dict(type='list', default=[]),
        )
    )
    module = AnsibleAWSModule(argument_spec=argument_spec)
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        state=dict(required=True, choices=['present', 'absent']),
        name=dict(required=True),
        description=dict(required=False),
        subnets=dict(required=False, type='list'),
    )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    
    try:
    from google.cloud import pubsub
    HAS_GOOGLE_CLOUD_PUBSUB = True
except ImportError as e:
    HAS_GOOGLE_CLOUD_PUBSUB = False
    
        changed = False
    if state == 'present':
        if not ipa_dnszone:
            changed = True
            if not module.check_mode:
                client.dnszone_add(zone_name=zone_name)
        else:
            changed = False
    else:
        if ipa_dnszone:
            changed = True
            if not module.check_mode:
                client.dnszone_del(zone_name=zone_name)
    
    # Copyright (c) 2016, Loic Blot <loic.blot@unix-experience.fr>
# Copyright (c) 2018, Ansible Project
# Sponsored by Infopro Digital. http://www.infopro-digital.com/
# Sponsored by E.T.A.I. http://www.etai.fr/
#
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    # Stop tracking nginx logs
- logentries:
    path: /var/log/nginx/error.log
    state: absent
'''
    
        model_handle = model.get('mh')
    model_landscape = '0x%x' % int(int(model_handle, 16) // 0x100000 * 0x100000)
    
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
    
                if stream_id not in self.streams:
                log.e('[Error] Invalid video format.')
                log.e('Run \'-i\' command with no specific video format to view all available formats.')
                exit(2)
        else:
            # Extract stream with the best quality
            stream_id = self.streams_sorted[0]['id']
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    	type, ext, size = url_info(url)
	print_info(site_info, title, type, size)
	
	if not info_only:
		download_urls([url], title, ext, size, output_dir, merge = merge)
    
    iqiyi_embed_patterns = [ 'player\.video\.qiyi\.com/([^/]+)/[^/]+/[^/]+/[^/]+\.swf[^']+tvId=(\d+)' ]
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
    args = parser.parse_args()
    
    
class ChineseTokenizer(Tokenizer):