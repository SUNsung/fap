
        
                # Use the commands:
        #     route -n get 8.8.8.8                            -> Google public DNS
        #     route -n get -inet6 2404:6800:400a:800::1012    -> ipv6.google.com
        # to find out the default outgoing interface, address, and gateway
    
    # Copyright (c) 2015 Hewlett-Packard Development Company, L.P.
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
    - name: load new acl into device
  aruba_config:
    lines:
      - permit host 10.10.10.10
      - ipv6 permit host fda9:97d6:32a3:3e59::3333
    parents: ip access-list standard 1
    before: no ip access-list standard 1
    match: exact
    
    RETURN = '''
updates:
  description: The set of commands that will be pushed to the remote device
  returned: Only when lines is specified.
  type: list
  sample: ['...', '...']
backup_path:
  description: The full path to the backup file
  returned: when backup is yes
  type: str
  sample: /playbooks/ansible/backup/enos01.2016-07-16@22:28:34
'''
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.network.enos.enos import load_config, get_config
from ansible.module_utils.network.enos.enos import enos_argument_spec
from ansible.module_utils.network.enos.enos import check_args
from ansible.module_utils.network.common.config import NetworkConfig, dumps
    
    
def imread(name, flatten=False, mode=None):
    '''
    Read an image from a file as an array.
    
        accept_sparse : boolean, optional
        Indicate that func accepts a sparse matrix as input. If validate is
        False, this has no effect. Otherwise, if accept_sparse is false,
        sparse matrix inputs will cause an exception to be raised.
    
            plot_batch_times(all_times, n_components, batch_sizes, data)
        plot_batch_errors(all_errors, n_components, batch_sizes, data)
    
        xx = np.arange(start_dim, start_dim + n * step, step)
    plt.subplot(212)
    plt.title('Learning in high dimensional spaces')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of dimensions')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    X_restored = agglo.inverse_transform(X_reduced)
images_restored = np.reshape(X_restored, images.shape)
plt.figure(1, figsize=(4, 3.5))
plt.clf()
plt.subplots_adjust(left=.01, right=.99, bottom=.01, top=.91)
for i in range(4):
    plt.subplot(3, 4, i + 1)
    plt.imshow(images[i], cmap=plt.cm.gray, vmax=16, interpolation='nearest')
    plt.xticks(())
    plt.yticks(())
    if i == 1:
        plt.title('Original data')
    plt.subplot(3, 4, 4 + i + 1)
    plt.imshow(images_restored[i], cmap=plt.cm.gray, vmax=16,
               interpolation='nearest')
    if i == 1:
        plt.title('Agglomerated data')
    plt.xticks(())
    plt.yticks(())
    
    
def IsDecltype(clean_lines, linenum, column):
  '''Check if the token ending on (linenum, column) is decltype().
    
        What it should do it take a markdown file, and split it into more files. A targetfile should have the same
    number of lines as the original, with source code snippets and markdown non-words removed, for spell-checking.
    
    
def rdiv(left, right):
    return right / left
    
            path = os.path.join(HERE, 'data', 'does_not_exist.' + fn_ext)
        msg1 = r'File (b')?.+does_not_exist\.{}'? does not exist'.format(fn_ext)
        msg2 = (
            r'\[Errno 2\] No such file or directory: '.+does_not_exist' r'\.{}''
        ).format(fn_ext)
        msg3 = 'Expected object or value'
        msg4 = 'path_or_buf needs to be a string file path or file-like'
        msg5 = (
            r'\[Errno 2\] File .+does_not_exist\.{} does not exist:'
            r' '.+does_not_exist\.{}''
        ).format(fn_ext, fn_ext)
        with pytest.raises(
            error_class, match=r'({}|{}|{}|{}|{})'.format(msg1, msg2, msg3, msg4, msg5)
        ):
            reader(path)
    
    
@pytest.mark.parametrize(
    'indexer', [lambda s: s[2000, 3, 10], lambda s: s.loc[2000, 3, 10]]
)
def test_series_getitem_returns_scalar(
    multiindex_year_month_day_dataframe_random_data, indexer
):
    s = multiindex_year_month_day_dataframe_random_data['A']
    expected = s.iloc[49]
    
            df = pd.DataFrame(
            {
                'strings': pd.Series(
                    tm.makeStringIndex(10000).take(np.random.randint(0, 10000, size=N))
                ),
                'floats': np.random.randn(N),
                'ints': np.arange(N),
                'dates': pd.date_range('20110101', freq='s', periods=N),
                'timedeltas': pd.timedelta_range('1 day', freq='s', periods=N),
            }
        )
        df['categories'] = df['strings'].astype('category')
        df.iloc[10:20] = np.nan
        return df