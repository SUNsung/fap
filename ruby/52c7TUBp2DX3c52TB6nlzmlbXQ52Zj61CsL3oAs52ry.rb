
        
            context '(de)activating users' do
      it 'does not show deactivation buttons for the current user' do
        visit admin_users_path
        expect(page).to have_no_css('a[href='/admin/users/#{users(:jane).id}/deactivate']')
      end
    
      it 'renders the import form' do
    visit new_scenario_imports_path
    expect(page).to have_text('Import a Public Scenario')
  end
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
        it 'unregisters disabled SchedulerAgents' do
      @scheduler.schedule_scheduler_agents
    
        it 'should convert the 'escape' method correctly' do
      expect(LiquidMigrator.convert_string('Escaped: <escape $.content.name>\nNot escaped: <$.content.name>')).to eq(
                                    'Escaped: {{content.name | uri_escape}}\nNot escaped: {{content.name}}'
      )
    end
    
      let :new_template do
    {
      'description' => '{{ hovertext }}',
      'comment' => '{{ comment }}'
    }
  end
    
        it 'updates Agents' last_error_log_at when an error is logged' do
      AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 3, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at).to be_nil
    
        stub_request(:get, /trackings/).to_return(
      :body => File.read(Rails.root.join('spec/data_fixtures/aftership.json')),
      :status => 200,
      :headers => {'Content-Type' => 'text/json'}
    )
    
        def fragment_url_string?(str)
      str[0] == '#'
    end
    
        def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptedData into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            etype_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_etype], 0, :CONTEXT_SPECIFIC)
            elems << etype_asn1
    
          def button_link_to(text, url, html_options = {})
        if html_options[:method] &&
            !html_options[:method].to_s.casecmp('get').zero? &&
            !html_options[:remote]
          form_tag(url, method: html_options.delete(:method), class: 'd-inline') do
            button(text, html_options.delete(:icon), nil, html_options)
          end
        else
          if html_options['data-update'].nil? && html_options[:remote]
            object_name, action = url.split('/')[-2..-1]
            html_options['data-update'] = [action, object_name.singularize].join('_')
          end
    
    describe 'Orders Listing', type: :feature do
  stub_authorization!
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
                render_order(result)
          end