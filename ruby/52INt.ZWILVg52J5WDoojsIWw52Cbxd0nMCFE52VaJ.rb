
        
        describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          @agent2.delete
    
        it 'should convert the 'escape' method correctly' do
      expect(LiquidMigrator.convert_string('Escaped: <escape $.content.name>\nNot escaped: <$.content.name>')).to eq(
                                    'Escaped: {{content.name | uri_escape}}\nNot escaped: {{content.name}}'
      )
    end
    
          expect(Utils.unindent('Hello\n  I am indented')).to eq('Hello\n  I am indented')
    
        it 'should require the basecamp project_id' do
      @checker.options['project_id'] = nil
      expect(@checker).not_to be_valid
    end
    
        it { is_expected.to have_valid_bash_syntax }
  end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
        attr_writer :sessions
    
          help = '(#{type} only) #{help}'
      @options << [flag, param, help, options, block]
    end # def options
    
        # data tar.
    tar_path(staging_path(''), datatar_path)
    
        safesystem(*install_args)
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
    require 'pleaserun/cli'
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end