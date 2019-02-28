
        
        describe GroupUser do
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
        it 'returns a label 'No' if a given agent is not working' do
      stub(@agent).working? { false }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'No'
    end
  end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        it 'should work' do
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      describe '#pretty_jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.pretty_jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('<\\/script>')
    end
  end
    
      describe '#log_for_agent' do
    it 'creates AgentLogs' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(log).not_to be_new_record
      expect(log.agent).to eq(agents(:jane_website_agent))
      expect(log.outbound_event).to eq(events(:jane_website_agent_event))
      expect(log.message).to eq('some message')
      expect(log.level).to eq(4)
    end
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
              @commands = Registry.new
          @configs = Hash.new { |h, k| h[k] = Registry.new }
          @guests  = Registry.new
          @guest_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @hosts   = Registry.new
          @host_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @providers = Registry.new
          @provider_capabilities = Hash.new { |h, k| h[k] = Registry.new }
          @pushes = Registry.new
          @synced_folders = Registry.new
        end
      end
    end
  end
end

    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
            last_simple_subject = rest.empty? && sseq.subject?
        if current_rule.nil? || first_sseq(current_rule).members != firsts ||
            !!first_sseq(current_rule).subject? != !!last_simple_subject
          current_rule = Tree::RuleNode.new([])
          current_rule.parsed_rules = make_sseq(last_simple_subject, *firsts)
        end
    
          # @see Base#find_relative
      def find_relative(name, base, options)
        _find(File.dirname(base), name, options)
      end