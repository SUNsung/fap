
        
          gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    Then(/^the task is successful$/) do
  expect(@success).to be true
end
    
    Given(/^servers with the roles app and web$/) do
  begin
    vagrant_cli_command('up')
  rescue
    nil
  end
end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
          # Clear all queued jobs across all workers
      def clear_all
        Queues.clear_all
      end
    
          arr = Sidekiq.options[:lifecycle_events][event]
      arr.reverse! if reverse
      arr.each do |block|
        begin
          block.call
        rescue => ex
          handle_exception(ex, { context: 'Exception during Sidekiq lifecycle event.', event: event })
          raise ex if reraise
        end
      end
      arr.clear
    end
  end
end
