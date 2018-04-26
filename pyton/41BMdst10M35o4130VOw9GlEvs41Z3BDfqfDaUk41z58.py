
        
        
def test_installed_package_paths(limit_loader, modules_tmpdir,
                                 modules_tmpdir_prefix, purge_module,
                                 monkeypatch):
    installed_path = modules_tmpdir.mkdir('path')
    monkeypatch.syspath_prepend(installed_path)
    
        assert wsgi_errors_stream._get_current_object() is sys.stderr
    
        # Trigger caches
    fire()