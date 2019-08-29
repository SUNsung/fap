
        
        describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
    describe HuginnScheduler do
  before(:each) do
    @rufus_scheduler = Rufus::Scheduler.new
    @scheduler = HuginnScheduler.new
    stub(@scheduler).setup {}
    @scheduler.setup!(@rufus_scheduler, Mutex.new)
  end
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
        it 'should generate the correct events url' do
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings')
    end
    
          let(:valid_params) {
        {
          name: 'Example',
          schedule: 'never',
          options: {
            'action' => '{% if target.id == agent_id %}configure{% endif %}',
            'configure_options' => {
              'rules' => [
                {
                  'type' => 'field<value',
                  'value' => '{{price}}',
                  'path' => 'price',
                }
              ]
            }
          },
          user: users(:bob),
          control_targets: [target, real_target]
        }
      }
    
          it 'writes headers when with_header is true' do
        event = Event.new(payload: { 'data' => {'key' => 'value', 'key2' => 'value2', 'key3' => 'value3'} })
        expect { @checker.receive([event])}.to change(Event, :count).by(1)
        expect(Event.last.payload).to eq('data' => '\'key\',\'key2\',\'key3\'\n\'value\',\'value2\',\'value3\'\n')
      end
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
            field_options.merge!(readonly: options[:readonly],
                             disabled: options[:disabled],
                             size: options[:size])
      end
    
          private
    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end