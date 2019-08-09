
        
            let!(:bob_formatting_agent) {
      agents(:bob_formatting_agent).tap { |agent|
        # Make this valid
        agent.options['instructions']['foo'] = 'bar'
        agent.save!
      }
    }
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
    end

    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
        it 'cleans up old logs when there are more than log_length' do
      stub(AgentLog).log_length { 4 }
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 3')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 4')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 1')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 5')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 2')
      AgentLog.log_for_agent(agents(:jane_website_agent), 'message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').first.message).to eq('message 6')
      expect(agents(:jane_website_agent).logs.order('agent_logs.id desc').last.message).to eq('message 3')
    end
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
        @a.rw = 'W'
    
        refute @co.suppressed?
  end
    
      def header
    <<-'HEADER'
# SOME DESCRIPTIVE TITLE.
# Copyright (C) YEAR THE PACKAGE'S COPYRIGHT HOLDER
# This file is distributed under the same license as the PACKAGE package.
# FIRST AUTHOR <EMAIL@ADDRESS>, YEAR.
#, fuzzy
msgid ''
msgstr ''
'Project-Id-Version: PACKAGE VERSEION\n'
'Report-Msgid-Bugs-To:\n'
'PO-Revision-Date: YEAR-MO_DA HO:MI+ZONE\n'
'Last-Translator: FULL NAME <EMAIL@ADDRESS>\n'
'Language-Team: LANGUAGE <LL@li.org>\n'
'Language:\n'
'MIME-Version: 1.0\n'
'Content-Type: text/plain; charset=CHARSET\n'
'Content-Transfer-Encoding: 8bit\n'
'Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\n'
    HEADER
  end
    
      def test_references_multiple
    options = {:references => [['lib/rdoc.rb', 29], ['lib/rdoc/i18n.rb', 9]]}
    assert_equal <<-'ENTRY', entry('Hello', options).to_s
#: lib/rdoc.rb:29
#: lib/rdoc/i18n.rb:9
msgid 'Hello'
msgstr ''
    ENTRY
  end
    
      def test_module_extended
    m1 = @xref_data.add_module RDoc::NormalModule, 'Mod1'
    m1_m3 = m1.add_module RDoc::NormalModule, 'Mod3'
    m1_m2 = m1.add_module RDoc::NormalModule, 'Mod2'
    m1_m2_m3 = m1_m2.add_module RDoc::NormalModule, 'Mod3'
    m1_m2_m3_m4 = m1_m2_m3.add_module RDoc::NormalModule, 'Mod4'
    m1_m2_m4 = m1_m2.add_module RDoc::NormalModule, 'Mod4'
    m1_m2_k0 = m1_m2.add_class RDoc::NormalClass, 'Klass0'
    m1_m2_k0_m4 = m1_m2_k0.add_module RDoc::NormalModule, 'Mod4'
    #m1_m2_k0_m4_m5 = m1_m2_k0_m4.add_module RDoc::NormalModule, 'Mod5'
    m1_m2_k0_m4_m6 = m1_m2_k0_m4.add_module RDoc::NormalModule, 'Mod6'
    m1_m2_k0_m5 = m1_m2_k0.add_module RDoc::NormalModule, 'Mod5'
    
    Then(/^the current symlink points to that specific release$/) do
  specific_release_path = TestApp.releases_path.join(@rollback_release)
    
          def load_built_in_scm
        require 'capistrano/scm/#{scm_name}'
        scm_class = Object.const_get(built_in_scm_plugin_class_name)
        # We use :load_immediately because we are initializing the SCM plugin
        # late in the load process and therefore can't use the standard
        # load:defaults technique.
        install_plugin(scm_class, load_immediately: true)
      end
    
          def primary
        self if fetch(:primary)
      end
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end
    
          # Decorate Variables#set to add validation behavior.
      def set(key, value=nil, &block)
        assert_value_or_block_not_both(value, block)
    
          extend Tmuxinator::WemuxSupport if wemux?
    end
    
          @name = first_key.to_s.shellescape unless first_key.nil?
      @yaml = window_yaml.values.first
      @project = project
      @index = index
      @commands = build_commands(tmux_window_command_prefix, @yaml)
    end
    
    require 'tmuxinator'
require 'factory_bot'
    
            it 'returns two panes in an Array' do
          expect(window.panes).to match [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands(command1, command2)
          ]
        end
      end
    end
  end