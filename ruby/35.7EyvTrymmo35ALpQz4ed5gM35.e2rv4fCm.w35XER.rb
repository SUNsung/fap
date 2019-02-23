
        
          def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
      # create list of plugins to update
  def plugins_to_update(previous_gem_specs_map)
    if update_all?
      previous_gem_specs_map.values.map{|spec| spec.name}
    else
      # If the plugins isn't available in the gemspec or in 
      # the gemfile defined with a local path, we assume the plugins is not
      # installed.
      not_installed = plugins_arg.select{|plugin| !previous_gem_specs_map.has_key?(plugin.downcase) && !gemfile.find(plugin) }
      signal_error('Plugin #{not_installed.join(', ')} is not installed so it cannot be updated, aborting') unless not_installed.empty?
      plugins_arg
    end
  end
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
      end
    
      # Replaces relative urls with full urls
  def expand_urls(input, url='')
    url ||= '/'
    input.gsub /(\s+(href|src|poster)\s*=\s*['|']{1})(\/[^\/>]{1}[^\''>]*)/ do
      $1+url+$3
    end
  end
    
    module Jekyll