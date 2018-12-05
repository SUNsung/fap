
        
        class Array
  def shelljoin
    CrossplatformShellwords.shelljoin(self)
  end
end
    
            allow(File).to receive(:file?).and_return(false)
        expect(File).to receive(:file?).with('#{Dir.home}/Library/Keychains/login.keychain').and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with('item.path').and_return(true)
    
    module Homebrew
  module_function
    
          clear_cache
      super(new_user, new_repo)
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
          warn_local_gems(plugins_with_path) if plugins_with_path.size > 0
    end
    update_gems!
  end
    
        after :each do
      logstash.uninstall
    end