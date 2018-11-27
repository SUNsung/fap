
        
            elif not RESULT and ('info_dict' in test and 'age_limit' in test['info_dict'] and
                         test['info_dict']['age_limit'] == 18):
        print('\nPotential false negative: {0}'.format(test['name']))
    
        def _init_github_account(self):
        try:
            info = netrc.netrc().authenticators(self._NETRC_MACHINE)
            if info is not None:
                self._username = info[0]
                self._password = info[2]
                compat_print('Using GitHub credentials found in .netrc...')
                return
            else:
                compat_print('No GitHub credentials found in .netrc')
        except (IOError, netrc.NetrcParseError):
            compat_print('Unable to parse .netrc')
        self._username = compat_input(
            'Type your GitHub username or email address and press [Return]: ')
        self._password = compat_getpass(
            'Type your GitHub password and press [Return]: ')
    
        for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    secret_msg = b'Secret message goes here'
    
    import datetime
import io
import json
import textwrap
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
            result = get_ids({'playlist_items': '2-4'})
        self.assertEqual(result, [2, 3, 4])
    
    
def _mkdir(d):
    if not os.path.exists(d):
        os.mkdir(d)
    
                for tc_num, tc in enumerate(test_cases):
                tc_res_dict = res_dict['entries'][tc_num]
                # First, check test cases' data against extracted data alone
                expect_info_dict(self, tc_res_dict, tc.get('info_dict', {}))
                # Now, check downloaded file consistency
                tc_filename = get_tc_filename(tc)
                if not test_case.get('params', {}).get('skip_download', False):
                    self.assertTrue(os.path.exists(tc_filename), msg='Missing file ' + tc_filename)
                    self.assertTrue(tc_filename in finished_hook_called)
                    expected_minsize = tc.get('file_minsize', 10000)
                    if expected_minsize is not None:
                        if params.get('test'):
                            expected_minsize = max(expected_minsize, 10000)
                        got_fsize = os.path.getsize(tc_filename)
                        assertGreaterEqual(
                            self, got_fsize, expected_minsize,
                            'Expected %s to be at least %s, but it\'s only %s ' %
                            (tc_filename, format_bytes(expected_minsize),
                                format_bytes(got_fsize)))
                    if 'md5' in tc:
                        md5_for_file = _file_md5(tc_filename)
                        self.assertEqual(tc['md5'], md5_for_file)
                # Finally, check test cases' data again but this time against
                # extracted data from info JSON file written during processing
                info_json_fn = os.path.splitext(tc_filename)[0] + '.info.json'
                self.assertTrue(
                    os.path.exists(info_json_fn),
                    'Missing info file %s' % info_json_fn)
                with io.open(info_json_fn, encoding='utf-8') as infof:
                    info_dict = json.load(infof)
                expect_info_dict(self, info_dict, tc.get('info_dict', {}))
        finally:
            try_rm_tcs_files()
            if is_playlist and res_dict is not None and res_dict.get('entries'):
                # Remove all other files that may have been extracted if the
                # extractor returns full results even with extract_flat
                res_tcs = [{'info_dict': e} for e in res_dict['entries']]
                try_rm_tcs_files(res_tcs)
    
    from youtube_dl.utils import encodeArgument