
        
        
def mass_mail_sending_view(request):
    m1 = mail.EmailMessage(
        'First Test message',
        'This is the first test email',
        'from@example.com',
        ['first@example.com', 'second@example.com'])
    m2 = mail.EmailMessage(
        'Second Test message',
        'This is the second test email',
        'from@example.com',
        ['second@example.com', 'third@example.com'])
    
        def get_by_natural_key(self, codename, app_label, model):
        return self.get(
            codename=codename,
            content_type=ContentType.objects.db_manager(self.db).get_by_natural_key(app_label, model),
        )
    
        def as_postgresql(self, compiler, connection, **extra_context):
        # Cast FloatField to DecimalField as PostgreSQL doesn't support the
        # following function signatures:
        # - LOG(double, double)
        # - MOD(double, double)
        output_field = DecimalField(decimal_places=sys.float_info.dig, max_digits=1000)
        clone = self.copy()
        clone.set_source_expressions([
            Cast(expression, output_field) if isinstance(expression.output_field, FloatField)
            else expression for expression in self.get_source_expressions()
        ])
        return clone.as_sql(compiler, connection, **extra_context)
    
    
def method_decorator(decorator, name=''):
    '''
    Convert a function decorator into a method decorator
    '''
    # 'obj' can be a class or a function. If 'obj' is a function at the time it
    # is passed to _dec,  it will eventually be a method of the class it is
    # defined on. If 'obj' is a class, the 'name' is required to be the name
    # of the method that will be decorated.
    def _dec(obj):
        if not isinstance(obj, type):
            return _multi_decorate(decorator, obj)
        if not (name and hasattr(obj, name)):
            raise ValueError(
                'The keyword argument `name` must be the name of a method '
                'of the decorated class: %s. Got '%s' instead.' % (obj, name)
            )
        method = getattr(obj, name)
        if not callable(method):
            raise TypeError(
                'Cannot decorate '%s' as it isn't a callable attribute of '
                '%s (%s).' % (name, obj, method)
            )
        _wrapper = _multi_decorate(decorator, method)
        setattr(obj, name, _wrapper)
        return obj
    
            if isinstance(ds_input, str):
            # The data source driver is a void pointer.
            ds_driver = Driver.ptr_type()
            try:
                # OGROpen will auto-detect the data source type.
                ds = capi.open_ds(force_bytes(ds_input), self._write, byref(ds_driver))
            except GDALException:
                # Making the error message more clear rather than something
                # like 'Invalid pointer returned from OGROpen'.
                raise GDALException('Could not open the datasource at '%s'' % ds_input)
        elif isinstance(ds_input, self.ptr_type) and isinstance(ds_driver, Driver.ptr_type):
            ds = ds_input
        else:
            raise GDALException('Invalid data source input type: %s' % type(ds_input))
    
            if 'name' not in ds_input:
            ds_input['name'] = self.name + '_copy.' + self.driver.name
    
    
class TestCaseInsensitiveDict:
    
    import json
import platform
import sys
import ssl
    
    # TODO: response is the only one
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
    from collections import OrderedDict
    
            # Nottin' on you.
        body = None
        content_type = None
    
    from codecs import open
    
    
class CliffWalkingEnv(discrete.DiscreteEnv):
    '''
    This is a simple implementation of the Gridworld Cliff
    reinforcement learning task.
    
        The episode terminates after the agent guesses within 1% of the target or
    200 steps have been taken
    
    
class MultiDiscrete(Space):
    '''
    - The multi-discrete action space consists of a series of discrete action spaces with different number of actions in eachs
    - It is useful to represent game controllers or keyboards where each key can be represented as a discrete action space
    - It is parametrized by passing an array of positive integers specifying number of actions for each discrete action space
    
    bogus_mnist = \
[[
' **** ',
'*    *',
'*    *',
'*    *',
'*    *',
' **** '
], [
'  **  ',
' * *  ',
'   *  ',
'   *  ',
'   *  ',
'  *** '
], [
' **** ',
'*    *',
'     *',
'  *** ',
'**    ',
'******'
], [
' **** ',
'*    *',
'   ** ',
'     *',
'*    *',
' **** '
], [
' *  * ',
' *  * ',
' *  * ',
' **** ',
'    * ',
'    * '
], [
' **** ',
' *    ',
' **** ',
'    * ',
'    * ',
' **** '
], [
'  *** ',
' *    ',
' **** ',
' *  * ',
' *  * ',
' **** '
], [
' **** ',
'    * ',
'   *  ',
'   *  ',
'  *   ',
'  *   '
], [
' **** ',
'*    *',
' **** ',
'*    *',
'*    *',
' **** '
], [
' **** ',
'*    *',
'*    *',
' *****',
'     *',
' **** '
]]
    
    
def batch_iter(data, batch_size, num_epochs):
    '''
    Generates a batch iterator for a dataset.
    '''
    data = np.array(data)
    data_size = len(data)
    num_batches_per_epoch = int(len(data)/batch_size) + 1
    for epoch in range(num_epochs):
        # Shuffle the data at each epoch
        shuffle_indices = np.random.permutation(np.arange(data_size))
        shuffled_data = data[shuffle_indices]
        for batch_num in range(num_batches_per_epoch):
            start_index = batch_num * batch_size
            end_index = min((batch_num + 1) * batch_size, data_size)
            yield shuffled_data[start_index:end_index]
    
    components, updates = theano.scan(fn=step,
                                  sequences=[coefficients, full_range],
                                  outputs_info=outputs_info,
                                  non_sequences=x)
    
            # Use a lambda to delay the calling of clean_date_time_zone so that
        # assertRaises has enough time to handle it properly
        self.assertRaises(ValueError,
            lambda: self.mr_job.clean_date_time_zone(
                self.DATE_TIME_ZONE_INVALID))
    
    

    
                # plot new centers if third frame
            if frame % 3 == 2:
                for i in range(n_clusters):
                    plt.annotate('', centers[i], old_centers[i], 
                                 arrowprops=dict(arrowstyle='->', linewidth=1))
                plt.scatter(centers[:, 0], centers[:, 1], marker='o',
                            c=np.arange(n_clusters),
                            s=200, cmap='rainbow')
                plt.scatter(centers[:, 0], centers[:, 1], marker='o',
                            c='black', s=50)