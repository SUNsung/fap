
        
            def setUp(self):
        BaseTestCase.setUp(self)
        self.cwd = os.getcwd()
        basetempdir = tempfile.gettempdir()
        os.chdir(basetempdir)
        self.data = b'We are the knights who say Ni!'
        self.tempdir = tempfile.mkdtemp(dir=basetempdir)
        self.tempdir_name = os.path.basename(self.tempdir)
        self.base_url = '/' + self.tempdir_name
        tempname = os.path.join(self.tempdir, 'test')
        with open(tempname, 'wb') as temp:
            temp.write(self.data)
            temp.flush()
        mtime = os.stat(tempname).st_mtime
        # compute last modification datetime for browser cache tests
        last_modif = datetime.datetime.fromtimestamp(mtime,
            datetime.timezone.utc)
        self.last_modif_datetime = last_modif.replace(microsecond=0)
        self.last_modif_header = email.utils.formatdate(
            last_modif.timestamp(), usegmt=True)
    
        def discover(self, start_dir, pattern='test*.py', top_level_dir=None):
        '''Find and return all test modules from the specified start
        directory, recursing into subdirectories to find them and return all
        tests found within them. Only test files that match the pattern will
        be loaded. (Using shell style pattern matching.)
    
        def test_additive(self):
        # Additive
        self.check_tokenize('x = 1 - y + 15 - 1 + 0x124 + z + a[5]', '''\
    NAME       'x'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    NUMBER     '1'           (1, 4) (1, 5)
    OP         '-'           (1, 6) (1, 7)
    NAME       'y'           (1, 8) (1, 9)
    OP         '+'           (1, 10) (1, 11)
    NUMBER     '15'          (1, 12) (1, 14)
    OP         '-'           (1, 15) (1, 16)
    NUMBER     '1'           (1, 17) (1, 18)
    OP         '+'           (1, 19) (1, 20)
    NUMBER     '0x124'       (1, 21) (1, 26)
    OP         '+'           (1, 27) (1, 28)
    NAME       'z'           (1, 29) (1, 30)
    OP         '+'           (1, 31) (1, 32)
    NAME       'a'           (1, 33) (1, 34)
    OP         '['           (1, 34) (1, 35)
    NUMBER     '5'           (1, 35) (1, 36)
    OP         ']'           (1, 36) (1, 37)
    ''')
    
        # Fetch the records to be pickled.
    cursor.execute('SELECT * FROM memos')
    memos = [MemoRecord(key, task) for key, task in cursor]
    # Save the records using our custom DBPickler.
    file = io.BytesIO()
    DBPickler(file).dump(memos)
    
    #
# Function used to calculate result
#