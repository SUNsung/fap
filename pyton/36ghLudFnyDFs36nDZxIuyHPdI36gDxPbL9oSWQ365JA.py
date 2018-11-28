
        
        HSTS_ARGS = ['\'max-age=31536000\'', ' ', 'always']
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
        def same_server(self, vhost, generic=False):
        '''Determines if the vhost is the same 'server'.
    
        def tearDown(self):
        shutil.rmtree(self.config_dir)
        shutil.rmtree(self.work_dir)
        shutil.rmtree(self.temp_dir)
    
        @certbot_util.patch_get_utility()
    def test_more_info_cancel(self, mock_util):
        mock_util().menu.side_effect = [
            (display_util.CANCEL, -1),
        ]
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_get_addrs_default(self):
        self.sni.configurator.choose_vhost = mock.Mock(
            return_value=obj.VirtualHost(
                'path', 'aug_path',
                set([obj.Addr.fromstring('_default_:443')]),
                False, False)
        )