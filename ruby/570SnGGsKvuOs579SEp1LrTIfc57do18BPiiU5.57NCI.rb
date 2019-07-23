
        
            assert_kind_of BigDecimal, m1.big_bank_balance
    assert_equal BigDecimal('234000567.95'), m1.big_bank_balance
  end
    
          def test_invert_remove_column
        add = @recorder.inverse_of :remove_column, [:table, :column, :type, {}]
        assert_equal [:add_column, [:table, :column, :type, {}], nil], add
      end
    
      def build_post_stats
    if PostCreator.track_post_stats
      draft_key = @topic ? 'topic_#{@topic.id}' : 'new_topic'
    
        context 'with a category restriction' do
      fab!(:category) { Fabricate(:category, read_restricted: true) }
      let(:topic) { Fabricate(:topic, category: category) }
      let(:post) { Fabricate(:post, topic: topic) }
      fab!(:moderator) { Fabricate(:moderator) }
      fab!(:admin) { Fabricate(:admin) }
    
      def destroy
    group = Group.find_by(id: params[:id])
    raise Discourse::NotFound unless group
    
        def ensure_cors!
      rule = {
        allowed_headers: ['*'],
        allowed_methods: ['PUT'],
        allowed_origins: [Discourse.base_url_no_prefix],
        max_age_seconds: 3000
      }
    
      def update_tombstone_lifecycle(grace_period)
    return if !SiteSetting.s3_configure_tombstone_policy
    return if @tombstone_prefix.blank?
    update_lifecycle('purge_tombstone', grace_period, prefix: @tombstone_prefix)
  end
    
        @objects << { key: 'backups/second/multi-2.tar.gz', size: 19, last_modified: Time.parse('2018-11-27T03:16:54Z') }
    @objects << { key: 'backups/second/multi-1.tar.gz', size: 22, last_modified: Time.parse('2018-11-26T03:17:09Z') }
    @objects << { key: 'backups/second/subfolder/multi-3.tar.gz', size: 23, last_modified: Time.parse('2019-01-24T18:44:00Z') }
  end
    
            # Timeout and datastore options need to be passed through to the client
        opts = {
          :datastore    => datastore,
          :expiration   => datastore['SessionExpirationTimeout'].to_i,
          :comm_timeout => datastore['SessionCommunicationTimeout'].to_i,
          :retry_total  => datastore['SessionRetryTotal'].to_i,
          :retry_wait   => datastore['SessionRetryWait'].to_i,
          :udp_session  => true
        }
    
      def self.handler_type_alias
    'bind_tcp_rc4'
  end
    
        # Handle user-specified seed values
    if datastore['PayloadUUIDSeed'].to_s.length > 0
      conf[:seed] = datastore['PayloadUUIDSeed'].to_s
    end
    
    begin
  require 'bundler/setup'
rescue LoadError => e
  $stderr.puts '[*] Bundler failed to load and returned this error:'
  $stderr.puts
  $stderr.puts '   '#{e}''
  $stderr.puts
  $stderr.puts '[*] You may need to uninstall or upgrade bundler'
  exit(1)
end
    
        path = datastore['PATH'] || session.sys.config.getenv('USERPROFILE')
    path.chomp!('\\')
    
        report_note(host: host,
        type: 'host.persistance.cleanup',
        data: {
          local_id: session.sid,
          stype: session.type,
          desc: session.info,
          platform: session.platform,
          via_payload: session.via_payload,
          via_exploit: session.via_exploit,
          created_at: Time.now.utc,
          commands: @clean_up_rc
        })
  end
    
        register_options(
      [
        OptPath.new('SOURCE_FILE', [true, 'Path to source code']),
        OptBool.new('RUN_BINARY', [false, 'Execute the generated binary', false]),
        OptString.new('ASSEMBLIES', [false, 'Any assemblies outside the defaults', 'mscorlib.dll, System.dll, System.Xml.dll, System.Data.dll' ]),
        OptString.new('OUTPUT_TARGET', [false, 'Name and path of the generated binary, default random, omit extension' ]),
        OptString.new('COMPILER_OPTS', [false, 'Options to pass to compiler', '/optimize']),
        OptString.new('CODE_PROVIDER', [true, 'Code provider to use', 'Microsoft.CSharp.CSharpCodeProvider'])
      ], self.class
    )
    register_advanced_options(
      [
        OptString.new('NET_CLR_VER', [false, 'Minimum NET CLR version required to compile', '4.0'])
      ], self.class
    )
  end
    
        class PluginRawContext
      HOOK_FILE = 'logstash_registry.rb'
      NAME_DELIMITER = '-'
    
    require 'bootstrap/environment'
    
          validate_plugins!
    end
    
      it 'returns the sorted config parts' do
    expect(subject.config_parts).to eq(ordered_config_parts)
  end
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})