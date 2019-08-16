
        
              expect(finder.find('test-template')).to be_present
    end
    
            (options.required_claims || []).each do |field|
          raise ClaimInvalid, 'Missing required '#{field}' claim' unless @decoded.key?(field.to_s)
        end
    
          expect(diff_file.added_lines).to eq(stats_mock.additions)
      expect(diff_file.removed_lines).to eq(stats_mock.deletions)
    end
  end
    
          m = []
      a = ['/foo/bar']
      r = []
      subject.callback(paths, m, a, r)
    end
    
        let(:empty_network_settings) { {'NetworkSettings' => {'Bridge'=>'', 'SandboxID'=>'randomid', 'HairpinMode'=>false, 'LinkLocalIPv6Address'=>'', 'LinkLocalIPv6PrefixLen'=>0, 'Ports'=>'', 'SandboxKey'=>'/var/run/docker/netns/158b7024a9e4', 'SecondaryIPAddresses'=>nil, 'SecondaryIPv6Addresses'=>nil, 'EndpointID'=>'randomEndpointID', 'Gateway'=>'172.17.0.1', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'IPAddress'=>'', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'MacAddress'=>'02:42:ac:11:00:02', 'Networks'=>{'bridge'=>{'IPAMConfig'=>nil, 'Links'=>nil, 'Aliases'=>nil, 'NetworkID'=>'networkIDVar', 'EndpointID'=>'endpointIDVar', 'Gateway'=>'127.0.0.1', 'IPAddress'=>'127.0.0.1', 'IPPrefixLen'=>16, 'IPv6Gateway'=>'', 'GlobalIPv6Address'=>'', 'GlobalIPv6PrefixLen'=>0, 'MacAddress'=>'02:42:ac:11:00:02', 'DriverOpts'=>nil}}}} }
    
          env[:box_url] = tf.path
      env[:box_provider] = 'vmware'
      expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
        expect(checksum(path)).to eq(checksum(box_path))
        expect(name).to eq('foo/bar')
        expect(version).to eq('0.7')
        expect(opts[:metadata_url]).to eq('file://#{tf.path}')
        true
      }.and_return(box)
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
          # Load once so that we can get the proper box value
      config, config_warnings, config_errors = @loader.load(keys)
    
        # Action runner for executing actions in the context of this environment.
    #
    # @return [Action::Runner]
    def action_runner
      @action_runner ||= Action::Runner.new do
        {
          action_runner:  action_runner,
          box_collection: boxes,
          hook:           method(:hook),
          host:           host,
          machine_index:  machine_index,
          gems_path:      gems_path,
          home_path:      home_path,
          root_path:      root_path,
          tmp_path:       tmp_path,
          ui:             @ui,
          env:            self
        }
      end
    end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
        it 'returns nil if empty' do
      expect(subject.fetch_checksum_for(:foo)).to be nil
    end
    
              find_method_with_args(body_node, :skip_clean, :all) do
            problem '`skip_clean :all` is deprecated; brew no longer strips symbols. ' \
                    'Pass explicit paths to prevent Homebrew from removing empty folders.'
          end
    
    require 'rubocops/text'
    
      def initialize
    @resource = Resource.new
    @resources = {}
    @dependency_collector = DependencyCollector.new
    @bottle_specification = BottleSpecification.new
    @patches = []
    @options = Options.new
    @flags = ARGV.flags_only
    @deprecated_flags = []
    @deprecated_options = []
    @build = BuildOptions.new(Options.create(@flags), options)
    @compiler_failures = []
    @bottle_disable_reason = nil
  end
    
          expect(subject.deps.first.name).to eq('foo')
    end
    
        # This can be compared to numerics, strings, or symbols
    # using the standard Ruby Comparable methods.
    def version
      @version ||= Version.new(full_version.to_s[/10\.\d+/])
    end
    
          metadata_master_container_path.join(cask_version)
    end
    
        def self.nice_listing(cask_list)
      cask_taps = {}
      cask_list.each do |c|
        user, repo, token = c.split '/'
        repo.sub!(/^homebrew-/i, '')
        cask_taps[token] ||= []
        cask_taps[token].push '#{user}/#{repo}'
      end
      list = []
      cask_taps.each do |token, taps|
        if taps.length == 1
          list.push token
        else
          taps.each { |r| list.push [r, token].join '/' }
        end
      end
      list.sort
    end
    
        begin
      download = f.fetch(verify_download_integrity: false)
    rescue DownloadError
      retry if retry_fetch? f
      raise
    end
    
          unless system curl_executable, '--silent', '--fail', '--output', '/dev/null', package_url
        package_blob = <<~JSON
          {'name': '#{bintray_package}',
           'public_download_numbers': true,
           'public_stats': true}
        JSON
        curl '--silent', '--fail', '--user', '#{bintray_user}:#{bintray_key}',
             '--header', 'Content-Type: application/json',
             '--data', package_blob, bintray_repo_url
        puts
      end
    
            if req.prune_from_option?(build)
          Requirement.prune
        elsif req.satisfied?
          Requirement.prune
        elsif include_test? && req.test?
          next
        elsif !runtime_requirements.include?(req) && install_bottle_for_dependent
          Requirement.prune
        elsif (dep = formula_deps_map[dependent.name]) && dep.build?
          Requirement.prune
        else
          unsatisfied_reqs[dependent] << req
        end
      end
    end
    
        simple.disconnect(share)
    psh
  end
    
    protected
    
    =begin
 +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   +------+----------------+-------------------------------------------+
   | HEX  | NAME           | DESCRIPTION                               |
   | 0x01 | CALLED NUMBER  | Number/extension being called             |
   | 0x02 | CALLING NUMBER | Calling number                            |
   | 0x03 | CALLING ANI    | Calling number ANI for billing            |
   | 0x04 | CALLING NAME   | Name of caller                            |
   | 0x05 | CALLED CONTEXT | Context for number                        |
   | 0x06 | USERNAME       | Username (peer or user) for               |
   |      |                | authentication                            |
   | 0x07 | PASSWORD       | Password for authentication               |
   | 0x08 | CAPABILITY     | Actual CODEC capability                   |
   | 0x09 | FORMAT         | Desired CODEC format                      |
   | 0x0a | LANGUAGE       | Desired language                          |
   | 0x0b | VERSION        | Protocol version                          |
   | 0x0c | ADSICPE        | CPE ADSI capability                       |
   | 0x0d | DNID           | Originally dialed DNID                    |
   | 0x0e | AUTHMETHODS    | Authentication method(s)                  |
   | 0x0f | CHALLENGE      | Challenge data for MD5/RSA                |
   | 0x10 | MD5 RESULT     | MD5 challenge result                      |
   | 0x11 | RSA RESULT     | RSA challenge result                      |
   | 0x12 | APPARENT ADDR  | Apparent address of peer                  |
   | 0x13 | REFRESH        | When to refresh registration              |
   | 0x14 | DPSTATUS       | Dialplan status                           |
   | 0x15 | CALLNO         | Call number of peer                       |
   | 0x16 | CAUSE          | Cause                                     |
   | 0x17 | IAX UNKNOWN    | Unknown IAX command                       |
   | 0x18 | MSGCOUNT       | How many messages waiting                 |
   | 0x19 | AUTOANSWER     | Request auto-answering                    |
   | 0x1a | MUSICONHOLD    | Request musiconhold with QUELCH           |
   | 0x1b | TRANSFERID     | Transfer Request Identifier               |
   | 0x1c | RDNIS          | Referring DNIS                            |
   | 0x1d | Reserved       | Reserved for future use                   |
   | 0x1e | Reserved       | Reserved for future use                   |
   | 0x1f | DATETIME       | Date/Time                                 |
   | 0x20 | Reserved       | Reserved for future use                   |
   | 0x21 | Reserved       | Reserved for future use                   |
   | 0x22 | Reserved       | Reserved for future use                   |
   | 0x23 | Reserved       | Reserved for future use                   |
   | 0x24 | Reserved       | Reserved for future use                   |
   | 0x25 | Reserved       | Reserved for future use                   |
   | 0x26 | CALLINGPRES    | Calling presentation                      |
   | 0x27 | CALLINGTON     | Calling type of number                    |
   | 0x28 | CALLINGTNS     | Calling transit network select            |
   | 0x29 | SAMPLINGRATE   | Supported sampling rates                  |
   | 0x2a | CAUSECODE      | Hangup cause                              |
   | 0x2b | ENCRYPTION     | Encryption format                         |
   | 0x2c | ENCKEY         | Reserved for future Use                   |
   | 0x2d | CODEC PREFS    | CODEC Negotiation                         |
   | 0x2e | RR JITTER      | Received jitter, as in RFC 3550           |
   | 0x2f | RR LOSS        | Received loss, as in RFC 3550             |
   | 0x30 | RR PKTS        | Received frames                           |
   | 0x31 | RR DELAY       | Max playout delay for received frames in  |
   |      |                | ms                                        |
   | 0x32 | RR DROPPED     | Dropped frames (presumably by jitter      |
   |      |                | buffer)                                   |
   | 0x33 | RR OOO         | Frames received Out of Order              |
   | 0x34 | OSPTOKEN       | OSP Token Block                           |
   +------+----------------+-------------------------------------------+
=end
    
        data =
      [0x00, 0x00, 0x00, 0x00].pack('C*') +
      bmc_session_id +
      console_random_id +
      [
        0x14, 0x00, 0x00,
        username.length
      ].pack('C*') +
      username
    
                checksum = cipher[0, 16]
            data = cipher[16, cipher.length - 1]
    
        def make(agent, extended_performance_collection=true)
      LogStash::Event.new(
        'timestamp' => @snapshot.created_at,
        'logstash' => fetch_node_stats(agent, @metric_store),
        'events' => format_global_event_count(@metric_store),
        'process' => format_process_stats(@metric_store),
        'pipelines' => LogStash::Config::PipelinesInfo.format_pipelines_info(agent, @metric_store, extended_performance_collection),
        'reloads' => format_reloads(@metric_store),
        'jvm' => format_jvm_stats(@metric_store),
        'os' => format_os_stats(@metric_store),
        'queue' => format_queue_stats(agent, @metric_store),
        '@metadata' => {
          'document_type' => 'logstash_stats',
          'timestamp' => Time.now
        }
      )
    end
    
        def initialize(plugins_to_package, target)
      @plugins_to_package = Array(plugins_to_package)
      @target = target
    
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
    
    $TESTING = true
# disable minitest/parallel threads
ENV['N'] = '0'
    
        it 'allows option overrides' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set(queue: :bar).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 12, job['retry']
    end
    
      describe 'redis connection' do
    it 'does not continually retry' do
      assert_raises Redis::CommandError do
        Sidekiq.redis do |c|
          raise Redis::CommandError, 'READONLY You can't write against a replica.'
        end
      end
    end
    
      it 'stubs the enqueue_to call' do
    assert_equal 0, EnqueuedWorker.jobs.size
    assert Sidekiq::Client.enqueue_to('someq', EnqueuedWorker, 1, 2)
    assert_equal 1, Sidekiq::Queues['someq'].size
  end
    
      describe 'regressions should not occur', :if => program_exists?('rpmbuild') do
    before :each do
      @tempfile_handle =
      @target = Stud::Temporary.pathname
      subject.name = 'name'
      subject.version = '1.23'
    end
    
          it 'should have the custom name' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.name } == 'custom-name'
      end
    
      def to_s(format=nil)
    return super(format.nil? ? 'NAME-FULLVERSION.EXTENSION' : format)
  end # def to_s
end # class FPM::Package::FreeBSD

    
        # Evaluate dependencies.
    if !attributes[:no_auto_depends?]
	    pkgdepend_gen = safesystemout('pkgdepend', 'generate',  '-md', '#{staging_path}',  manifest_fn)
      File.write(build_path('#{name}.p5m.3'), pkgdepend_gen)
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
      # This method is used by the puppet manifest template
  def puppetsort(hash)
    # TODO(sissel): Implement sorting that follows the puppet style guide
    # Such as, 'ensure' goes first, etc.
    return hash.to_a
  end # def puppetsort
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)