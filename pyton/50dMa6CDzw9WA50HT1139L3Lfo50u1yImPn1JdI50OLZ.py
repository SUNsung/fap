
        
            OPERATOR = 0
    SUPERVISOR = 1
    DIRECTOR = 2
    
            The shuffle/sort step of MapReduce will then do a
        distributed sort on the keys, resulting in:
    
    
class HashTable(object):
    
            # Adding unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.create_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key', 'value'])
    
        def backwards(self, orm):
        # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
        for resolution in resolution_list:
        try:
            activity = Activity.objects.filter(
                group=resolution.group_id,
                type=Activity.SET_RESOLVED_IN_RELEASE,
                ident=resolution.id,
            ).order_by('-datetime')[0]
        except IndexError:
            continue
    
    from sentry.models import Option
from sentry.options import default_manager
from sentry.options.manager import UnknownOption
from sentry.tasks.base import instrumented_task
    
    from __future__ import absolute_import
    
            for job in job_list:
            logger.debug('Sending scheduled job %s with payload %r', job.name, job.payload)
            app.send_task(job.name, kwargs=job.payload)
            job.delete()

    
        To extract all the way down to the ndarray, pass ``extract_numpy=True``.
    
        def time_add_overflow_arr_mask_nan(self):
        checked_add_with_arr(self.arr, self.arr_mixed, arr_mask=self.arr_nan_1)
    
        def time_series_constructor(self, data_fmt, with_index, dtype):
        Series(self.data, index=self.index)
    
    def _prepare_file(fileDir, file_=None):
    fileDict = {}
    if file_:
        if hasattr(file_, 'read'):
            file_ = file_.read()
        else:
            return ReturnValue({'BaseResponse': {
                'ErrMsg': 'file_ param should be opened file',
                'Ret': -1005, }})
    else:
        if not utils.check_file(fileDir):
            return ReturnValue({'BaseResponse': {
                'ErrMsg': 'No file found in specific dir',
                'Ret': -1002, }})
        with open(fileDir, 'rb') as f:
            file_ = f.read()
    fileDict['fileSize'] = len(file_)
    fileDict['fileMd5'] = hashlib.md5(file_).hexdigest()
    fileDict['file_'] = io.BytesIO(file_)
    return fileDict
    
    from mitmproxy import log
from mitmproxy import ctx
    
        def send(self, message):
        if isinstance(message, list):
            message = b''.join(message)
        self.wfile.write(message)
        self.wfile.flush()
    
        class ImageData(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.lzw_min_code_size = self._io.read_u1()
            self.subblocks = self._root.Subblocks(self._io, self, self._root)
    
        '''
    Return true if the continuation bit is set in the byte
    '''
    def checkContinuationBit(self, byteval):
        continuationBitmask = 0x80
        return (continuationBitmask & byteval) != 0
    
        def take(self):
        '''
        Scripts or other parties make 'take' a reply out of a normal flow.
        For example, intercepted flows are taken out so that the connection thread does not proceed.
        '''
        if self.state != 'start':
            raise exceptions.ControlException(
                'Reply is {}, but expected it to be start.'.format(self.state)
            )
        self._state = 'taken'
    
    '''
import unittest