
        
                result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            force: true
          })
        end').runner.execute(:test)
    
          it 'adds logformat param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            logformat: '1'
          )
        end').runner.execute(:test)
    
    # Windows implementation
module WindowsShellwords
  def shellescape(str)
    str = str.to_s
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
          Utils.sort_tuples!(tuples)
      expect(tuples).to eq expected
    end
    
        it 'should generate the correct specific tracking url' do
      @checker.options['path'] = 'trackings/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings/usps/9361289878905919630610')
    end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
        def add(path, content)
      @pages[path] = content
    end
    
          def process_response(response)
        super.merge! response_effective_path: response.effective_path, response_path: response.path
      end
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
    task :gemspec => 'rack-protection.gemspec'
task :default => :spec
task :test    => :spec

    
      it 'denies post requests with wrong X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => bad_token)
    expect(last_response).not_to be_ok
  end
    
        it 'adds the correct Set-Cookie header' do
      get '/some/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
    
    module LogStash
  module PluginManager
  end
end
    
          post_install_messages.compact.each do |message|
        PluginManager.ui.info(message)
      end
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end