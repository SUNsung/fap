
        
            def reducer(self, key, values):
        '''Sum values for each key.
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        it = 0
    
            for i, alg in enumerate(algorithms):
            xvals = 0.1 + i * (1 + len(vals)) + np.arange(len(vals))
            width = 0.8
    
                gc.collect()
            print('benchmarking lars_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lars_path(X, y, Gram=None, max_iter=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            lars[i_f, i_s] = delta
    
        scikit_classifier_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
'''