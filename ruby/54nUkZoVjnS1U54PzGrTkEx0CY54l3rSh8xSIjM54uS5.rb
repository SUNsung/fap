
        
            def as_json
      @pages
    end
    
        private
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
        puts('Generated at #{target_file}')
  end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end