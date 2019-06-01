
        
            # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    from keras.models import Sequential, Model
from keras.layers import Dense, Input, Average
from keras.utils import np_utils
from keras.utils import test_utils
from keras import regularizers
from keras import backend as K
    
    
def normalize(x, axis=-1, order=2):
    '''Normalizes a Numpy array.
    
             try:
             parallel_model = multi_gpu_model(model, cpu_relocation=True)
             print('Training using multiple GPUs..')
         except ValueError:
             parallel_model = model
             print('Training using single GPU or CPU..')
         parallel_model.compile(..)
         ..
    ```
    
    
batch_size = 128
buffer_size = 10000
steps_per_epoch = int(np.ceil(60000 / float(batch_size)))  # = 469
epochs = 5
num_classes = 10
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_data=(x_test, y_test))
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])

    
    
def multi_dense(x, n_unit_ls, act_fn=relu, name=None):
    '''多层全连接
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_unit_list[-1]]
    
        Args:
        x:
        c_embed_size:
        share_cnn_weights:
        name:
        reuse:
    
        Examples:
        l2_regularizer = l2(0.01)
        tf.get_variable(..., regularizer=l2_regularizer, ...)
    '''
    
      Args:
    filename: Filename of the file that is being processed.
    file_extension: The extension (dot not included) of the file.
    clean_lines: An array of strings, each representing a line of the file,
                 with comments stripped.
    line: Number of line being processed.
    include_state: An _IncludeState instance in which the headers are inserted.
    function_state: A _FunctionState instance which counts function lines, etc.
    nesting_state: A NestingState instance which maintains information about
                   the current stack of nested blocks being parsed.
    error: A callable to which errors are reported, which takes 4 arguments:
           filename, line number, error level, and message
    extra_check_functions: An array of additional check functions that will be
                           run on each source line. Each function takes 4
                           arguments: filename, clean_lines, line, error
  '''
  raw_lines = clean_lines.raw_lines
  ParseNolintSuppressions(filename, raw_lines[line], line, error)
  nesting_state.Update(filename, clean_lines, line, error)
  CheckForNamespaceIndentation(filename, nesting_state, clean_lines, line,
                               error)
  if nesting_state.InAsmBlock(): return
  CheckForFunctionLengths(filename, clean_lines, line, function_state, error)
  CheckForMultilineCommentsAndStrings(filename, clean_lines, line, error)
  CheckStyle(filename, clean_lines, line, file_extension, nesting_state, error)
  CheckLanguage(filename, clean_lines, line, file_extension, include_state,
                nesting_state, error)
  CheckForNonConstReference(filename, clean_lines, line, nesting_state, error)
  CheckForNonStandardConstructs(filename, clean_lines, line,
                                nesting_state, error)
  CheckVlogArguments(filename, clean_lines, line, error)
  CheckPosixThreading(filename, clean_lines, line, error)
  CheckInvalidIncrement(filename, clean_lines, line, error)
  CheckMakePairUsesDeduction(filename, clean_lines, line, error)
  CheckRedundantVirtual(filename, clean_lines, line, error)
  CheckRedundantOverrideOrFinal(filename, clean_lines, line, error)
  if extra_check_functions:
    for check_fn in extra_check_functions:
      check_fn(filename, clean_lines, line, error)
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
    
            # Removing unique constraint on 'GroupTagKey', fields ['project_id', 'group_id', '_key']
        db.delete_unique(u'tagstore_grouptagkey', ['project_id', 'group_id', 'key_id'])
    
            # Adding unique constraint on 'EventTag', fields ['project_id', 'event_id', 'key', 'value']
        db.create_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
        This is currenlty only used for ``in_next_release`` resolutions.
    '''
    try:
        release = Release.objects.get_from_cache(
            id=release_id,
        )
    except Release.DoesNotExist:
        return
    
            for platform, project_id in queryset:
            platform = platform.lower()
            if platform not in VALID_PLATFORMS:
                continue
            ProjectPlatform.objects.create_or_update(
                project_id=project_id,
                platform=platform,
                values={
                    'last_seen': now,
                },
            )
        min_project_id += step