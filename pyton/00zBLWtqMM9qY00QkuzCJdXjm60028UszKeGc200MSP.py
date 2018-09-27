
        
                        elif char in '=!<':
                    # lookahead assertions
                    dir = 1
                    if char == '<':
                        char = sourceget()
                        if char is None:
                            raise source.error('unexpected end of pattern')
                        if char not in '=!':
                            raise source.error('unknown extension ?<' + char,
                                               len(char) + 2)
                        dir = -1 # lookbehind
                        lookbehindgroups = state.lookbehindgroups
                        if lookbehindgroups is None:
                            state.lookbehindgroups = state.groups
                    p = _parse_sub(source, state, verbose, nested + 1)
                    if dir < 0:
                        if lookbehindgroups is None:
                            state.lookbehindgroups = None
                    if not sourcematch(')'):
                        raise source.error('missing ), unterminated subpattern',
                                           source.tell() - start)
                    if char == '=':
                        subpatternappend((ASSERT, (dir, p)))
                    else:
                        subpatternappend((ASSERT_NOT, (dir, p)))
                    continue
    
        def test_write_non_pyfile(self):
        with TemporaryFile() as t, zipfile.PyZipFile(t, 'w') as zipfp:
            with open(TESTFN, 'w') as f:
                f.write('most definitely not a python file')
            self.assertRaises(RuntimeError, zipfp.writepy, TESTFN)
            unlink(TESTFN)
    
        If we give any reporting options when we set up the tests,
    however:
    
    
# Return the longest prefix of all list elements.
def commonprefix(m):
    'Given a list of pathnames, returns the longest common leading component'
    if not m: return ''
    # Some people pass in a list of pathname parts to operate in an OS-agnostic
    # fashion; don't try to translate in that case as that's an abuse of the
    # API and they are already doing what they need to be OS-agnostic and so
    # they most likely won't be using an os.PathLike object in the sublists.
    if not isinstance(m[0], (list, tuple)):
        m = tuple(map(os.fspath, m))
    s1 = min(m)
    s2 = max(m)
    for i, c in enumerate(s1):
        if c != s2[i]:
            return s1[:i]
    return s1
    
        def test_formats(self):
        # let's create a command and make sure
        # we can set the format
        dist = self.create_dist()[1]
        cmd = bdist(dist)
        cmd.formats = ['msi']
        cmd.ensure_finalized()
        self.assertEqual(cmd.formats, ['msi'])
    
    @unittest.skipIf(getattr(bdist_wininst, '_unsupported', False),
    'bdist_wininst is not supported in this install')
class BuildWinInstTestCase(support.TempdirManager,
                           support.LoggingSilencer,
                           unittest.TestCase):
    
        def test_addsitedir(self):
        # Same tests for test_addpackage since addsitedir() essentially just
        # calls addpackage() for every .pth file in the directory
        pth_file = PthFile()
        pth_file.cleanup(prep=True) # Make sure that nothing is pre-existing
                                    # that is tested for
        try:
            pth_file.create()
            site.addsitedir(pth_file.base_dir, set())
            self.pth_file_tests(pth_file)
        finally:
            pth_file.cleanup()