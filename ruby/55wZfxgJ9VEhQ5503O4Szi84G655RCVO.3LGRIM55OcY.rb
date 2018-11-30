
        
          private
    
      def std_cmake_parameters
    '-DCMAKE_INSTALL_PREFIX='#{prefix}' -DCMAKE_BUILD_TYPE=None -DCMAKE_FIND_FRAMEWORK=LAST -Wno-dev'
  end
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
          attr_reader :key, :default, :options
    
            def lvalue(key)
          key.to_s.chomp('=').to_sym
        end
      end
    end
  end
end

    
          private
    
        puts('Packaging plugins for offline usage')
    
            return nil
      end
    end
  end
end end end

    
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
    
    describe LogStash::Config::PipelineConfig do
  let(:source) { LogStash::Config::Source::Local }
  let(:pipeline_id) { :main }
  let(:ordered_config_parts) do
    [
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/1', 0, 0, 'input { generator1 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/2', 0, 0,  'input { generator2 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/3', 0, 0, 'input { generator3 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/4', 0, 0, 'input { generator4 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/5', 0, 0, 'input { generator5 }'),
      org.logstash.common.SourceWithMetadata.new('file', '/tmp/6', 0, 0, 'input { generator6 }'),
      org.logstash.common.SourceWithMetadata.new('string', 'config_string', 0, 0, 'input { generator1 }'),
    ]
  end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
        def poster
      'poster='#{@poster}'' if @poster
    end