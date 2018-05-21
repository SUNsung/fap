
        
        from datetime import datetime
from uuid import uuid4
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name,
                                                srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
        #: When data is read or written, this is set to ``True``. Used by
    # :class:`.SecureCookieSessionInterface` to add a ``Vary: Cookie``
    #: header, which allows caching proxies to cache different pages for
    #: different users.
    accessed = False
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
    
def rmse(a, b):
    return np.sqrt(np.mean((a - b) ** 2))
    
    In the second benchmark, we increase the number of dimensions of the
training set. Then we plot the computation time as function of
the number of dimensions.
    
    # to store the results
scikit_classifier_results = []
scikit_regressor_results = []
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
        in_exercise_region = False
    
            controller.coef0 = Tk.StringVar()
        controller.coef0.set('0')
        r = Tk.Frame(valbox)
        Tk.Label(r, text='coef0:', anchor='e', width=7).pack(side=Tk.LEFT)
        Tk.Entry(r, width=6, textvariable=controller.coef0).pack(side=Tk.LEFT)
        r.pack()
        valbox.pack(side=Tk.LEFT)
    
    ax = plt.axes([0.15, 0.04, 0.7, 0.05])
plt.title('Probability')
plt.colorbar(imshow_handle, cax=ax, orientation='horizontal')
    
    Only adjusted measures can hence safely be used as a consensus index
to evaluate the average stability of clustering algorithms for a given
value of k on various overlapping sub-samples of the dataset.