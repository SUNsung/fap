
        
        def giphy_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
        stream_id_pattern = r'id='html_stream' value='(\w+)''
    stream_id = match1(html, stream_id_pattern)
    
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
    
            else:
            # gallery image
            content = get_content(self.url)
            image = json.loads(match1(content, r'image\s*:\s*({.*}),'))
            ext = image['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (image['hash'], ext)],
                    'size': image['size'],
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (image['hash'], '.jpg')],
                    'container': 'jpg'
                }
            }
            self.title = image['title'] or image['hash']
    
            # Adding model 'GroupTagKey'
        db.create_table(u'tagstore_grouptagkey', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
        ))
        db.send_create_signal('tagstore', ['GroupTagKey'])
    
            # Changing field 'GroupTagValue.group_id'
        db.alter_column(u'tagstore_grouptagvalue', 'group_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
            # Adding unique constraint on 'UserSocialAuth', fields ['provider', 'uid']
        db.create_unique('social_auth_usersocialauth', ['provider', 'uid'])
    
    
cdef const char** CBeginPtr(vector[const char*]& vec):
    if (vec.size() != 0):
        return &vec[0]
    else:
        return NULL
    
    
def test_incomplete_infer_convolution():
    a = mx.sym.Variable('a', shape=(0, 10, 0, 0))
    b = mx.sym.Convolution(data=a, num_filter=21, kernel=(3, 3), dilate=(1, 1), pad=(1, 1))
    c = mx.sym.Variable('c', shape=(5, 21, 32, 32))
    d = b + c
    arg_shapes, _, _ = d.infer_shape()
    arg_names = d.list_arguments()
    arg_shapes = {k: v for k, v in zip(arg_names, arg_shapes)}
    assert arg_shapes['a'] == (5, 10, 32, 32)
    
            str_list = []
        for index in range(self.num_images):
            progress_bar(index, self.num_images)
            label = self.label_from_index(index)
            if label.size < 1:
                continue
            path = self.image_path_from_index(index)
            if root:
                path = osp.relpath(path, root)
            str_list.append('\t'.join([str(index), str(2), str(label.shape[1])] \
              + ['{0:.4f}'.format(x) for x in label.ravel()] + [path,]) + '\n')
        if str_list:
            if shuffle:
                import random
                random.shuffle(str_list)
            if not fname:
                fname = self.name + '.lst'
            with open(fname, 'w') as f:
                for line in str_list:
                    f.write(line)
        else:
            raise RuntimeError('No image in imdb')
    
    def parse_frame_resize(x):
    if not x:
        return x
    x = list(map(float, x.strip().split(',')))
    assert len(x) >= 1 and len(x) <= 2, 'frame_resize should be a float scaling factor or a tuple of w,h pixels'
    if len(x) == 1:
        x = x[0]
    return x
    
        from caffe.proto import caffe_pb2
    from google.protobuf import text_format
    from collections import OrderedDict
    
    
def main():
    parser = argparse.ArgumentParser(description='Caffe prototxt to mxnet model parameter converter.\
                    Note that only basic functions are implemented. You are welcomed to contribute to this file.')
    parser.add_argument('mean_image_proto', help='The protobuf file in Caffe format')
    parser.add_argument('save_name', help='The name of the output file prefix')
    args = parser.parse_args()
    nd = protoBlobFileToND(args.mean_image_proto)
    mx.nd.save(args.save_name + '.nd', {'mean_image': nd})
    
        Returns:
    ----------
    Imdb
    '''
    image_set = [y.strip() for y in image_set.split(',')]
    assert image_set, 'No image_set specified'
    year = [y.strip() for y in year.split(',')]
    assert year, 'No year specified'
    
        def put_point(self, col, row, char=None, color=None, background=None):
        '''
        Puts character with color and background color on the field.
        Char can be a Point or a character.
        '''
    
    def _sanitize_dirnames(filename, restore=False):
    '''
    Remove (or add) leading _ in the directories names in `filename`
    The `restore` param means that the path name should be restored from the queryname,
    i.e. conversion should be done in the opposite direction
    '''
    parts = filename.split('/')
    newparts = []
    for part in parts[:-1]:
        if restore:
            newparts.append('_'+part)
            continue
        if part.startswith('_'):
            newparts.append(part[1:])
        else:
            newparts.append(part)
    newparts.append(parts[-1])
    
        path.internal.bin.upstream
'''
    
            # this part should be generalized
        # currently we just remove the name of the adapter from the path
        if topic == self.__section_name:
            return self._starting_page(topic)
    
        answers = [
        postprocessing.postprocess(
            answer, keyword, search_options, request_options=request_options)
        for answer in answers
    ]
    
            if len(answers_found) > CONFIG['search.limit']:
            answers_found.append(
                _limited_entry()
            )
            break