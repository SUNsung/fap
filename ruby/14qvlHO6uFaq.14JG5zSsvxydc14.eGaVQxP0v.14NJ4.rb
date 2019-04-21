
        
          context 'every shim script' do
    it 'has valid bash syntax' do
      # These have no file extension, but can be identified by their shebang.
      (HOMEBREW_LIBRARY_PATH/'shims').find do |path|
        next if path.directory?
        next if path.symlink?
        next unless path.executable?
        next unless path.read(12) == '#!/bin/bash\n'
    
          alias react deny
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'