
        
            if f.keg_only?
      keg_site_packages = f.opt_prefix/'lib/python2.7/site-packages'
      unless Language::Python.in_sys_path?('python', keg_site_packages)
        s = <<-EOS.undent
          If you need Python to find bindings for this keg-only formula, run:
            echo #{keg_site_packages} >> #{homebrew_site_packages/f.name}.pth
        EOS
        s += instructions unless Language::Python.reads_brewed_pth_files?('python')
      end
      return s
    end
    
      def internal_development_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
      def dump_verbose_config(f = $stdout)
    f.puts 'HOMEBREW_VERSION: #{HOMEBREW_VERSION}'
    f.puts 'ORIGIN: #{origin}'
    f.puts 'HEAD: #{head}'
    f.puts 'Last commit: #{last_commit}'
    if CoreTap.instance.installed?
      f.puts 'Core tap ORIGIN: #{core_tap_origin}'
      f.puts 'Core tap HEAD: #{core_tap_head}'
      f.puts 'Core tap last commit: #{core_tap_last_commit}'
    else
      f.puts 'Core tap: N/A'
    end
    f.puts 'HOMEBREW_PREFIX: #{HOMEBREW_PREFIX}'
    f.puts 'HOMEBREW_REPOSITORY: #{HOMEBREW_REPOSITORY}'
    f.puts 'HOMEBREW_CELLAR: #{HOMEBREW_CELLAR}'
    f.puts 'HOMEBREW_BOTTLE_DOMAIN: #{BottleSpecification::DEFAULT_DOMAIN}'
    f.puts hardware
    f.puts 'OS X: #{MacOS.full_version}-#{kernel}'
    f.puts 'Xcode: #{xcode ? xcode : 'N/A'}'
    f.puts 'CLT: #{clt ? clt : 'N/A'}'
    f.puts 'GCC-4.0: build #{gcc_40}' if gcc_40
    f.puts 'GCC-4.2: build #{gcc_42}' if gcc_42
    f.puts 'LLVM-GCC: build #{llvm}'  if llvm
    f.puts 'Clang: #{clang ? '#{clang} build #{clang_build}' : 'N/A'}'
    f.puts 'MacPorts/Fink: #{macports_or_fink}' if macports_or_fink
    f.puts 'X11: #{describe_x11}'
    f.puts 'System Ruby: #{describe_system_ruby}'
    f.puts 'Perl: #{describe_perl}'
    f.puts 'Python: #{describe_python}'
    f.puts 'Ruby: #{describe_ruby}'
    f.puts 'Java: #{describe_java}'
  end
end

    
        validate_target_file
    LogStash::Bundler.invoke!({:package => true, :all => true})
    archive_manager.compress(LogStash::Environment::CACHE_PATH, target_file)
    FileUtils.rm_rf(LogStash::Environment::CACHE_PATH) if clean?
    
        class << self
      def elastic_pack_base_uri
        env_url = ENV['LOGSTASH_PACK_URL']
        (env_url.nil? || env_url.empty?) ? DEFAULT_PACK_URL : env_url
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
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
          puts 'Halting #{machines}'
      LogStash::VagrantHelpers.halt(machines, options)
    end
  end
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
      <a href='/'>Refresh page</a>
    
          def create_worker_spec
        template_file = File.join(
            'spec/workers',
            class_path,
            '#{file_name}_worker_spec.rb'
        )
        template 'worker_spec.rb.erb', template_file
      end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
        def fire_event(event, options={})
      reverse = options[:reverse]
      reraise = options[:reraise]
    
    module Sidekiq
  module WebRouter
    GET = 'GET'
    DELETE = 'DELETE'
    POST = 'POST'
    PUT = 'PUT'
    PATCH = 'PATCH'
    HEAD = 'HEAD'