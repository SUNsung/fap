
        
            before do
      hex = 'xxx'
      SecureRandom.stubs(:hex).returns(hex)
      @temp_folder = '#{Pathname.new(Dir.tmpdir).realpath}/discourse_theme_#{hex}'
      @ssh_folder = '#{Pathname.new(Dir.tmpdir).realpath}/discourse_theme_ssh_#{hex}'
    end
    
        it 'supports one and other' do
      override_translation('en', 'items.one', 'one fish')
      override_translation('en', 'items.other', '%{count} fishies')
      expect(I18n.t('items', count: 13)).to eq('13 fishies')
      expect(I18n.t('items', count: 1)).to eq('one fish')
    end
    
      context 'S3 specific behavior' do
    before { create_backups }
    after(:all) { remove_backups }
    
    end

    
        helper = S3Helper.new('bob', 'tomb')
    helper.update_tombstone_lifecycle(100)
  end
    
    def log(message)
  puts '[#{DateTime.now.strftime('%Y-%m-%d %H:%M:%S')}] #{message}'
end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'should work with the human task agent' do
      valid_params = {
        'expected_receive_period_in_days' => 2,
        'trigger_on' => 'event',
        'hit' =>
          {
            'assignments' => 1,
            'title' => 'Sentiment evaluation',
            'description' => 'Please rate the sentiment of this message: '<$.message>'',
            'reward' => 0.05,
            'lifetime_in_seconds' => 24 * 60 * 60,
            'questions' =>
              [
                {
                  'type' => 'selection',
                  'key' => 'sentiment',
                  'name' => 'Sentiment',
                  'required' => 'true',
                  'question' => 'Please select the best sentiment value:',
                  'selections' =>
                    [
                      { 'key' => 'happy', 'text' => 'Happy' },
                      { 'key' => 'sad', 'text' => 'Sad' },
                      { 'key' => 'neutral', 'text' => 'Neutral' }
                    ]
                },
                {
                  'type' => 'free_text',
                  'key' => 'feedback',
                  'name' => 'Have any feedback for us?',
                  'required' => 'false',
                  'question' => 'Feedback',
                  'default' => 'Type here...',
                  'min_length' => '2',
                  'max_length' => '2000'
                }
              ]
          }
      }
      @agent = Agents::HumanTaskAgent.new(:name => 'somename', :options => valid_params)
      @agent.user = users(:jane)
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options['hit']['description']).to eq('Please rate the sentiment of this message: '{{message}}'')
    end
  end
end
    
        it 'should provide the since attribute after the first run' do
      time = (Time.now-1.minute).iso8601
      @checker.memory[:last_event] = time
      @checker.save
      expect(@checker.reload.send(:query_parameters)).to eq({:query => {:since => time}})
    end
  end
    
      def mark_as_processing!
    redis.setex('move_in_progress:#{@account.id}', PROCESSING_COOLDOWN, true)
  end
end

    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(nil)
        expect(ActivityPub::Activity).not_to receive(:factory)
    
            it 'not calls erros.add' do
          expect(errors).not_to have_received(:add).with(:username, any_args)
        end
      end
    end
  end
end

    
    RSpec.describe UrlValidator, type: :validator do
  describe '#validate_each' do
    before do
      allow(validator).to receive(:compliant?).with(value) { compliant }
      validator.validate_each(record, attribute, value)
    end
    
        before do
      get :show, params: { id: poll.id }
    end
    
            let(:object_json) do
          {
            id: 'https://example.com/actor#bar',
            type: 'Note',
            content: 'Lorem ipsum',
            to: 'http://example.com/followers',
            attributedTo: 'https://example.com/actor',
          }
        end
    
      spec.files         = %w[
    LICENSE.txt
    README.md
    ext/etc/constdefs.h
    ext/etc/etc.c
    ext/etc/extconf.rb
    ext/etc/mkconstants.rb
    stub/etc.rb
    test/etc/test_etc.rb
  ]
  spec.bindir        = 'exe'
  spec.require_paths = ['lib']
  spec.extensions    = %w{ext/etc/extconf.rb}
    
    testdata( File.dirname($0) + '/scandata', ARGV ).each do |file|
  $stderr.print File.basename(file) + ': '
  begin
    ok = File.read(file)
    s = Racc::GrammarFileScanner.new( ok )
    sym, (val, _lineno) = s.scan
    if printonly then
      $stderr.puts
      $stderr.puts val
      next
    end
    
        assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sin('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.cos('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.tan('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sinh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.cosh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.tanh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.asin('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atan('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.asinh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.acosh('0') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atanh('0') }
  end
    
        gz.pos.should == 0
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not append anything to the stream' do
          @gz.ungetbyte nil
          @gz.read.should == ''
        end
    
    describe 'Zlib::Inflate#finish' do
    
          it 'flashes an error message' do
        post '/users/api_secrets', params: { api_secret: invalid_params }
        expect(flash[:error]).to be_truthy
        expect(flash[:notice]).to be_nil
      end
    end
  end
end

    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
      def destroy
    @page = Page.find(params[:id])
    @page.destroy
    redirect_to '/internal/pages'
  end
    
        def tmux_new_window_command
      path = root? ? '#{Tmuxinator::Config.default_path_option} #{root}' : nil
      '#{project.tmux} new-window #{path} -t #{tmux_window_target} #{tmux_window_name_option}'
    end
    
        it 'should raise if there is not a project name' do
      expect do
        noname_project.validate!
      end.to raise_error RuntimeError, %r{didn't.specify.a.'project_name'}
    end
  end
end

    
        context 'and there is no local project config' do
      context 'when no args are supplied' do
        it 'should call ::start' do
          expect(cli).to receive(:start).with([])
          subject
        end
      end
    
          # The first pathname of the project named 'name' found while
      # recursively searching 'directory'
      def project_in(directory, name)
        return nil if String(directory).empty?
        projects = Dir.glob('#{directory}/**/*.{yml,yaml}').sort
        projects.detect { |project| File.basename(project, '.*') == name }
      end
    end
  end
end

    
        context 'both $XDG_CONFIG_HOME/tmuxinator and ~/.tmuxinator exist' do
      it 'is #xdg' do
        allow(described_class).to receive(:environment?).and_return false
        allow(described_class).to receive(:xdg?).and_return true
        allow(described_class).to receive(:home?).and_return true