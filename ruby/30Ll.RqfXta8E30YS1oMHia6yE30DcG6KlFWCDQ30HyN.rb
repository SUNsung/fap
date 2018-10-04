
        
            # Determine the layout for a given name, taking into account the name type.
    #
    # ==== Parameters
    # * <tt>name</tt> - The name of the template
    def _layout_for_option(name)
      case name
      when String     then _normalize_layout(name)
      when Proc       then name
      when true       then Proc.new { |formats| _default_layout(formats, true)  }
      when :default   then Proc.new { |formats| _default_layout(formats, false) }
      when false, nil then nil
      else
        raise ArgumentError,
          'String, Proc, :default, true, or false, expected for `layout'; you passed #{name.inspect}'
      end
    end
    
          def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
    def name
  'jekyll'
end
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
    def run_jekyll(args)
  args = args.strip.split(' ') # Shellwords?
  process = run_in_shell('ruby', Paths.jekyll_bin.to_s, *args, '--trace')
  process.exitstatus.zero?
end
    
            def running?
          EM.reactor_running?
        end
    
                hsh[cleaned_key] = val
          end
        end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        def self.package(plugins_args, target)
      OfflinePluginPackager.new(plugins_args, target).execute
    end
  end
end end

    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
        FileUtils.rm_rf(LogStash::Environment::CACHE_PATH)
    validate_cache_location
    archive_manager.extract(package_file, LogStash::Environment::CACHE_PATH)
    puts('Unpacked at #{LogStash::Environment::CACHE_PATH}')
    puts('The unpacked plugins can now be installed in local-only mode using bin/logstash-plugin install --local [plugin name]')
  end
    
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
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
        let(:plugin_name) { 'logstash-filter-qatest' }
    let(:previous_version) { '0.1.0' }