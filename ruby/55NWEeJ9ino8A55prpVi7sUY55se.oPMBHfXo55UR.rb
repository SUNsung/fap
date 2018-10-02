
        
            def set_report_note
      @report_note = ReportNote.find(params[:id])
    end
  end
end

    
        def status_params
      params.require(:status).permit(:sensitive)
    end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
    Given /^(?:|[tT]hat )?following user[s]?(?: exist[s]?)?:$/ do |table|
  table.hashes.each do |hash|
    if hash.has_key? 'username' and hash.has_key? 'email'
      step %{a user named '#{hash['username']}' with email '#{hash['email']}'}
    elsif hash.has_key? 'username'
      step %{a user with username '#{hash['username']}'}
    elsif hash.has_key? 'email'
      step %{a user with email '#{hash['email']}'}
    end
  end
end
    
    require 'coveralls'
Coveralls.wear!('rails')
    
        puts('Generated at #{target_file}')
  end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end