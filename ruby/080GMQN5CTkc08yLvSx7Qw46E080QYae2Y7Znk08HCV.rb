
        
            expect(gu.notification_level).to eq(NotificationLevels.all[:tracking])
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
            def representation_class
          Representation::Note
        end
    
              hash[:state] = hash[:state].to_sym
          hash[:assignees].map! { |u| Representation::User.from_json_hash(u) }
          hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
            NOTEABLE_TYPE_REGEX = %r{/(?<type>(pull|issues))/(?<iid>\d+)}i
    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
      it 'shows the dry run pop up without previous events and selects the log tab when no event was created' do
    stub_request(:get, 'http://xkcd.com/').
      with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
      to_return(:status => 200, :body => '', :headers => {})
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
      describe '#pretty_jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.pretty_jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('<\\/script>')
    end
  end
    
      describe '#check' do
    it 'should check that initial run creates an event' do
      @checker.memory[:last_updated_at] = '2016-03-15T14:01:05+00:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
end

    
          it 'collapse negative number representation if it equals 7' do
        format('%o', -1).should_not == '..77'
        format('%o', -1).should == '..7'
      end
    end
    
      it 'raises an ArgumentError when passed a negative duration' do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end
    
        $?.should be_an_instance_of Process::Status
    $?.success?.should == true
    $?.exitstatus.should == 0
  end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
      it 'calls #to_path on second argument when passed ?e and a filename' do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    Kernel.test(?e, p)
  end
    
          it 'raises ArgumentError if passed negative value' do
        -> { warn '', uplevel: -2 }.should raise_error(ArgumentError)
        -> { warn '', uplevel: -100 }.should raise_error(ArgumentError)
      end
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end