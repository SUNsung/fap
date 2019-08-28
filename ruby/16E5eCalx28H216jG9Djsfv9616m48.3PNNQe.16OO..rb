
        
        gemfile(true) do
  source 'https://rubygems.org'
    
        it 'escapes double quotes properly for module map contents' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:umbrella_header_path).returns(Pathname.new('BananaLibWith'Quotes'-umbrella.h'))
      @pod_target.stubs(:build_type => Target::BuildType.dynamic_framework)
      gen = Generator::ModuleMap.new(@pod_target)
      gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        framework module BananaLib {
          umbrella header 'BananaLibWith\\'Quotes\\'-umbrella.h'
    }
    
          it 'hashes scopes that are longer than 50 characters' do
        @bar_subspec.name = 'matryoshka/ThisIsAReallyLongSubspecName'
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec], [], [], Platform.osx),
          PodVariant.new([@root_spec, @default_subspec, @foo_subspec, @bar_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec, @bar_subspec], [], [], Platform.osx),
        ])
        variants.scope_suffixes.values.should == %w(
          iOS
          macOS
          c4ca5113
          .default-matryoshka_ThisIsAReallyLongSubspecName
        )
      end
    
            it 'can be initialized with specs and platform' do
          variant = PodVariant.new(@specs, [], [], @platform)
          variant.specs.should == @specs
          variant.platform.should == @platform
          variant.build_type.should == Target::BuildType.static_library
        end
    
                  mock_build_file = Struct.new(:settings).new
              mock_build_phase = mock
              mock_build_phase.stubs(:add_file_reference).returns(mock_build_file)
    
          def spec_sets
        @spec_sets ||= begin
          analyzer.send(:update_repositories) if repo_update?(:default => true)
          aggregate = Source::Aggregate.new(analyzer.sources)
          installed_pods.map do |pod_name|
            aggregate.search(Dependency.new(pod_name))
          end.compact.uniq
        end
      end
    
    require 'bootstrap/environment'
    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    default_vagrant_boxes = ( platform == 'all' ? config.platforms : config.filter_type(platform, {'experimental' => experimental}) )
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
      context 'given a distribution without a META.* file' do
    it 'should package IPC::Session' do
      pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
        def validate
      # Make sure the user has passed '-s' and '-t' flags
      mandatory(@command.input_type,
                'Missing required -s flag. What package source did you want?')
      mandatory(@command.output_type,
                'Missing required -t flag. What package output did you want?')
    
        self.description = info['description']
    # Supposedly you can upload a package for npm with no author/author email
    # so I'm being safer with this. Author can also be a hash or a string
    self.vendor = 'Unknown <unknown@unknown.unknown>'
    if info.include?('author')
      author_info = info['author']
      # If a hash, assemble into a string
      if author_info.respond_to? :fetch
        self.vendor = sprintf('%s <%s>', author_info.fetch('name', 'unknown'),
                              author_info.fetch('email', 'unknown@unknown.unknown'))
      else
        # Probably will need a better check for validity here
        self.vendor = author_info unless author_info == ''
      end
    end
    
      # The list of supported compression types. Default is xz (LZMA2)
  COMPRESSION_TYPES = [ 'gz', 'bzip2', 'xz', 'none' ]
    
    
    
        def [](name)
      @cookies[name.to_s]
    end
    
            # Specify the format for the API's serializers.
        # May be `:json`, `:xml`, `:txt`, etc.
        def format(new_format = nil)
          if new_format
            namespace_inheritable(:format, new_format.to_sym)
            # define the default error formatters
            namespace_inheritable(:default_error_formatter, Grape::ErrorFormatter.formatter_for(new_format, {}))
            # define a single mime type
            mime_type = content_types[new_format.to_sym]
            raise Grape::Exceptions::MissingMimeType.new(new_format) unless mime_type
            namespace_stackable(:content_types, new_format.to_sym => mime_type)
          else
            namespace_inheritable(:format)
          end
        end
    
          def namespace_reverse_stackable_with_hash(key)
        settings = get_or_set :namespace_reverse_stackable, key, nil
        return if settings.blank?
        result = {}
        settings.each do |setting|
          setting.each do |field, value|
            result[field] ||= value
          end
        end
        result
      end