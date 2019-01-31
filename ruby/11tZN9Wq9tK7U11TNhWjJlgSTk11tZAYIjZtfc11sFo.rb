
        
                    if placeholder_required?(html_options)
              raise ArgumentError, 'include_blank cannot be false for a required field.' if options[:include_blank] == false
              options[:include_blank] ||= true unless options[:prompt]
            end
    
            def render
          options = @options.stringify_keys
          options['type']     = 'checkbox'
          options['value']    = @checked_value
          options['checked'] = 'checked' if input_checked?(options)
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        %w(<< concat push insert unshift).each do |method|
      class_eval <<-METHOD, __FILE__, __LINE__ + 1
        def #{method}(*args)
          paths.#{method}(*typecast(args))
        end
      METHOD
    end
    
        def initialize(lookup_context)
      @lookup_context = lookup_context
    end
    
      it 'shows the dry run pop up without previous events and selects the log tab when no event was created' do
    stub_request(:get, 'http://xkcd.com/').
      with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
      to_return(:status => 200, :body => '', :headers => {})
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
    describe AgentsExporter do
  describe '#as_json' do
    let(:name) { 'My set of Agents' }
    let(:description) { 'These Agents work together nicely!' }
    let(:guid) { 'some-guid' }
    let(:tag_fg_color) { '#ffffff' }
    let(:tag_bg_color) { '#000000' }
    let(:icon) { 'Camera' }
    let(:source_url) { 'http://yourhuginn.com/scenarios/2/export.json' }
    let(:agent_list) { [agents(:jane_weather_agent), agents(:jane_rain_notifier_agent)] }
    let(:exporter) { AgentsExporter.new(
      agents: agent_list, name: name, description: description,
      source_url: source_url, guid: guid, tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color, icon: icon) }
    
    Given(/^file '(.*?)' exists in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{file_shared_path.dirname}')
  run_vagrant_command('touch #{file_shared_path}')
end
    
    http://capistranorb.com/documentation/advanced-features/custom-scm
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
        # also set the env LOGSTASH_HOME
    LOGSTASH_HOME = ENV['LOGSTASH_HOME'] = ::File.expand_path(::File.join(__FILE__, '..', '..', '..'))
    
    require 'bootstrap/environment'
    
      def target_file
    target_file = File.join(LogStash::Environment::LOGSTASH_HOME, 'plugins_package')
    '#{target_file}#{file_extension}'
  end
end

    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
    # Quiet some warnings we see when running in warning mode:
# RUBYOPT=-w bundle exec sidekiq
$TESTING = false
    
          def requeue
        Sidekiq.redis do |conn|
          conn.rpush('queue:#{queue_name}', job)
        end
      end
    end
    
            begin
          b = File.stat(fp.path)
          next if orig_st.ino == b.ino && orig_st.dev == b.dev
        rescue Errno::ENOENT
        end
    
      module TestingClient
    def raw_push(payloads)
      if Sidekiq::Testing.fake?
        payloads.each do |job|
          job = Sidekiq.load_json(Sidekiq.dump_json(job))
          job.merge!('enqueued_at' => Time.now.to_f) unless job['at']
          Queues.push(job['queue'], job['class'], job)
        end
        true
      elsif Sidekiq::Testing.inline?
        payloads.each do |job|
          klass = Sidekiq::Testing.constantize(job['class'])
          job['id'] ||= SecureRandom.hex(12)
          job_hash = Sidekiq.load_json(Sidekiq.dump_json(job))
          klass.process_job(job_hash)
        end
        true
      else
        super
      end
    end
  end
    
        def params
      indifferent_hash = Hash.new {|hash,key| hash[key.to_s] if Symbol === key }
    
              return WebAction.new(env, route.block)
        end
      end
    
        @name = nil
    @architecture = 'native'
    @description = 'no description given'
    @version = nil
    @epoch = nil
    @iteration = nil
    @url = nil
    @category = 'default'
    @license = 'unknown'
    @vendor = 'none'
    
        File.write('#{base_path}/.PKGINFO', pkginfo)
  end
    
        File.write(build_path('description'), self.description + '\n')
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
        if !File.exist?(setup_py)
      logger.error('Could not find 'setup.py'', :path => setup_py)
      raise 'Unable to find python package; tried #{setup_py}'
    end
    
      # Generate the proper tar flags based on the path name.
  def tar_compression_flag(path)
    case path
      when /\.tar\.bz2$/
        return '-j'
      when /\.tar\.gz$|\.tgz$/
        return '-z'
      when /\.tar\.xz$/
        return '-J'
      else
        return nil
    end
  end # def tar_compression_flag
end # class FPM::Package::Tar

    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end