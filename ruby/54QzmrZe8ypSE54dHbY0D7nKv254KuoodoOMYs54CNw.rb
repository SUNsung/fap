
        
            fill_in(:agent_options, with: '{
      'expected_receive_period_in_days': '2'
      'keep_event': 'false'
    }')
    expect(get_alert_text_from { click_on 'Save' }).to have_text('Sorry, there appears to be an error in your JSON input. Please fix it before continuing.')
  end
    
              expect(scenario_import.import).to be_falsey
    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
        it 'should generate the correct specific tracking url' do
      @checker.options['path'] = 'trackings/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings/usps/9361289878905919630610')
    end
    
    # Single-line step scoper
When /^(.*) within (.*[^:])$/ do |step, parent|
  with_scope(parent) { When step }
end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end